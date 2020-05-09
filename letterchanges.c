#include<stdio.h>
#include<iostream>
using namespace std; 

int main()
{
	char s[100];
	int w[300];
	scanf("%[^\n]",&s);
	for (int i=0;s[i]!='\0';i++)
	{
		  w[i]=int(s[i]);
		  if((int(w[i])>=65 && int(w[i])<=90) || (int(w[i])>=97 && int(w[i])<=122))
		  {
			  w[i]=int((w[i])+1);
		  }
	}
	for(int i=0;s[i]!='\0';i++)
	{
		if(int((w[i])==97 || w[i]==101 || w[i]== 105 || w[i]==111 || w[i]==117))
		{
			w[i]=int(w[i])-32;
		}
		printf("%c",w[i]);
	
	}
	


}
