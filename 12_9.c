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
    if(n>0)
    
  {
 even (n/8);
    printf("%d",n%8);
}

}