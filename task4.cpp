#include<iostream>
using namespace std;
int findGreatest(int no1, int no2, int no3);
main() {
	int no1, no2, no3;
	cout << "Enter the first number: ";
	cin >> no1;
	cout << "Enter the second number: ";
	cin >> no2;
	cout << "Enter the third number: ";
	cin >> no3;
	cout << "The greatest number among " << no1 << ", " << no2 << ", and " << no3 << " is: " << findGreatest(no1, no2, no3);

}
int findGreatest(int no1, int no2, int no3)
{
	if ((no1 > no2) && (no1 > no3))
	{
		return no1;
	}
	else if (no2 > no1 && no2 > no3)
		return no2;
	else
		return no3;
}