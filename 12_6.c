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
    printf("%d\n",n*2);
    if(n==1)
        return ;
    even (n-1);




}