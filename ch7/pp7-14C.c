#include <stdio.h>

int x = 3, y = 2;
int i, j;
int matrix1[3][2] = {	{1, 2},
						{3, 4},
						{5, 6}};
int matrix2[2][3] = {{}, {}};

void transpose_matrix(void)
{
	for (i = 0; i < x; ++i) {
		for (j = 0; j < y; ++j) {
			matrix2[j][i] = matrix1[i][j];
		}
	}
}

int main(void)
{
	transpose_matrix();

	for (i = 0; i < 2; ++i) 
		for (j = 0; j < 3; ++j)
			printf("%i (%i) | ", matrix2[i][j], i);

	return 0;
}