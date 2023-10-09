#include<iostream>
using namespace std;
bool great(int no1, int no2);
main() {
	int no1, no2;
	cout << "Enter the first number: ";
	cin >> no1;
	cout << "Enter the second number: ";
	cin >> no2;
	cout << great(no1, no2);
	return 0;
	


}
bool great(int no1, int no2)
{
	if (no1>no2)
	{
		return true;
	}
	else {
		return false;
	}

}
