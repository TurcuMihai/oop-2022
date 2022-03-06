#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <cstring>
void Student::Init()
{
	this->name[0] = '\0';
	this->math = 0;
	this->english = 0;
	this->history = 0;
}
void Student::SetName(const char* name)
{
	strcpy(this->name, name);
}
const char* Student::GetName() const
{
	return this->name;
}
void Student::SetMath(float x) 
{
	if(x>0 && x<=10)
		this->math = x;
}
float Student::GetMath() const
{
	return this->math;
}
void Student::SetEnglish(float x)
{
	if (x > 0 && x <= 10)
		this->english = x;
}
float Student::GetEnglish() const
{
	return this->english;
}
void Student::SetHistory(float x)
{
	if (x > 0 && x <= 10)
		this->history = x;
}
float Student::GetHistory() const
{
	return this->history;
}
float Student::AverangeGrade()
{
	return (this->math + this->english + this->history) / 3;
}