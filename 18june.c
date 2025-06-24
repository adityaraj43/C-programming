/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(1*sizeof(int));  

    if (ptr!=NULL)
    {
        printf("Memory is created\n");
        *ptr=100;
        printf("Value stored: %d\n",*ptr);  
        free(ptr);
    }
    else
    {
        printf("Memory not created\n");
    }

    return 0;
}
*/

/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr;
    int size, i,sum=0;
    printf("Enter size of digits : ");
    scanf("%d", &size);
    ptr = (int*)malloc(size * sizeof(int));
    if (ptr != NULL) 
    {
        printf("Memory is created\n");
        for (i=0;i<size;i++) 
        {
            printf("Enter number %d: ",i+1);
            scanf("%d",ptr+i);
            sum += *(ptr+i);
        }
        printf("Values stored are: ");
        for (i=0;i<size;i++) 
        {
            printf("%d ",*(ptr+i));
        }
        printf("\n");
        printf("\n Sum of all numbers = %d",sum);
        free(ptr);
    } 
    else 
    {
        printf("Memory not created\n");
    }
}
*/

/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *ptr;
    ptr = (char*)malloc(1*sizeof(char));  
    if (ptr != '\0') 
    {
        printf("Enter a character: ");
        scanf(" %c", ptr); 
        printf("You entered: %c\n", *ptr);
        free(ptr);
    } else 
    {
        printf("Memory not created\n");
    }
}
*/

#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int *ptr;
    ptr = (int*)calloc(4, sizeof(int));
    if(ptr != '\0') 
    {
        printf("Memory is created\n");

        printf("Enter one no.:- ");
        scanf("%d",ptr);

        printf("\n");
        printf("%d \n\n",*ptr);

        free(ptr);
        printf("Memory is free");
    }
    else 
    {
        printf("Memory not created");
    }
}
