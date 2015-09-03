#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};


struct time elapsed_time(struct time t1, struct time t2)
{
	struct time result = {0, 0, 0};

	if (t1.hour > t2.hour) {
		result.hour += 24;
	}

	if (t1.minutes > t2.minutes) {
		result.minutes += 60;
		result.hour -= 1;
	}

	if (t1.seconds > t2.seconds) {
		result.seconds += 60;
		result.minutes -= 1;
	}

	result.hour += (t2.hour - t1.hour);
	result.minutes += (t2.minutes - t1.minutes);
	result.seconds += (t2.seconds - t1.seconds);

	return result;
}


int main(void)
{
	struct time elapsed;
	struct time time1 = {3, 45, 15};
	struct time time2 = {9, 44, 03};

	elapsed = elapsed_time(time1, time2);

	printf("%i:%i:%i\n", elapsed.hour, elapsed.minutes, elapsed.seconds);

	return 0;
}