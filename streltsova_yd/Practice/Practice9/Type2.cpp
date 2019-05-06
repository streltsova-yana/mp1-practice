#include "Type2.h"
#include <string>
#include <iostream>
using namespace std;
Type2::Type2()
{
    Date a;
    Time t1, t2;
    description = "";
};
Type2::Type2(Date _a, Time _t1, Time _t2, string _des)
{
    a = _a;
    t1 = _t1;
    t2 = _t2;
    description = _des;
};
Type2::~Type2()
{
    a.~Date();
    t1.~Time();
    t2.~Time();
    description.clear();
};
void Type2::Print()
{
    t1.Print();
    cout << "- ";
    t2.Print();
    cout << description << endl;
};