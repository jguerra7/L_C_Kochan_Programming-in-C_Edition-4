#include <stdio.h>

void transpose_matrix(int x, int y, int matrix1[x][y], int matrix2[y][x])
{
	int i, j;

	for (i = 0; i < x; ++i) {
		for (j = 0; j < y; ++j) {
			matrix2[j][i] = matrix1[i][j];
		}
	}
}

int main(void)
{
	int i, j;


	int mat1[3][2] = {	{1, 2},
						{3, 4},
						{5, 6}};
	int mat2[2][3] = {{}, {}};

	transpose_matrix(3, 2, mat1, mat2);

	for (i = 0; i < 2; ++i) 
		for (j = 0; j < 3; ++j)
			printf("%i (%i) | ", mat2[i][j], i);

	return 0;
}