#include <iostream>
#include <ctime>
#include <stdio.h>


using namespace std;

int main()
{
	int SIZE;
	cin >> SIZE;
	int* arr = (int*)malloc(SIZE * sizeof(int));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	free(arr);
	return 0;
}
