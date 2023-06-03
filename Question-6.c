//Write a program to print the first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(a;a<n;a++)
    {
      printf("%d\n",2*a+1);
    }
    getch();
}
