#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number to add : \n");
    scanf("%d %d",&a,&b);
    printf("Sum : %d",Sum(a,b));
    return 0;
}
int Sum(int a,int b)
{
    return a+b;
}
