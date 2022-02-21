#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int convertor(char s[200])
{
   int n=0;
   for(int i=0;i<strlen(s);i++)
        n=n*10+(s[i]-'0');
   return n;
}
int main()
{
	FILE* pFile;
	pFile = fopen ("ini.txt","r");
	int sum=0;
	if (pFile!=NULL != 0)
	{
		char myString[200];
		while (fgets(myString, 200, pFile))
		{
			myString[strlen(myString) - 1] = '\0';
			int nr=convertor(myString);
			sum+=nr;
		}
	}
	else {
          printf("NU\n");
	}
	printf("Suma este:%d",sum);
	printf("\n\n");


	system("pause");
	return 0;
}
