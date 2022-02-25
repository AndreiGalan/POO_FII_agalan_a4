#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
	char s[256],aux[256],aux2[256];
	char mat[256][256];
	scanf("%[^\n]",s);
	int v[20];
	int n=0;
	strcpy(aux,s);
	char *p=strtok(s," ");
	while(p)
    {
        int x=strlen(p);
        v[x]++;
        p=strtok(NULL," ");
    }
    int i=0;
    int ok=1;
//    for(int j=1;j<=10;j++)
//        cout<<v[j]<<" ";
	while(ok)
    {
        //cout<<1<<endl;
        strcpy(s,aux);
        char *p=strtok(s," ");
        while(p)
        {
            ok=0;
            int ok2=1;
            for(int j=19;j>=1&&ok2;j--)
            {
                if(v[j]>0)
                {
                    ok=1;
                    if(strlen(p)==j)
                    {
                    //cout<<j<<endl;
                        strcat(mat[i],p);
                        v[j]--;
                        i++;
                    }
                    ok2=0;
                }
            }
            p=strtok(NULL," ");
        }
    }
    ok=1;
    while(ok)
    {
        ok=0;
        for(int j=1;j<i;j++)
            if(strlen(mat[j])==strlen(mat[j-1]))
                if(strcmp(mat[j],mat[j-1])>0)
                {
                    ok=1;
                   strcpy(aux,mat[j]);
                   strcpy(mat[j],mat[j-1]);
                   strcpy(mat[j-1],aux);
                }
    }
    //cout<<i<<endl;
    for(int j=0;j<i;j++)
        cout<<mat[j]<<endl;
	return 0;
}
