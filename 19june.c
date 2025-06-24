/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main()
{
    char *ptr;
    int size;

    printf("Enter size of string:\n");
    scanf("%d", &size);
    ptr = (char *)calloc(size, sizeof(char));  // +1 for '\0'

    if (ptr != NULL)
    {
        printf("Memory is created\n");
        printf("Enter a string - \n");
        scanf("%s", ptr);
        printf("Characters in string are:\n");
       int i=0;
        for (i = 0; i<strlen(ptr); i++)
        {
            printf(" %c\n",*(ptr+i));
        }

        free(ptr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
}
*/

/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    int size;

    printf("Enter size of array:\n");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int)); 
    if (ptr != NULL) 
    {
        printf("Memory is created\n");
        printf("Enter %d no.s:\n", size);

        for (int i = 0; i < size; i++)
        {
            scanf("%d",ptr+i);
        }

        printf("\nOUTPUT 1:\n");
        for (int i=0; i<size;i++)
        {
            printf("%d\t",*(ptr+i));
        }
        int new_size;
        printf("\n\nEnter new size:\n");
        scanf("%d", &new_size);
        ptr=(int*)realloc(ptr,new_size*sizeof(int));
        printf("Enter %d new no.s:\n",new_size-size);

        for (int i=size;i<new_size;i++)
        {
            scanf("%d",ptr+i);
        }

        printf("\nOUTPUT 2 :\n");
        for (int i=0;i<new_size;i++)
        {
            printf("%d ",*(ptr+i)); 
        }

        free(ptr);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *ptr;
    int size;

    printf("Enter size of string:\n");
    scanf("%d", &size);

    ptr=(char*)malloc((size+1)*sizeof(char)); 

    if (ptr!=NULL)
    {
        printf("Memory is created\n");
        printf("Enter string \n");
        scanf("%s", ptr);
        int new_size;
        printf("Enter new size :\n");
        scanf("%d", &new_size);

        ptr = (char *)realloc(ptr, (size + new_size + 1) * sizeof(char));

        printf("Enter new string :\n");
        scanf("%s",ptr+new_size);

        printf("\nOUTPUT 2:\n");
        printf("%s\n", ptr);

        free(ptr);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
}
