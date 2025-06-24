/*#include<stdio.h>
int main()
{
    int num=10;
    printf("Value of num is =%d \n",num);
    printf("Add of num is =%u \n",&num);
    int *ptr;
    ptr=&num;
    printf("Value of ptr is = %d",ptr);
    printf("Add of ptr is =%d\n",&ptr);
    printf("Ptr is pointing to %d\n",*ptr);
    (*ptr)++;
    printf("Aft Opt ptr =%d\n",*ptr);
    printf("%d",num);
}*/
/*
#include<stdio.h>
int main()
{
    int num1,num2,result,*n1=&num1,*n2=&num2,*res=&result;
    printf("Enter 1st number = ");
    scanf("%d",n1);
    printf("Enter 2nd number = ");
    scanf("%d",n2);
    
    *res=*n1+*n2;

    printf("Addition of two numbers is = %d\n",*res);

}*/

#include<stdio.h>
int main()
{
    char a='A';
    char *ptr=&a;

    for(int i=0;i<26;i++)
    {
        printf("%c \t",*ptr);
        (*ptr)++;
    }
}