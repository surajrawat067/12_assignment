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
    printf("%d\n",n);
    if(n>=2)
    {   natural (n-1);

    }
}
