#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Student.h"
#include "Global.h"
int main()
{
	Student student1, student2;
	student1.setName((char *)"Mircea");
	student2.setName((char *)"Mihai");
	printf("-------------\nstudent1 == student2 => value 0 \nstudent1 > student2 => value 1 \nstudent1 < student2 => value -1\n-------------\n");
	printf("Name comparison return value: %d\n", compareName(&student1, &student2));
	
	student1.setMathGrade(10);
	student2.setMathGrade(3);

	printf("Math grade comparison return value: %d\n", compareMathGrade(&student1, &student2));

	student1.setEnglishGrade(5);
	student2.setEnglishGrade(8);

	printf("English grade comparison return value: %d\n", compareEnglishGrade(&student1, &student2));

	student1.setHistoryGrade(7.31);
	student2.setHistoryGrade(7.5);

	printf("History grade comparison return value: %d\n", compareHistoryGrade(&student1, &student2));

	printf("Average grade comparison return value %d\n", compareAverageGrade(&student1, &student2));

	return 0;

}