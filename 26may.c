/*#include <stdio.h>

int main() 
{
    int size;
    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers = ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("OUTPUT :-\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
  /*  int max = arr[0];

    for (int i = 0; i < size; i++) 
    {
        if (max < arr[i]) 
        {
            max = arr[i];  
        }
    }

    printf("Maximum number = %d\n", max);

    int min = arr[0];

    for (int i = 0; i < size; i++) 
    {
        if (min > arr[i]) 
        {
            min = arr[i];  
        }
    }

    printf("Minimum number = %d\n", min);*/
    
    /*int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
      printf("Assending to decendeing = \n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");*/


#include <stdio.h>

int main() 
{
    int size;
    printf("Enter size of array = ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers = ", size);
    for (int i=0;i<size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("OUTPUT :-\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int position;
    printf("Enter position for delete data = ");
    scanf("%d",&position);
    for(int i=position;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nOUTPUT = ");
    for (int i=0;i<size-1;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
