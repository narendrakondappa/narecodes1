#include<stdio.h>
int main()
{
char a[][100];
int i;
int n=0;
scanf(" %[^\n]",&a);
for(i=0;a[i]!='\0';i++);
{
    if(a[i]==' '&& a[i+1]!=' ')
        n=n+1;
}
printf("%d",i);
printf("%d",n);

}



