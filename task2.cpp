#include<iostream>
using namespace std;
float perimetercal(char shape, float value);
main() {
	char shape;
	float value;
	cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	cin >> shape;
	cout << "Enter the value: ";
	cin >> value;
	cout << "The perimeter is: " << perimetercal(shape, value) ;
	return 0;
	


}
float perimetercal(char shape, float value)
{
	float perimeter;
	if (shape=='s')
	{
		perimeter =value*4;
	}
	else if (shape=='c') {
		perimeter= value*6.28;
	}
	else if (shape=='t')
	{
		perimeter = value * 3;
	}
	else if (shape=='h')
	{
		perimeter = value * 6;
	}
	return perimeter;
}
