// A simple "printing" calculator

#include <stdio.h>

int main(void)
{
	float	n, accumulator = 0;
	char	op;

	printf("Begin Calculations:\n");

	while (op != 'E')
	{
		scanf("%f %c", &n, &op);

		if  	(op == '+')
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
				printf("Division by zero not possible.\n");
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
			printf("= %.5f\n", accumulator);
			printf("End of calculations.\n");
			break;
		}
		else
		{
			printf("Unknown command.\n");
		}
	}
	
	return 0;
}
