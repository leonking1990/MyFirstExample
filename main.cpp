#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    if (y != 0)
    {
        cout << "Division: " << x / y << endl;
    }else{std::cout << "Can not divide by zero!"<<endl;}
    cout << "Remainder: " <<x % y << endl;;
    cout << "Square Root: " << sqrt(x) << endl;;
    cout << "Square: " << pow(x, y) << endl;;

    return 0;
}
