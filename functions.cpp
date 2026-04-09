#include <iostream>
#include "functions.h"
int isSimple(int number)
{
	if (number == 1)
		return 0;
	if (number == 2 || number == 3)
		return 1;
	for (int i = 2; i < number / 2 + 1; i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}

int mult7(int num, int target)
{
	num *= 8;
	if (num == target)
		return 1;
	if (num > target)
		return 0;
	if (mult7(num, target))
		return 1;
	else if (add7(num, target))
		return 1;
	return 0;
}

int add7(int num, int target)
{
	num += 3;
	if (num == target)
		return 1;
	if (num > target)
		return 0;
	if (mult7(num, target))
		return 1;
	else if (add7(num, target))
		return 1;
	return 0;
}

int mult8(int num, int target, int& count)
{
	count++;
	num *= 5;
	if (num == target)
		return 1;
	if (num > target)
	{
		count--;
		return 0;
	}
	if (mult8(num, target, count))
		return 1;
	else if (add8(num, target, count))
		return 1;
	count--;
	return 0;
}

int add8(int num, int target, int& count)
{
	num += 9;
	if (num == target)
		return 1;
	if (num > target)
		return 0;
	if (mult8(num, target, count))
		return 1;
	else if (add8(num, target, count))
		return 1;
	return 0;
}