#include<conio.h> 
void odd(int n);
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
odd (n);
return 0;

}
void odd (n)
{
if(n==0)
return ; 
odd (n-1);
printf("%d\n",(2*n-1));


}