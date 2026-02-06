//WAP to print largest number sorted in the elements of array.
//This program only store 10 elements of array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10];
    const int SIZE=sizeof(arr)/sizeof(int);
    int i,largest_no;
    for(i=0;i<SIZE;i++)//To take the elements of array from users.
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    largest_no=arr[0]; //Initilaziting the value of largest number is first elements of array.
    for(i=0;i<SIZE;i++)
    {
        if(largest_no<arr[i])
        {
            largest_no=arr[i];
        }
    }
    system("CLS");
    printf("Largest Number of Array is : %d",largest_no); //Displaying the largest number of array.
    return 0;
}