#include "Global.h"
int compareName(Student* object1, Student* object2)
{
	if (strcmp(object1->getName(), object2->getName()) == 0)
		return 0;
	else if (strcmp(object1->getName(), object2->getName()) > 0)
		return 1;
	return -1;
}
int compareEnglishGrade(Student* object1, Student* object2)
{
	if (object1->getEnglishGrade() == object2->getEnglishGrade())
		return 0;
	else if (object1->getEnglishGrade() > object2->getEnglishGrade())
		return 1;
	return -1;
}
int compareHistoryGrade(Student* object1, Student* object2)
{
	if (object1->getHistoryGrade() == object2->getHistoryGrade())
		return 0;
	else if (object1->getHistoryGrade() > object2->getHistoryGrade())
		return 1;
	return -1;
}
int compareMathGrade(Student* object1, Student* object2)
{
	if (object1->getMathGrade() == object2->getMathGrade())
		return 0;
	else if (object1->getMathGrade() > object2->getMathGrade())
		return 1;
	return -1;
}
int compareAverageGrade(Student* object1, Student* object2)
{
	if (object1->getAverageGrade() == object2->getAverageGrade())
		return 0;
	else if (object1->getAverageGrade() > object2->getAverageGrade())
		return 1;
	return -1;
}