#pragma once
#include <initializer_list>
#include <cstdio>

class Sort

{
    int list[100];
    int size;

public:
    
    //Sort(std::initializer_list<int> x);    // cu parcurgerea unei liste de initializare

    Sort(int a, int b, int c, int d, int e, int f, int g, int h);

    Sort(int count, int min, int max);

    Sort(int v[], int count);

    Sort(int  count, ...);

    Sort(const char* sir);


    void InsertSort(bool ascendent = false);   // Sortare descrescatoare;

    void QuickSort(bool ascendent = false);   // Daca schimbam valoarea in "true", algoritmii for sorta crescator;
    
    void QuickSort2(int p, int q, bool ascendent);

    int Partition(int p, int q, int pivot, bool ascendent);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};