﻿#include "tasks.h"

/*	Task 02. The Count of Min Number Digits [количество наименьших цифр числа]
*
*	Дано целое число. Необходимо определить, какое количество цифр
*	заданного числа равны его наименьшей цифре с использованием эффективного алгоритма.
*
*	Примечание
*	Постарайтесь при решении задания использовать только одну циклическую конструкцию.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[ input 1]: 1234
*	[output 1]: 1
*
*	[ input 2]: 4112
*	[output 2]: 2
*
*	[ input 3]: 100
*	[output 3]: 2
*
*	[ input 4]: -2222
*	[output 4]: 4
*/

int task02(long long number) {
	//cout << number;
	number = number > 0 ? number : -number;
	int minValue = 10;
	int count = 1;
	while (number > 0) {
		int digit = number % 10;

		if (digit < minValue) {
			minValue = digit;
			count = 1;
		}
		else if (digit == minValue) {
			count++;
		}
		number /= 10;
	}


	//cout << " " << count << " min - " << minValue << endl;
	return count;
}