#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};


int main(void)
{
	struct dateAndTime clockKeeper(struct dateAndTime dt);


	struct dateAndTime event1 = {{2, 28, 2015}, {23, 59, 59}};		// 03/01/2015
	struct dateAndTime event2 = {{2, 28, 2016}, {23, 59, 59}};		// 02/29/2016
	struct dateAndTime event3 = {{12, 31, 2015}, {23, 59, 59}};		// 01/01/2016
	struct dateAndTime event4 = {{2, 1, 2016}, {23, 59, 59}};		// 02/02/2016
	struct dateAndTime event5 = {{2, 1, 2016}, {22, 22, 22}};		// 02/01/2016
	
	event1 =  clockKeeper(event1);
	event2 =  clockKeeper(event2);
	event3 =  clockKeeper(event3);
	event4 =  clockKeeper(event4);
	event5 =  clockKeeper(event5);

	printf("Updated event %i is on:\nTime - %.2i:%.2i:%.2i\nDate - %.2i/%.2i/%i\n\n",
			1, event1.stime.hour, event1.stime.minutes, event1.stime.seconds,
			event1.sdate.month, event1.sdate.day, event1.sdate.year);

	printf("Updated event %i is on:\nTime - %.2i:%.2i:%.2i\nDate - %.2i/%.2i/%i\n\n",
			2, event2.stime.hour, event2.stime.minutes, event2.stime.seconds,
			event2.sdate.month, event2.sdate.day, event2.sdate.year);

	printf("Updated event %i is on:\nTime - %.2i:%.2i:%.2i\nDate - %.2i/%.2i/%i\n\n",
			3, event3.stime.hour, event3.stime.minutes, event3.stime.seconds,
			event3.sdate.month, event3.sdate.day, event3.sdate.year);

	printf("Updated event %i is on:\nTime - %.2i:%.2i:%.2i\nDate - %.2i/%.2i/%i\n\n",
			4, event4.stime.hour, event4.stime.minutes, event4.stime.seconds,
			event4.sdate.month, event4.sdate.day, event4.sdate.year);	

	printf("Updated event %i is on:\nTime - %.2i:%.2i:%.2i\nDate - %.2i/%.2i/%i\n\n",
			5, event5.stime.hour, event5.stime.minutes, event5.stime.seconds,
			event5.sdate.month, event5.sdate.day, event5.sdate.year);

	return 0;
}

//
// BOTH
//  

struct dateAndTime clockKeeper(struct dateAndTime dt)
{	//
	// Function to update TIME, and DATE if time is 23:59:59
	//

	struct date dateUpdate(struct date today);
	struct time timeUpdate(struct time now);

	dt.stime = timeUpdate(dt.stime);

	if (dt.stime.hour == 0 && dt.stime.minutes == 0 && dt.stime.seconds == 0)
		dt.sdate = dateUpdate(dt.sdate);

	return dt;
}

//
// Function to calculate TIME
//

struct time timeUpdate(struct time now)
{	//
	// Function to update TIME by one second
	//

	++now.seconds;

	if (now.seconds == 60)
	{
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60)
		{
			now.minutes = 0;
			++now.hour;

			if (now.hour == 24)
			{
				now.hour = 0;
			}
		}
	}
	return now;
}

//
// Functions to calculate tomorrow's DATE
//

struct date dateUpdate(struct date today)
{	//
	// Function to update DATE by one day
	//

	int numberOfDays(struct date d);


	struct date tomorrow;

	if (today.day != numberOfDays(today))
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else 
	{
		tomorrow.day = 1;
		tomorrow.month  = today.month + 1;
		tomorrow.year = today.year;
	}
	return tomorrow;
}


int numberOfDays(struct date d)
{	//
	//	Function to check number of days in a month
	//

	int isLeapYear(struct date d);


	int days;
	const int daysPerMonth[12] = 	{31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31};

	if (isLeapYear(d) && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}


int isLeapYear(struct date d)
{	//
	//	Function to check if year is leap year 
	//

	bool leapYearFlag;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}
