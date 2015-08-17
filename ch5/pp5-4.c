//	A simple "printing" calcualtor

#include <stdio.h>

int main(void)
{
	float 	n, accumulator = 0;
	char	op;

	printf("Begin Calculations\n");
	
	while (op != 'E')
	{
		scanf("%f %c", &n, &op);

		if 		(op == '+')
		{
			accumulator += n;
			printf("= %.5f\n", accumulator);
		}

		else if (op == '-')
		{
			accumulator -= n;
			printf("= %.5f\n", accumulator);
		}

		else if (op == '*')
		{
			accumulator *= n;
			printf("= %.5f\n", accumulator);
		}

		else if (op == '/')
		{
			if (n == 0)
			{
				printf("Divsion by zero.\n");
			}
			else
			{
				accumulator /= n;
				printf("= %.5f\n", accumulator);
			}
		}

		else if (op == 'S'  ||  op == 's')
		{
			accumulator = n;
			printf("= %.5f\n", accumulator);
		}

		else if (op == 'E'  ||  op == 'e')
		{
			printf("End of Calculations\n");
			break;
		}

		else
		{
			printf("Unknow operator.\n");
		}
	}
	
	return 0;
}