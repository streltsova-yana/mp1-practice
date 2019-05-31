struct Vector
{
private:
    int n;
    double* x;
public:
    Vector(); //����������� �� ���������
    Vector(int _n); // ����������� � ����������
    Vector(const Vector& a); // ����������� �����������
    ~Vector(); // ����������
    Vector operator+(const Vector& a) const; // �������������� ��������
    Vector operator-(const Vector& a) const; // �������������� ���������
    Vector operator+(double a) const; // ����������� ���������
    Vector operator-(double a) const; // ��������� ���������
    Vector operator*(double a) const; // ��������� �� ���������
    double operator*(const Vector& a) const; // ��������� ������������
    Vector& operator+=(const Vector& a); // �������������� ��������
    Vector& operator-=(const Vector& a); // �������������� ���������
    Vector& operator+=(double a); // ����������� ���������
    Vector& operator-=(double a); // ��������� ���������
    Vector& operator*=(double a); // ��������� �� ���������
    const Vector& operator=(const Vector& a); // ������������
    double& operator[](int i);// ������
    const double& operator[](int i) const; // ������
    double Length() const; // ������� ��������� ���� �������
    void *operator new[](size_t n); //��������� ������
    void operator delete[](void *p); // ������������ ������
    void Add(); // ���������� �������
    void Print() const;// ������ �������
};