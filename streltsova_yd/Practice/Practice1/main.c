#include <stdio.h>
#include <math.h>
#include <locale.h>
void main (){
	double x1, y1, r1, x2, y2, r2, d;
	setlocale(LC_ALL, "Russian");
	printf("������� ���������� � ������ ������ ����������\n");
	scanf_s("%lf %lf %lf", &x1, &y1, &r1);
	printf("������� ���������� � ������ ������ ����������\n");
	scanf_s("%lf %lf %lf", &x2, &y2, &r2);
	if ((x1==x2)&&(y1==y2)&&(r1==r2))
	{
		printf("���������� ���������\n");
		return;
	}
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if((r1+r2)<d)
	{
		printf("���������� �� ������������\n");
		return;
	}
	if((r1+r2)==d)
	{
		printf("���������� �������� ������� �������\n");
		return;
	}
	if(d==abs(r1-r2))
	{
		printf("���������� �������� ���������� �������\n");
		return;
	}
	if(((r1+r2)>d)&&(d>abs(r1-r2)))
	{
		printf("���������� ������������ � ���� ������\n");
		return;
	}
	if(d<abs(r1-r2))
	{
		printf("���� ���������� ����� ������ ������\n");
		return;
	}
}
