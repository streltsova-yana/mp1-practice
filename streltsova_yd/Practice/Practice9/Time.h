#pragma once
class Time
{
    unsigned int hour, minute;
public:
    Time();
    Time(unsigned int _h, unsigned int _m);
    ~Time();
    void Print();
};
