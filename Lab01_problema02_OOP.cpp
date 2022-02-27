#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <stdio.h>
#define BUFFER_SIZE 100
using namespace std;

int my_atoi(char number[])
{
    int suma = 0, numar_valid = 1;
    for (int i = 0; i < strlen(number)-1; i++)              // Am pus strlen(number) - 1 deoarece imi lua si 
    {                                                       //      ENTER-ul de dupa fiecare numar in considerare
        
        if (number[i] >= '0' && number[i] <= '9')
        {
            suma = suma * 10 + (number[i] - '0');
        }
        else
        {
            numar_valid = 0;
        }
        
    }
    if (numar_valid == 1)
    {
        return suma;
    }
    else
    {
        return -1;
    }
}

int main()
{
    FILE* fisier;
    char sir[100];
    int rezultat = 0, numar;
    
    if ((fisier = fopen("in.txt", "r")) == NULL)
    {
        printf("Eroare la deschiderea fisierului.");
        exit(1);
    } 
    
    while (fgets(sir, BUFFER_SIZE, fisier) != NULL)
    {
        numar = my_atoi(sir);
        if (numar != -1)
        {
            rezultat += numar;
        }
    }

    printf("%d", rezultat);
	fclose(fisier);
    return 0;
}