#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include<cstring>

void Student::setName(char* studentName)
{
	strcpy(this->name, studentName);
}
char* Student::getName()
{
	return this->name;
}
void Student::setMathGrade(float x)
{
	if(x >= 1 && x <=10)
	this->mathGrade = x;
}
float Student::getMathGrade()
{
	return this->mathGrade;
}
void Student::setEnglishGrade(float x)
{
	if (x >= 1 && x <= 10)
	this->englishGrade = x;
}
float Student::getEnglishGrade()
{
	return this->englishGrade;
}
void Student::setHistoryGrade(float x)
{
	if (x >= 1 && x <= 10)
	this->historyGrade = x;
}
float Student::getHistoryGrade()
{
	return this->historyGrade;
}
float Student::getAverageGrade()
{
	return (this->mathGrade + this->englishGrade + this->historyGrade) / 3;
}
Student::Student()
{
	this->englishGrade = 0;
	this->historyGrade = 0;
	this->mathGrade = 0;

}
