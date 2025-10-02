/*Поезд за m минут проходит t столбов. Определить скорость поезда, если между столбами S метров.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float m, t, s, result;
	printf("Введите количество минут, пройдённые поездом: ");
	scanf_s("%f", &m);
	printf("Введите количество столбов, пройдённые поездом: ");
	scanf_s("%f", &t); 
	printf("Введите расстояние между столбами: ");
	scanf_s("%f", &s);
	result = (t * s) / m;
	printf("скорость поезда: %f", result);
}