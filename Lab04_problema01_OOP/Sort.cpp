#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <cstring>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <initializer_list>
#include <cstdio>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
using namespace std;

Sort::Sort(int count, int min, int max)
{
	this->size = count;
	for (int i = 0; i < this->size; i++)
		this->list[i] = min + rand() % max;
	printf("Prima lista nesortata este : \n");
	Print();
	BubbleSort();
	printf("Prima lista sortata este : \n");
	Print();
}
Sort::Sort(int v[], int count)
{
	for (int i = 0; i < count; i++)
		this->list[i] = v[i];
	this->size = count;
	printf("A doua lista nesortata este: \n");
	Print();
	InsertSort();
	printf("A doua lista sortata este: \n");
	Print();
}
Sort::Sort(int count, ...)
{
	this->size = count;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		int x = va_arg(args, int);
		this->list[i] = x;
	}
	va_end(args);
	printf("A treia lista nesortata este: \n");
	Print();
	QuickSort();
	printf("A treia lista sortata este: \n");
	Print();
}
Sort::Sort(const char* sir)
{
	int i = 0;
	int k = 0;
	int number = 0;
	while (i < strlen(sir))
	{
		if (sir[i] != ',')
		{
			number = number * 10 + (sir[i] - '0');
			i++;
		}
		else
		{
			list[k++] = number;
			number = 0;
			i++;
		}
	}
	list[k++] = number;
	number = 0;
	size = k;
	printf("A patra lista nesortata este: \n");
	Print();
	BubbleSort();
	printf("A patra lista sortata este: \n");
	Print();
}

/*Sort::Sort(std::initializer_list<int> x)  // cu parcurgerea unei liste de initializare
{
	size = x.size();
	int count = 0;
	for (int i : x)
	{
		list[count] = i;
		count++;
	}
	printf("A cincea lista nesortata este: \n");
	Print();
	InsertSort();
	printf("A cincea lista sortata este: \n");
	Print();	
}*/

Sort::Sort(int a, int b, int c, int d, int e, int f, int g, int h)   // din lista de initializare
{
	size = 8;
	list[0] = a;
	list[1] = b;
	list[2] = c;
	list[3] = d;
	list[4] = e;
	list[5] = f;
	list[6] = g;
	list[7] = h;
	printf("A cincea lista nesortata este: \n");
	Print();
	InsertSort();
	printf("A cincea lista sortata este: \n");
	Print();
}

void Sort::InsertSort(bool ascendent)
{
	if (ascendent == true)
	{
		for (int i = 1; i < size; i++)
		{
			int value = GetElementFromIndex(i);
			int j = i;
			while (j > 0 && GetElementFromIndex(j - 1) > value)
			{
				list[j] = GetElementFromIndex(j - 1);
				j--;
			}
			list[j] = value;
		}
	}
	else
	{
		for (int i = size - 2; i >= 0; i--)
		{
			int value = list[i];
			int j = i;
			while (j < size - 1 && GetElementFromIndex(j + 1) > value)
			{
				list[j] = GetElementFromIndex(j + 1);
				j++;
			}
			list[j] = value;
		}
	}
}

void Sort::QuickSort(bool ascendent)
{
		int p = 0;
		int q = size - 1;
		QuickSort2(p, q, ascendent);
}

void Sort::BubbleSort(bool ascendent)
{
	if (ascendent == true)
	{
		for (int i = 0; i < size - 1; i++)
			for (int j = 0; j < size - i - 1; j++)
				if (GetElementFromIndex(j) > GetElementFromIndex(j + 1))
				{
					int aux = GetElementFromIndex(j);
					list[j] = GetElementFromIndex(j + 1);
					list[j + 1] = aux;
				}
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
			for (int j = 0; j < size - i - 1; j++)
				if (GetElementFromIndex(j) < GetElementFromIndex(j + 1))
				{
					int aux = GetElementFromIndex(j);
					list[j] = GetElementFromIndex(j + 1);
					list[j + 1] = aux;
				}
	}
}

void Sort::Print()
{
	for (int i = 0; i < this->size; i++)
		cout << GetElementFromIndex(i) << " ";
	cout << endl;
}

int Sort::GetElementsCount()
{
	return this->size;
}

int Sort::GetElementFromIndex(int index)
{
	if (index < this->size)
		return this->list[index];
	else
		cout << "Index gresit!";
	return -1;
}


void Sort::QuickSort2(int p, int q, bool ascendent)
{
	if (p < q)
	{
		int pivot = GetElementFromIndex(q);
		int pos = Partition(p, q, pivot, ascendent);

		QuickSort2(p, pos - 1, ascendent);
		QuickSort2(pos + 1, q, ascendent);
	}
}

int Sort::Partition(int p, int q, int pivot, bool ascendent)
{
	if (ascendent == true)
	{
		int i = p;
		int j = p;
		while (i <= q)
		{
			if (GetElementFromIndex(i) > pivot)
			{
				i++;
			}
			else
			{
				int aux = GetElementFromIndex(i);
				list[i] = GetElementFromIndex(j);
				list[j] = aux;
				i++;
				j++;
			}
		}
		return j - 1;
	}
	else
	{
		int i = q;
		int j = q;
		while (i >= p)
		{
			if (GetElementFromIndex(i) >= pivot)
			{
				i--;
			}
			else
			{
				int aux = GetElementFromIndex(i);
				list[i] = GetElementFromIndex(j);
				list[j] = aux;
				i--;
				j--;
			}
		}
		return j + 1;
	}
}
