#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix()
{
    rows = 0;
    columns = 0;
    m = NULL;
};
Matrix::Matrix(int _rows, int _columns)
{
    rows = _rows;
    columns = _columns;
    m = new double[rows * columns];
    for (int i = 0; i < rows * columns; i++)
        m[i] = 0;
};
Matrix::Matrix(double* _m, int _rows, int _columns)
{
    rows = _rows;
    columns = _columns;
    m = new double[rows * columns];
    for (int i = 0; i < rows * columns; i++)
        m[i] = _m[i];
};
Matrix::Matrix(const Matrix& a)
{
    rows = a.rows;
    columns = a.columns;
    m = new double[rows * columns];
    for (int i = 0; i < rows * columns; i++)
        m[i] = a.m[i];
};
Matrix :: ~Matrix()
{
    delete[] m;
    rows = 0;
    columns = 0;
};
Matrix Matrix ::operator+(const Matrix& a) const
{
    if ((rows != a.rows) || (columns != a.columns))
        throw "Error: different dimension of matrices";
    Matrix b(rows, columns);
    for (int i = 0; i < rows * columns; i++)
        b.m[i] = m[i] + a.m[i];
    return b;
};
Matrix Matrix :: operator-(const Matrix& a) const
{
    if ((rows != a.rows) || (columns != a.columns))
        throw "Error: different dimension of matrices";
    Matrix b(rows, columns);
    for (int i = 0; i < rows * columns; i++)
        b.m[i] = m[i] - a.m[i];
    return b;
};
Matrix Matrix :: operator*(const Matrix& a) const
{
    if (columns != a.rows)
        throw "Error: different dimension of matrices";
    Matrix b(rows, a.columns);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < a.columns; j++)
            for (int k = 0; k < columns; k++)
                b.m[i * a.columns + j] += m[i * columns + k] * a.m[k * a.columns + j];
    return b;
};
Matrix Matrix :: operator+(double a) const
{
    Matrix b(rows, columns);
    for (int i = 0; i < rows * columns; i++)
       b.m[i] = m[i] + a;
    return b;
};
Matrix Matrix :: operator-(double a) const
{
    Matrix b(rows, columns);
    for (int i = 0; i < rows * columns; i++)
        b.m[i] = m[i] - a;
    return b;
};
Matrix Matrix :: operator*(double a) const
{
    Matrix b(rows, columns);
    for (int i = 0; i < rows * columns; i++)
        b.m[i] = m[i] * a;
    return b;
};
const double* Matrix :: operator[](int i) const
{
    if ((i < 0) || (i >= rows))
        throw "Error: no row";
    return &m[i * columns];
};
Matrix& Matrix :: operator=(const Matrix& a)
{
    if (this == &a)
    {
        return *this;
    }
    delete[] m;
    rows = a.rows;
    columns = a.columns;
    m = new double[rows * columns];
    for (int i = 0; i < rows * columns; i++)
        m[i] = a.m[i];
    return *this;
};
void Matrix::Add()
{
    if ((rows == 0) || (columns == 0))
        throw "Error: empty matrix";
    for (int i = 0; i < rows * columns; i++)
        cin >> m[i];
    cout << endl;
};
void Matrix :: Print() const
{
    if ((rows == 0) || (columns == 0))
        throw "Error: empty matrix";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << m[i * columns + j] << " ";
        cout << endl;
    }
    cout << endl;
}