#pragma once

struct student
{
	int studentID;
	int Course;
	int LastExam;
};

void PrintStudent(student kids);
float AverageTest(student kids[], int size);
int Median(student kids[], int size);