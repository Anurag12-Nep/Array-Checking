//WAP to enter two inputs from user and perform calculation Addition, Subtraction, Multiplication and Division.
//Every times it ask user choice to continue the program.
//I have also added some UI.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    char C;
    do{
    printf("===============================");
    printf("\n         Calculator        \n");
    printf("===============================\n");
    printf("Select Your Choice!!!\n");
    printf("1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n");
    printf("===============================\n");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)
    {
        printf("\n-------Addition-------\n");
        printf("Enter the first number : \n");
        scanf("%d",&a);
        printf("Enter the second number : \n");
        scanf("%d",&b);
        printf("Sum = %d\n",a+b);
    }
    else if(choice==2)
    {
        printf("\n------Substraction------\n");
        printf("Enter the first number : \n");
        scanf("%d",&a);
        printf("Enter the second number : \n");
        scanf("%d",&b);
        printf("Difference = %d\n",a-b);
    }
    else if(choice==3)
    {
        printf("\n------Multiplication------\n");
        printf("Enter the first number : \n");
        scanf("%d",&a);
        printf("Enter the second number : \n");
        scanf("%d",&b);
        printf("Product = %d\n",a*b);
    }
    else if(choice==4)
    {
        printf("\n-------Division-------\n");//It only print Intiger value of output.
        printf("Enter the first number : \n");
        scanf("%d",&a);
        printf("Enter the second number : \n");
        scanf("%d",&b);
        printf("Division = %d\n",a/b);
    }
    else
    {
        printf("Invalid Choice...\n");//this is the default case. --
    }
    printf("You want to do more?(Y/N)\n");
    scanf(" %c",&C);
    system("cls");
    }while(C=='Y' || C=='y');
    return 0;
}
