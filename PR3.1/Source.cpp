// Lab_03_1.cpp
// < ���������� ³����� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 21

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2 + 1 / fabs(1+x);
	// ����� 1: ������������ � ��������� ����
	if (x < 1)
		B = sqrt(fabs(cos(x)))+13;
	if (1 <= x && x <= 5)
		B = 3 + (1 / tan((4 + x)) / sqrt(x)) ;
	if (x > 5)
		B = 8 + 0,7*x ;
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 1)
		B = sqrt(fabs(cos(x))) + 13;
	else
		if (x > 5)
			B = 8 + 0, 7 * x;
		else
			B = 3 + (1 / tan((4 + x)) / sqrt(x));
	y = 2 + 1 / fabs(1 + x) - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}