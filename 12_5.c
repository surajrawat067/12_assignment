#include<conio.h> 
void even(int n);
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
even (n);
return 0;

}
void even (n)
{
if(n==0)
return ; 
even (n-1);
printf("%d\n",(2*n));


}