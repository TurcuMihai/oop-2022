#include <math.h>
#include <iostream>
#include <stdio.h>
using namespace std;
#include "Student.h"
#include "GlobalFunctions.h"

int main()
{
	Student s1;
		s1.Init();
		s1.SetName("Florin Salam");
		s1.SetMath(9);
		s1.SetEnglish(8);
		s1.SetHistory(6);
		
	Student s2;
		s2.Init();
		s2.SetName("Nicolae Guta");
		s2.SetMath(5);
		s2.SetEnglish(9);
		s2.SetHistory(7);
		
		switch (compareName(s1, s2))
		{
		case 1:
			printf("Studentul %s este primul la catalog!\n", s1.GetName());
				break;
		case -1:
			printf("Studentul %s este al doilea la catalog!\n", s2.GetName());
				break;
		case 0:
			printf("Studentii sunt pe aceeasi pagina a catalogului!\n");
				break;
		}

		switch(compareMath(s1, s2))
		{
			case 1:
				printf("Studentul %s este mai bun la mate!\n",s1.GetName());
					break;
			case -1:
				printf("Studentul %s este mai bun la mate!\n",s2.GetName());
					break;
			case 0:
				printf("Ambii studenti sunt la fel de buni la mate!\n");
					break;
		}

		switch (compareEnglish(s1, s2))
		{
		case 1:
			printf("Studentul %s este mai bun la engleza!\n", s1.GetName());
			break;
		case -1:
			printf("Studentul %s este mai bun la engleza!\n", s2.GetName());
			break;
		case 0:
			printf("Ambii studenti sunt la fel de buni la engleza!\n");
			break;
		}

		switch (compareMath(s1, s2))
		{
		case 1:
			printf("Studentul %s este mai bun la istorie!\n", s1.GetName());
			break;
		case -1:
			printf("Studentul %s este mai bun la istorie!\n", s2.GetName());
			break;
		case 0:
			printf("Ambii studenti sunt la fel de buni la istorie!\n");
			break;
		}

		switch (compareMath(s1, s2))
		{
		case 1:
			printf("Studentul %s are media mai mare!\n", s1.GetName());
			break;
		case -1:
			printf("Studentul %s are media mai mare!\n", s2.GetName());
			break;
		case 0:
			printf("Studentii au aceeasi medie!\n");
			break;
		}
	return 0;
}