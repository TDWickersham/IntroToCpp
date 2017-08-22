#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << numbers[i] << endl;
	}
}

int sumNumbers(int numbers[], int size)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		total = total + numbers[i];
	}
	return total;
}

int smallestValue(int numbers[], int size)
{
	int smallest = numbers[0];
	for (int i = 1; i < size; ++i)
	{
		if (numbers[1] < smallest)
		{
			smallest = numbers[i];
		}
	}
	return smallest;
}

int largestValues(int numbers[], int size)
{
	int largest = numbers[0];
	for (int i = 1; i < size; ++i)
	{
		if (numbers[i] > largest)
		{
			largest = numbers[i];
		}
	}
	return largest;
}

int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] == value)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int values[]{1,2,3};
	int size = 3;


	printNumbers(values, size);

	int vals[]{ 1,2,3 };
	int nums = 3;
	int value = 2;
	cout << sumNumbers(vals, nums) << endl;

	cout << smallestValue(vals, nums) << endl;

	cout << largestValues(vals, nums) << endl;

	cout << findIndex(vals, nums, value) << endl;

	system("pause");
}