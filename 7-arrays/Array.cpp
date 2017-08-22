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

bool arrayUniqueness(int numbers[], int size)
{
	bool match = true;
	int setnum = 0;
	int y = 0;
	for (int i = 0; i < size; i++)
	{
		for (int x = 1; i + x < size; x++)
		{
			if (numbers[i] == numbers[i + x])
			{
				match = false;
			}
		}
	}
	return match;
}

void reverse(int num[], int size) 
{
	for (int i = 0; i < size / 2; ++i)
	{
		int temp = num[i];

		num[i] = size - 1;

		num[size - 1 - i] = temp;
	}
	printNumbers(num, size);
}

void sortAscend(int num[], int size)
{

	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (num[j] > num[j + 1])
				{
					int temp = num[j];

					num[j] = num[j + 1];
					num[j + 1] = temp;

					isSorted = false;
				}
			}
			printNumbers(num, size);
		}
		if (isSorted)
		{
			break;
		}
	}
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

	cout << arrayUniqueness(values, size) << endl;

	reverse(vals, nums);
	
	int num[]{ 2,5,8,1,7,3,6 };
	int val = 7;


	sortAscend(num, val);

	system("pause");
}