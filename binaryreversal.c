#include<stdio.h>
#include<math.h>

int main()
{
    int a[10],b[10],k,r,j,s,ans=0,h;
    scanf("%d",&k);
    int i=0;
    while(k>=1)
    {
        r=k%2;
        a[i]=r;
        i++;
        k=k/2;
    }
    int m=i;
    //printf("%d",m);
    if(m<8)
    {
        s=7,j=7;
        int l=s-(m-1);
        int v=0,c;
        for(i=0;i<=m-1;i++)
        {
            b[j]=a[i];
           // printf("%d",b[j]);
            j--;
        }
        c=j;
        for(v=l;v>0;v--)
        {
            b[c--]=0;
          // printf("%d",c);
            
        }
        for(c=0;c<=7;c++)
        {
            printf("%d",b[c]);
            m=c+1;
        }
        
    }
    else
    {
        j=0;
        for(int i=m-1;i>=0;i--)
        {
            b[j]=a[i];
            j++;
        }      
    }
    for(int c=m-1;c>=0;c--)
    {
        ans=(ans)+(b[c])*(pow(2.0,c));
        
    }
    printf("\n");
    printf("%d",ans);
    
}
