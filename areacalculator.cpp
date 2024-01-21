#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

int menu();
int square(int&);
int rectangle(int&, int&);
int triangle(int&, int&);
int circle(int&);


int main()
{
	int choice, val1, val2, result;

	do
	{
		choice = menu();
		switch (choice)
		{
		case 1: cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"<< "AREA OF SQUARE\n"<< "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
			<< "Enter the side of the square: "; cin >> val1;
			result = square(val1); break;
		case 2: cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"<< "AREA OF RECTANGLE\n" << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" 
			<< "Enter the length and width of the rectangle: "; cin >> val1 >> val2;
			result = rectangle(val1, val2);
			break;
		case 3: cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" << "AREA OF TRIANGLE\n" << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
			<< "Enter the base and width of the triangle: "; cin >> val1 >> val2; 
			result = triangle(val1, val2); break;
		case 4:cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" << "AREA OF CIRCLE\n" << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
			<< "Enter the radius: "; cin >> val1; 
result = circle(val1); break;
		case 5: cout << "Exiting...\n";
			break;
		default: cout << "Incorrect Input\n\n"; continue;
		}
		if (choice > 0 && choice < 5) cout << "\n Result: " << result << "  sq units \n\n";
		system("PAUSE");
		system("CLS");

	} while (choice != 5);
}



int menu()
{
	int choice;

	cout << "===========================================\n"
		<< "\t\t  MENU\n"
		<< "===========================================\n"
		<< "\t(1) Area of Square\n"
		<< "\t(2) Area of Rectangle\n"
		<< "\t(3) Area of Triangle\n"
		<< "\t(4) Area of Circle\n"
		<< "\t(5) Exit\n"
		<< "-------------------------------------------\n"
		<< "Choose an operation by entering (1-5) : ";
	cin >> choice;

	return choice;
}

int square(int& side)
{
	return side * side;
}

int rectangle(int& length, int& width)
{
	return length * width;
}

int triangle(int& base, int& height)
{
	return 0.5 * base * height;
}

int circle(int& radius)
{
	return M_PI * radius * radius;
}
