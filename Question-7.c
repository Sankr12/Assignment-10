//Write a program to print the squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do{
        printf("%d\n",a*a);
        a++;
    }while(a<=n);
    getch();
}
