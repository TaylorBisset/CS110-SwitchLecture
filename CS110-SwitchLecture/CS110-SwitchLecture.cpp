#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	cout << "Please enter your age: ";
	cin >> age;
	switch (age) {
	case 1:
		cout << "You're one.";
		break;
	case 2:
		cout << "You're two.";
		break;
	case 3:
		cout << "You're three.";
		break;
	case 4:
		cout << "You're four.";
		break;
	default:
		cout << "You're older than four!";
		break;
	}
}
