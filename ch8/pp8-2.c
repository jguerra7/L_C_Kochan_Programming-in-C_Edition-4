#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

// function to get date and return N for day diggerence calculation
int get_date(void)
{
	int result;
	struct date d;

	printf("Please enter the date with foramt mm dd yyyy:");
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


int date_difference(int n1, int n2)
{
	int result = n2 - n1;

	if (result < 0)
		result *= -1;

	return result;
}


int main(void)
{
	int n1, n2;

	n1 = get_date();
	n2 = get_date();

	printf("%i, %i\n", n2, n1);
	printf("The days in between the input dates is %i\n", date_difference(n1, n2));

	return 0;
}