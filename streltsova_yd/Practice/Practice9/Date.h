#pragma once
class Date
{
    unsigned int day, month, year;
public:
    Date();
    Date(unsigned int _d, unsigned int _m, unsigned int _y);
    ~Date();
    bool operator==(const Date& a) const;
    void Print() const;
};
