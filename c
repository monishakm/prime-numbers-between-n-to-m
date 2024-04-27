#include <stdio.h>

int main()
{
   int n,m,count=0;
   scanf("%d %d",&n ,&m);
   for(int i=n;i<=m;i++)
   {
       count=0;
       for(int j=1;j<=i;j++)
       {
           if(i%j == 0)
           count++;
       }
       if(count==2)
       {
           printf(" %d",i);
       }
   }

    return 0;
}
