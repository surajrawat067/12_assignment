#include<conio.h>
void square (int);
int main ()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    square (a);
    return 0;
}

void square (int a)
{
if(a==0)
return ;
square (a-1);
printf("%d\n",a*a);



}