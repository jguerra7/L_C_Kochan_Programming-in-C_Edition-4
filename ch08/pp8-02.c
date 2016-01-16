#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};


int main(void)
{
	int get_date(void);
	int date_difference(int n1, int n2);

	int d1, d2;

	d1 = get_date();
	d2 = get_date();

	printf("%i, %i\n", d2, d1);
	printf("The days in between the input dates is %i\n", date_difference(d1, d2));

	return 0;
}

// Function to get date and return N for day difference calculation

int get_date(void)
{
	int year_mod(int year, int month);
	int month_mod(int month);

	int result;
	struct date d;

	printf("Please enter the date with format mm dd yyyy: ");
	scanf("%i%i%i", &d.month, &d.day, &d.year);

	result = (1461 * year_mod(d.year, d.month)) / 4 + (153 * month_mod(d.month)) / 5 + d.day;

	return result;
}

// Year modifier for formula

int year_mod(int year, int month)
{
	if (month <= 2)
		year -= 1;

	return year;
}

// Month modifier for formula

int month_mod(int month)
{
	if (month <= 2)
		month += 13;
	else
		month += 1;

	return month;
}

// Program to calculate the number of days between the two dates

int date_difference(int n1, int n2)
{
	int result = n2 - n1;

	if (result < 0)
		result *= -1;

	return result;
}
