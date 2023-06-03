//Write a program to print the squares of first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(a=n;a>0;a--)
    {
      printf("%d\n",a*a);
    }
    getch();
}
