#include <iostream>
using namespace std;
int main()
{
	int array[10] = { 1,5,6,1,2,4,5,6,-12,87 };
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	int min = array[0];
	for (int i = 1; i < 10; i++) {
		if (min > array[i]) {
			min = array[i];
			cout << "new min " << min;
			cout << endl;
		}
	}

	cout << min;
	cout << endl;

	int max = array[0];
	for (int i = 1; i < 10; i++) {
		if (max < array[i]) {
			max = array[i];
			cout << "new max " << max;
			cout << endl;
		}
	}

	cout << max;
	cout << endl;

	int a = max, b = min;
	int res;

	res = a - b;
	printf("%d-%d=%d\n", a, b, res);

	return 0;
}
