#include "Students.h"
#include <iostream>

using namespace std;
void PrintStudent(student kids)
{
	cout << kids.studentID << endl;
	cout << kids.Course << endl;
	cout << kids.LastExam << endl;
}


float AverageTest(student kids[], int size)
{
	float sumOfScores = 0;
	for (int i = 0; i < size; i++)
	{
		sumOfScores += kids[i].LastExam;
	}
	return (sumOfScores / size);
}

int Median(student kids[], int size)
{
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (kids[j].LastExam > kids[j + 1].LastExam)
				{
					int temp = kids[j].LastExam;

					kids[j].LastExam = kids[j + 1].LastExam;
					kids[j + 1].LastExam = temp;

					isSorted = false;
				}
			}
		}
		if (isSorted)
		{
			break;
		}
	}
	if (size % 2 == 0)
	{
		int med = (size / 2);
		int mead = ((size / 2) + 1);
	return	(kids[med].LastExam + kids[mead].LastExam) / 2;
	}
	else
	{
		int med = (size / 2);
		return kids[med].LastExam;
	}
}

