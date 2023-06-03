//Write a program to print MySirG N times on the screen.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do{
        printf("MySirG\n");
        a++;
    }while(a<n);
    getch();
}
