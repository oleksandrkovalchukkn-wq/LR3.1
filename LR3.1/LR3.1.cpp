// Lab_03_1.cpp
// < ��������� ��������� >
// ����������� ������ #3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 18

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

	A = 13.5 - (2 * x);
	// ����� 1: ������������ � ��������� ����

	if (x <= -1)
		B = exp(0.4 + x);
	if (-1 < x && x < 1)
		B = 1 - pow(sin(x), 2);
	if (x >= 1)
		B = ( cos(x) ) / 1 + pow(sin(x), 2);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x <= -1)
		B = exp(0.4 + x);
	else
		if (-1 < x && x < 1)
			B = 1 - pow(sin(x), 2);
		else
			B = B = (cos(x)) / 1 + pow(sin(x), 2);
	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}