/*����� �� m ����� �������� t �������. ���������� �������� ������, ���� ����� �������� S ������.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float m, t, s, result;
	printf("������� ���������� �����, ��������� �������: ");
	scanf_s("%f", &m);
	printf("������� ���������� �������, ��������� �������: ");
	scanf_s("%f", &t); 
	printf("������� ���������� ����� ��������: ");
	scanf_s("%f", &s);
	result = (t * s) / m;
	printf("�������� ������: %f", result);
}