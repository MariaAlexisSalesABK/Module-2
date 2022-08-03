#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Please put in two integers: " << endl;
    cin >> a;
    cin >> b;

    int *ptrA, *ptrB;
    
    ptrA = &a;
    ptrB = &b;

    cout << "Pointer to your first integer: " << *ptrA << endl;
    cout << "Pointer to your second integer: " << *ptrB << endl;

    return 0;
}