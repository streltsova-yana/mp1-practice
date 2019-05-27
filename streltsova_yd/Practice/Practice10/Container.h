#pragma once
#include "Exception.h"
template <typename T>
class Container
{
    T* arr;
    int n;
    int maxsize = 10;
public:
    Container();
    Container(T* _arr, int _n);
    Container(const Container& a);
    ~Container();
    T& operator[](int i); //запись
    T operator[](int i) const; //чтение
    bool IsFull() const;
    bool IsEmpty() const;
    int Find(T x) const;
    void Add(T x);
    void Delete(T x);
    void Print() const;
};
template <typename T>
Container <T>::Container()
{
    n = 0;
    arr = new T[maxsize];
};
template <typename T>
Container <T>::Container(T* _arr, int _n)
{
    if (_n > maxsize)
        maxsize = _n;
    n = _n;
    arr = new T[maxsize];
    for (int i = 0; i < n; i++)
        arr[i] = _arr[i];
};
template <typename T>
Container <T>::Container(const Container& a)
{
    n = a.n;
    arr = new T[maxsize];
    for (int i = 0; i < n; i++)
        arr[i] = a.arr[i];
};
template <typename T>
Container <T>::~Container()
{
    delete[] arr;
    n = 0;
};
template <typename T>
T& Container <T>::operator[](int i) 
{
    if ((i < 0) || (i >= n))
        throw Exception("going beyond the dimension of the container");
    return arr[i];
};
template <typename T>
T Container <T>::operator[](int i) const
{
    if ((i < 0) || (i >= n))
        throw Exception("going beyond the dimension of the container");
    return arr[i];
};
template <typename T>
bool Container<T>::IsFull() const
{
    return (n == maxsize);
};
template <typename T>
bool Container<T>::IsEmpty() const
{
    return (n == 0);
};
template <typename T>
int Container <T>::Find(T x) const
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    throw Exception("item not found");
};
template <typename T>
void Container <T>::Add(T x)
{
    if (IsFull())
    {
        maxsize++;
    };
    arr[n] = x;
    n++;
};
template <typename T>
void Container <T>::Delete(T x)
{
    if (IsEmpty())
        throw Exception("the container is empty");
    int pos = this->Find(x);
    arr[pos] = arr[n - 1];
    arr[n - 1] = 0;
    n--;
};
template <typename T>
void Container <T>::Print() const
{
    if (IsEmpty())
        throw Exception("the container is empty");
    cout << "Container contents:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    cout << endl;
};