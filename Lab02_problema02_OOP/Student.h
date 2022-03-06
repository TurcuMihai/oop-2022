#pragma once
class Student
{
	private:
		char name[100];
		float math;
		float english;
		float history;
	public:
		void Init();
		void SetName(const char* name);
		const char* GetName() const;
		void SetMath(const float x);
		float GetMath() const;
		void SetEnglish(const float x);
		float GetEnglish() const;
		void SetHistory(const float x);
		float GetHistory() const;
		float AverangeGrade();
};
