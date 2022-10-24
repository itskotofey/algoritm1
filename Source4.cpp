#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	struct stud {
		char name[20];
		char surname[20];
		int age;
	} studs[2];
	stud search;
	for (int i = 0; i < 2; i++) {
		cout << "¬ведите им€: ";
		cin >> studs[i].name;
		cout << "¬ведите фамилию: ";
		cin >> studs[i].surname;
		cout << "¬ведите возраст: ";
		cin >> studs[i].age;
	}
	cin >> search.name >> search.surname >> search.age;
	for (int i = 0; i < 2; i++) {
		if (strcmp(studs[i].name, search.name) == 0) {
			printf("name:%s\n", studs[i].name);
			printf("surame:%s\n", studs[i].surname);
			printf("age:%d\n", studs[i].age);
		}
	}
}
