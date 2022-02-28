#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char propozitie[100], v[100][100], aux[100];
    int nr_cuvinte = 0, litere = 0, p, q, k = 0, i, j;
    scanf("%[^\n]s", propozitie);
    if (propozitie[0] != ' ')
    {
        p = 0;
        q = 0;
        nr_cuvinte = 1;
        litere = 1;
    }
    else
        nr_cuvinte = 0;
    for (i = 1; i < strlen(propozitie); i++)
    {
        if (propozitie[i] != ' ')
        {
            litere++;
            q = i;
        }
        else
        {
            if (propozitie[i - 1] != ' ')
            {
                strncpy(v[++k], propozitie + p, q - p + 1);
                v[k][q-p+1] = NULL;
            }

        }
        if (propozitie[i] != ' ' && propozitie[i - 1] == ' ')
        {
            litere = 1;
            nr_cuvinte++;
            p = i;
            q = i;
        }
    }
    if (propozitie[i] != ' ')
    {
        litere++;
        q = i;
    }
    else
    {
        if (propozitie[i - 1] != ' ')
        {
            strncpy(v[++k], propozitie + p, q - p + 1);
            v[k][q-p+1] = NULL;
        }

    }
    if (propozitie[i] != ' ' && propozitie[i - 1] == ' ')
    {
        litere = 1;
        nr_cuvinte++;
        p = i;
        q = i;
    }
    strncpy(v[++k], propozitie + p, q - p + 1);
    v[k][strlen(v[k])] = NULL;
    for (i = 1; i < k; i++)
        for (j = i + 1; j <= k; j++)
            if (strlen(v[i]) < strlen(v[j]))
            {
                strcpy(aux, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], aux);
            }
            else

                if (strlen(v[i]) < strlen(v[j]) && strcmp(v[i], v[j]) < 0)
                {
                    strcpy(aux, v[i]);
                    strcpy(v[i], v[j]);
                    strcpy(v[j], aux);
                }
    for (i = 1; i <= k; i++)
        cout << v[i] << endl;
    return 0;
}
