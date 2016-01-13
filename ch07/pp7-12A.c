#include <stdio.h>

int main(void)
{
	void transpose_matrix(int matrix1[4][5], int matrix2[5][4]);

	int i, j;

	int mat1[4][5] = {	{ 1,  2,  3,  4,  5},
						{ 6,  7,  8,  9, 10},
						{11, 12, 13, 14, 15},
						{16, 17, 18, 19, 20}};
	int mat2[5][4] = {{}, {}, {}, {}, {}};

	transpose_matrix(mat1, mat2);

	for (i = 0; i < 5; ++i)
		for (j = 0; j < 4; ++j)
			printf("%i (%i) | ", mat2[i][j], i);

	return 0;
}


void transpose_matrix(int matrix1[4][5], int matrix2[5][4])
{
	int i, j;

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 5; ++j)
			matrix2[j][i] = matrix1[i][j];
}
