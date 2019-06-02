#include "Vector.h"
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
Vector::Vector()
{
    n = 0;
    x = NULL;
};
Vector::Vector(int _n)
{
    n = _n;
    x = new double[n];
    memset(x, 0, n * sizeof(double));
};
Vector::Vector(const Vector& a)
{
    n = a.n;
    x = new double[n];
    memcpy(x, a.x, n * sizeof(double));
};
Vector :: ~Vector()
{
    delete[] x;
    n = 0;
};
Vector Vector :: operator+(const Vector& a) const
{
    if (n != a.n)
        throw "Error: different dimension of vectors";
    Vector b(n);
    for (int i = 0; i < n; i++)
        b.x[i] = x[i] + a.x[i];
    return b;
};
Vector Vector :: operator-(const Vector & a) const
{
    if (n != a.n)
        throw "Error: different dimension of vectors";
    Vector b(n);
    for (int i = 0; i < n; i++)
        b.x[i] = x[i] - a.x[i];
    return b;
};
Vector Vector :: operator+(double a) const
{
    Vector b(n);
    for (int i = 0; i < n; i++)
        b.x[i] = x[i] + a;
    return b;
};
Vector Vector :: operator-(double a) const
{
    Vector b(n);
    for (int i = 0; i < n; i++)
        b.x[i] = x[i] - a;
    return b;
};
Vector Vector :: operator*(double a) const
{
    Vector b(n);
    for (int i = 0; i < n; i++)
        b.x[i] = x[i] * a;
    return b;
};
double Vector :: operator*(const Vector & a) const
{
    if (n != a.n)
        throw "Error: different dimension of vectors";
    double S = 0;
    for (int i = 0; i < n; i++)
        S += (x[i] * a.x[i]);
    return S;
};
Vector & Vector :: operator+=(const Vector & a)
{
    if (n != a.n)
        throw "Error: different dimension of vectors";
    for (int i = 0; i < n; i++)
        x[i] += a.x[i];
    return *this;
};
Vector & Vector :: operator-=(const Vector & a)
{
    if (n != a.n)
        throw "Error: different dimension of vectors";
    for (int i = 0; i < n; i++)
        x[i] -= a.x[i];
    return *this;
};
Vector & Vector :: operator+=(double a)
{
    for (int i = 0; i < n; i++)
        x[i] += a;
    return *this;
};
Vector& Vector :: operator-=(double a)
{
    for (int i = 0; i < n; i++)
        x[i] -= a;
    return *this;
};
Vector& Vector :: operator*=(double a)
{
    for (int i = 0; i < n; i++)
        x[i] *= a;
    return *this;
};
const Vector& Vector :: operator=(const Vector & a)
{
    if (this == &a)
    {
        return *this;
    }
    delete[] x;
    n = a.n;
    x = new double[n];
    memcpy(x, a.x, n * sizeof(double));
};
double& Vector :: operator[](int i)
{
    if ((i < 0) || (i >= n))
        throw "Error: going beyond the dimension of the vector";
    return x[i];
};
const double& Vector :: operator[](int i) const
{
    if ((i < 0) || (i >= n))
        throw "Error: going beyond the dimension of the vector";
    return x[i];
};
double Vector::Length() const
{
    double l = 0;
    for (int i = 0; i < n; i++)
        l += (x[i] * x[i]);
    l = sqrt(l);
    return l;
};
void* Vector :: operator new[](size_t n)
{
    if (n <= 0)
        throw "Incorrect size";
    return new Vector[n];
};
void Vector :: operator delete[](void* p)
{
    delete[] p;
};
void Vector::Add()
{
    if (n == 0)
        throw "Error: vector zero";
    for (int i = 0; i < n; i++)
        cin >> x[i];
};
void Vector::Print() const
{
    if (n == 0)
        throw "Error: vector zero";
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
};