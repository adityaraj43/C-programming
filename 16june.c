/*#include<stdio.h>
struct info
{
    int a;
    char b;
    float c;
    double d;
    char str[10];
};
int main()
{
struct info i,*ptr=&i;
printf("ENTER INT VALUE = ");
scanf("%d",&ptr->a);
printf("ENTER CHAR VALUE = ");
scanf(" %c",&ptr->b);
printf("ENTER FLOAT VALUE = ");
scanf("%f",&ptr->c);
printf("ENTER DOBLE VALUE = ");
scanf("%lf",&ptr->d);
printf("ENTER STRING VALUE = ");
scanf("%s",&ptr->str);


printf("=============OUTPUT============");

printf("\nValue Of a is = %d\n",ptr->a);
printf("Value Of b is = %c\n",ptr->b);
printf("Value Of c is = %f\n",ptr->c);
printf("Value Of d is = %lf\n",ptr->d);
printf("Value Of str is = %s\n",ptr->str);

}
*/

/*#include <stdio.h>
typedef struct info 
{
    char name[20];
    int roll;
    float per;
} in;

int main() 
{
    in arr[3];
    in *ptr = arr;
    printf("=============Students detail input============\n");
    for(int i = 0; i < 3; i++) 
    {
        printf("Enter %d student info:\n", i + 1);
        printf("Enter name:\n");
        scanf("%s",ptr->name);
        printf("Enter roll no.:\n");
        scanf("%d",&ptr->roll);
        printf("Enter percentage:\n");
        scanf("%f",&ptr->per);
        printf("\n");
        ptr++;
    }

    ptr=arr;
    printf("============output============\n");
    printf("=============Students detail output===========\n");
    for(int i = 0; i < 3; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n",ptr->name);
        printf("Roll No.: %d\n",ptr->roll);
        printf("Percentage: %.2f\n",ptr->per);
        printf("\n");
        ptr++;
    }
}
*/

#include <stdio.h>
typedef struct info 
{
    char name[20];
    int roll;
    float per;
} in;

int main() 
{
    in arr[5];          
    in *ptr = arr;      
    printf("====================Students detail input===================\n");
    for(int i=0;i<5;i++) 
    {
        printf("Enter %d student info:\n",i+1);
        printf("Enter name:\n");
        scanf("%s",(ptr+i)->name);  

        printf("Enter roll no.:\n");
        scanf("%d",&(ptr+i)->roll);

        printf("Enter percentage:\n");
        scanf("%f",&(ptr+i)->per);

        printf("\n");
    }

    printf("====================Students detail output=================\n");
    for(int i=0;i<5;i++) 
    {
        printf("\n======================STUDENT %d========================\n",i+1);
        printf("Student %d:\n",i+1);
        printf("Name: %s\n", (ptr+i)->name);
        printf("Roll No.: %d\n", (ptr+i)->roll);
        printf("Percentage: %.2f\n",(ptr+i)->per);
        printf("\n");
    }
}
