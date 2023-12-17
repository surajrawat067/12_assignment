#include<conio.h>
void reverse (int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    reverse (n);
    return 0;

}
void reverse (n)
{
int a=n;
    if(n=a-1)
      {  printf("%d\n",(n));
     return ;
        
 }   reverse (n-1);
   


}