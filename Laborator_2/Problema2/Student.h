#pragma once
class Student
{
	char name[20];
	float mathGrade, englishGrade, historyGrade;
public:
	Student();
	void setName(char* studentName);
	char* getName();
	void setMathGrade(float x);
	float getMathGrade();
	void setEnglishGrade(float x);
	float getEnglishGrade();
	void setHistoryGrade(float x);
	float getHistoryGrade();
	float getAverageGrade();
};

