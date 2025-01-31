#include <stdio.h>
#include "labo.h"

char* sousTexte(char* texte, int from, int to)
{
	char sousTableau[512] = {0};

	for (int i = 0; i < to - from ; i++)
	{
		sousTableau[i] = texte[from + i];
	}

	return sousTableau;
}

void set_String(char* text, String* s)
{
	
}

int String_is_palindrome(String* s)
{

	return 0;
}

void bubbleSort(int elements[], int n)
{

}
