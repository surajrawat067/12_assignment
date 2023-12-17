#include<conio.h>
void binary(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    binary (n);
    return 0;

}
void binary (n)
{
    if(n>0)
  {  binary (n/2);
    printf("%d",n%2);
}

}