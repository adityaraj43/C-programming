/*#include<stdio.h>
int main()
{
    int arr[5]={2,4,2,5,7};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nsize of aaray is =%d ",sizeof(arr));
}*/

/*
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 numbers = ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    
}
*/
/*
#include <stdio.h>

int main() 
{
    int n[3]; 
    int h[3];
    int sum[3];
    printf("Enter 3 numbers:\n");
    for(int i = 0; i < 3; i++) 
    {
        scanf("%d", &n[i]);    
    }
    printf("Enter 3 numbers:\n");
    for(int i = 0; i < 3; i++) 
    {
        scanf("%d", &h[i]);    
    }
    for(int i = 0; i < 3; i++)
     {
      
        sum[i]=n[i]+h[i];
       

    }
      printf("\n");
     for(int i = 0; i < 3; i++)
     {
        
        printf("%d ",sum[i]);

    }

    printf("\n");
}
*/
//2day Array
/*
#include<stdio.h>
int main()
{
    int a[2][2]={2,3,4,5};
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array = ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d no. = ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("OUTPU :- \n");
    for(int i=0;i<size;i++)
    {
       printf("%d ",arr[i]); 
    }

}
*/

#include <stdio.h>

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
    
    int max = arr[0];

 for(int i=0;i<size;i++)
 {
    if(max<arr[i])
    {
        Max=arr[i];
    }
 }
  printf("Maximum number = %d\n", max);
  int min = arr[0];
  
 for(int i=0;i<size;i++)
 {
    if(max>arr[i])
    {
        Max=arr[i];
    }
 }

    printf("Minimum number = %d\n", min);
}
