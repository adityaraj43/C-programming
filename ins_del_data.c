//Insert_Data

#include <stdio.h>
int main() 
{
    int size;
    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers = ",size);
    for (int i=0;i<size;i++) 
    {
        scanf("%d",&arr[i]);
    }

    printf("OUTPUT : \n");
    for (int i=0;i<size;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int num,pos;
    printf("Enter number to insert = ");
    scanf("%d",&num);
    printf("Enter position to insert data = ");
    scanf("%d", &pos);
    for (int i=size;i>pos;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    size++;
    printf("OUTPUT : \n");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
/*
//delete_Data
#include <stdio.h>
int main() 
{
    int size;
    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers = ",size);
    for (int i=0;i<size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("OUTPUT : \n");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int position;
    printf("Enter position for delete data = ");
    scanf("%d",&position);
    for(int i=position;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("OUTPUT = ");
    for (int i=0;i<size-1;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}*/

