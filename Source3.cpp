#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));

	int m[9][9];
	int i, k;
	for (k = 0; k < 9; k++) {
		for (i = 0; i < 9; i++) {
			m[k][i] = rand() % 20;
			printf("%4d ", m[k][i]);
		}
		printf(" \n");
	}
	int mass1[9], mass2[9];
	int n, t;
	for (n = 0; n < 9; n++)
	{
		mass1[n] = 0;
	}
	for (t = 0; t < 9; t++)
	{
		mass2[t] = 0;
	}
	for (k = 0; k < 9; k++)
	{
		for (i = 0; i < 9; i++)
		{
			mass1[k] += m[k][i];
			mass2[i] += m[k][i];
		}
	}
	for (n = 0; n < 9; n++)
	{
		printf("%d ", mass1[n]);
	}
	printf("\n");
	for (t = 0; t < 9; t++)
	{
		printf("%d ", mass2[t]);
	}

}
