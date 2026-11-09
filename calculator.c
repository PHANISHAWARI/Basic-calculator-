#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("=============================\n");
printf("         Calculator          \n");
printf("=============================\n");
printf("1.Addition (+)\n");
printf("2.Subtraction (-)\n");
printf("3.Multiplication (*)\n");
printf("4.Division (/)\n");
printf("5.Modulus/Remainder (%%)\n");
printf("6.Exit\n");
printf("Choice from 1-6:");
{
    int choice,num1,num2;
    while(1)
    {
    if(scanf("%d",&choice)!=1)
    {
        printf("Invalid input. Use Numbers\n");
            while(getchar()!='\n');
            printf("Choice from 1-6:");
            continue;
    }
    if(choice<1 || choice>6)
    {
        printf("Invalid input Choice 1-6:");
        continue;
    }
    if(choice==6)
    {
        printf("----THANK YOU FOR USING CALCULATOR----\n");
        break;
    }
         printf("Enter two Integer:");
    if(scanf("%d%d",&num1,&num2)!=2)
    {
        printf("---Invalid Input. Enter Numbers---\n");
        while(getchar()!='\n');
        printf("Choice from 1-6:");
        continue;
    }
    if((choice==5 || choice==4) && num2==0)
    {
        printf("---Cannot divide by zero---\n");
        continue;
    }
    else{
    switch(choice)
    {
        case 1:
        printf("Addition:%d\n",num1+num2);
        break;
        case 2:
        printf("Subtraction:%d\n",num1-num2);
        break;
        case 3:
        printf("Multiplication:%d\n",num1*num2);
        break;
        case 4:
        printf("Division:%d\n",num1/num2);
        break;
        case 5:
        printf("Remainder/Modulus:%d\n",num1%num2);
        break;
    }}
    printf("Choice from 1-6:");
    }}
    return 0;}