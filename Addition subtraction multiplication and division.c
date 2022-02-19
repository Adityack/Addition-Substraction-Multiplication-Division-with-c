/*******************************************
Statement - Addition, Substraction, Multiplication, Division
Auther - Aditya
Written For - need2know.online
********************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,addition,substraction,multiplication;
    float division;
    clrscr();
    printf("Enter The Value Of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    addition=a+b;
    substraction=a-b;
    multiplication=a*b;
    division=a/b;
    printf("The Addition of a b is %d",addition);
    printf("\nThe Addition of a b is %d",substraction);
    printf("\nThe Addition of a b is %d",multiplication);
    printf("\nThe Addition of a b is %f",division);
    getch();
}
//
