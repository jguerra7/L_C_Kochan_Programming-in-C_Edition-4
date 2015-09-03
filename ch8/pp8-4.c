#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};


int get_date(void)
{
	int result;
	struct date d;

	printf("Please enter the date with format dd mm yyyy: ");
	scanf("%i%i%i", &d.month, &d.day, &d.year);

	result = (1461 * year_mod(d.year, d.month)) / 4 + (153 * month_mod(d.month)) / 5 + d.day;

	return result;
}


int year_mod(int year, int month)
{
	if (month <= 2)
		year -= 1;

	return year;
}


int month_mod(int month)
{
	if (month <= 2)
		month += 13;
	else
		month += 1;

	return month;
}


int main(void)
{
	int n; 
	char days[7] = {'S', 'M', 'T',
					'W', 'T', 'F', 'S'};

	n = get_date();

	n = (n - 621049) % 7;

	printf("That day is on a %c\n", days[n]);

	return 0;
}