#define _CRT_SECURE_NO_WARNINGS_
#include "Student.h"
#include <cstring>
#include "GlobalFunctions.h"

int compareName(Student& s1, Student& s2)
{
	if (strcmp(s1.GetName(), s2.GetName()) == 0)
	{
		return 0;
	}
	if (strcmp(s1.GetName(), s2.GetName()) < 0)
	{
		return -1;
	}
	if (strcmp(s1.GetName(), s2.GetName()) > 0)
	{
		return 1;
	}
	
}
int compareMath(Student& s1, Student& s2)
{
	if (s1.GetMath() == s2.GetMath())
	{
		return 0;
	}
	if (s1.GetMath() < s2.GetMath())
	{
		return -1;
	}
	if (s1.GetMath() > s2.GetMath())
	{
		return 1;
	}
}
int compareEnglish(Student& s1, Student& s2)
{
	if (s1.GetEnglish() == s2.GetEnglish())
	{
		return 0;
	}
	if (s1.GetEnglish() < s2.GetEnglish())
	{
		return -1;
	}
	if (s1.GetEnglish() > s2.GetEnglish())
	{
		return 1;
	}
}
int compareHistory(Student& s1, Student& s2)
{
	if (s1.GetHistory() == s2.GetHistory())
	{
		return 0;
	}
	if (s1.GetHistory() < s2.GetHistory())
	{
		return -1;
	}
	if (s1.GetHistory() > s2.GetHistory())
	{
		return 1;
	}
}
int compareAverange(Student& s1, Student& s2)
{
	if (s1.AverangeGrade() == s2.AverangeGrade())
	{
		return 0;
	}
	if (s1.AverangeGrade() < s2.AverangeGrade())
	{
		return -1;
	}
	if (s1.AverangeGrade() > s2.AverangeGrade())
	{
		return 1;
	}
}
