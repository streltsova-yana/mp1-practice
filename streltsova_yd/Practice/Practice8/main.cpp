#include "Matrix.h"
#include <iostream>
using namespace std;
void main()
{
    Matrix A(3, 3), B(3, 3), C(3, 2), D, E(2, 3);
    cout << "Enter matrix A (3 x 3)" << endl;
    A.Add();
    cout << "Enter matrix B (3 x 3)" << endl;
    B.Add();
    cout << "Enter matrix C (3 x 2)" << endl;
    C.Add();
    cout << "Enter matrix E (2 x 3)" << endl;
    C.Add();
    cout << "A + B = " << endl;
    try
    {
        D = A + B;
        D.Print();
    }
    catch(const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A + C = " << endl;
    try
    {
        D = A + C;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A - B = " << endl;
    try
    {
        D = A - B;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A - C = " << endl;
    try
    {
        D = A - C;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A * B = " << endl;
    try
    {
        D = A * B;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A * C = " << endl;
    try
    {
        D = A * C;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A * E = " << endl;
    try
    {
        D = A * E;
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    double a = 5;
    cout << "A + 5 = " << endl;
    D = A + 5;
    try
    {
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A - 5 = " << endl;
    D = A - 5;
    try
    {
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    cout << "A * 5 = " << endl;
    D = A * 5;
    try
    {
        D.Print();
    }
    catch (const char* a)
    {
        cout << a << endl << endl;
    }
    int i;
    cin >> i;
}