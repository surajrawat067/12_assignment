#include<stdio.h>
int natural (int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    natural (n);
    return 0;
}
int natural (int n)
{
       if(n>=1)
      {  natural (n-1);
        printf("%d\n",n);
    }    
}
    