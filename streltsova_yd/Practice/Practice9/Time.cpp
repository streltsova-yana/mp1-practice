#include "Time.h"
#include "Exception.h"
#include <iostream>
using namespace std;
Time::Time()
{
    hour = 0;
    minute = 0;
};
Time::Time(unsigned int _h, unsigned int _m)
{
    if ((_h < 0) || (_h > 24) || (_m < 0) || (_m > 60))
        throw Exception("incorrect time entry");
    hour = _h;
    minute = _m;
};
Time::~Time()
{
    hour = 0;
    minute = 0;
};
void Time::Print()
{
    cout << hour << ":" << minute << " ";
};