/*#include<stdio.h>
int main()
{
    int arr[5],*ptr1=arr;
    printf("Enter 5 no. = ");
    for(int i=0;i<5;i++)
    {
        scanf("%d" ,ptr1);
    }
    ptr1=arr;
    printf("Even no. is = ");
    for(int i=0;i<5;i++)
    {
        if(*ptr1%2==0)
        {
            printf("%d \t",*ptr1);
        }
        ptr1++;
    }
    ptr1=arr;
    printf("\n Odd no are = ");
    for(int i=0;i<5;i++)
    {
        if(*ptr1%2!=0)
        {
            printf("%d \t",*ptr1);
        }
        ptr1++;
    }
}*/
/*
#include <stdio.h>
void max_min(int *n1, int *n2);

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max_min(&num1, &num2);
}
void max_min(int *n1, int *n2) 
{
    if (*n1 > *n2) 
    {
        printf("Maximum = %d\n", *n1);
        printf("Minimum = %d\n", *n2);
    } else if (*n2 > *n1) 
    {
        printf("Maximum = %d\n", *n2);
        printf("Minimum = %d\n", *n1);
    } else 
    {
        printf("Both numbers are equal: %d\n", *n1);
    }
}
*/

//TAKS - Min And Max Numbers
#include <stdio.h>

int main() 
{
    int arr[5], *ptr = arr;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", ptr + i);
    }

    int max = *ptr;
    int min = *ptr;

    for(int i = 1; i < 5; i++) 
    {
        if(*(ptr + i) > max) 
        {
            max = *(ptr + i);
            printf("Maximum number: %d\n", max);
        }
        if(*(ptr + i) < min)
        {
            min = *(ptr + i);
             printf("Minimum number: %d\n", min);
        }
    }

    //printf("Maximum number: %d\n", max);
    //printf("Minimum number: %d\n", min);

}
