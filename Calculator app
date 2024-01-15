#include <iostream>
using namespace std;

int menu();
int input(int, int&);
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int division(int, int);
int modulo(int, int);
char end();





int main()
{
    int val1 = 0, val2 = 0, choice, result = 0;
    do 
    {
        do
        {
            choice = menu();
            switch (choice)
            {
            case 1:
                result = add (input(1, val1), input(2, val2)); break;
            case 2:
                result = subtract(input(1, val1), input(2, val2)); break;
            case 3:
                result = subtract(input(1, val1), input(2, val2)); break;
            case 4:
                result = subtract(input(1, val1), input(2, val2)); break;
            case 5:
                result = subtract(input(1, val1), input(2, val2)); break;
            default: cout << "Incorrect Input\n\n"; break;
            }
            if (choice > 0 || choice < 6) cout << "result: " << result << "\n";
        } while (choice < 0 || choice > 5);
    } while (end() == 'y');
}

int menu()
{
    int choice;

    cout << "===========================================\n"
        << "\t\t  MENU\n"
        << "===========================================\n"
        << "\t(1) Add\n"
        << "\t(2) Subtract\n"
        << "\t(3) Multiply\n"
        << "\t(4) Divide\n"
        << "\t(5) Modulus\n"
        << "-------------------------------------------\n"
        << "Choose an operation by entering (1-5) : ";
    cin >> choice;

    return choice;
}

int input(int no, int& val)
{
    cout << " Enter values: ";
    cin >> val;

    return val;
}

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{ 
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

int modulo(int x, int y)
{
 
    return x % y;
}

char end()
{
    char continueChoice = 'y';
    cout << "Do you wish to continue? [y/n]";
    cin >> continueChoice;
    system("CLS");
    return continueChoice;
}
