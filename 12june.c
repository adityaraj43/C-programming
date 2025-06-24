/*#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;  // pointer to the first element of array

    // Taking 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d",ptr++);  // OR &arr[i]
    }

    ptr=arr;

    printf("You entered:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", *(ptr)); 
        ptr++; // OR arr[i]
    }
}
*/
/*
#include <stdio.h>

int main() 
{
    int n1, n2;
    int *num1 = &n1;
    int *num2 = &n2;

    printf("Enter two numbers:\n");
    scanf("%d %d", num1, num2); 


    printf("INPUT n1 = %d, n2 = %d\n", *num1, *num2);

    *num1=*num1^*num2^(*num2=*num1);
    /*
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 =*num1 - *num2;


    printf("OUTPUT n1 = %d, n2 = %d\n", *num1, *num2);


}
*/
/*
#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    // Input array using ptr1
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", ptr1);
        ptr1++;  // move to next element
    }

    // Reset ptr1 back to start of arr1
    ptr1 = arr1;

    // Copy using only *ptr1 and *ptr2
    for (int i = 0; i < 5; i++) 
    {
        *ptr2 = *ptr1;  // copy value
        ptr1++;
        ptr2++;
    }

    // Reset ptr2 back to start of arr2 to print
    ptr2 = arr2;

    printf("Copied array:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *ptr2);
        ptr2++;
    }

}
*/

#include<stdio.h>
void ptr(int *ptr);
int main()
{
    int a=50;
    ptr(&a);
}
void ptr(int *ptr)
{
    printf("%d",*ptr);
}