#pragma once
#include <iostream>
#include <string>
using namespace std;
class Exception
{
    string s;
public:
    Exception(string _s) : s(_s) {};
    void Print()
    {
        cout << "Error: " << s << endl;
    }
};
