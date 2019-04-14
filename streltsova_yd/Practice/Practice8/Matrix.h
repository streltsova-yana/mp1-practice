class Matrix
{
    int rows, columns;
    double* m;
public:
    Matrix();
    Matrix(int rows, int columns);
    Matrix(double* _m, int _rows, int _columns);
    Matrix(const Matrix& a);
    ~Matrix();
    Matrix operator+(const Matrix& a) const;
    Matrix operator-(const Matrix& a) const;
    Matrix operator*(const Matrix& a) const;
    Matrix operator+(double a) const;
    Matrix operator-(double a) const;
    Matrix operator*(double a) const;
    const double* operator[](int i) const;
    Matrix& operator=(const Matrix& a);
    void Add();
    void Print() const;
};
