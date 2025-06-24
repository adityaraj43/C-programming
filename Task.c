//======================1.===============================

//---------------CONVERT_UPPER-LOWER_CASE-----------
/*#include <stdio.h>
int main() {
    char str[10];
    char *ptr = str;
    printf("Enter a string (with uppercase): ");
    scanf("%s",&str);
    while (*ptr != '\0') 
    {
        if (*ptr>='A' && *ptr<='Z') 
        {
            *ptr=*ptr+32;
        }
        ptr++;
    }
    printf("Lowercase string: %s", str);
}
*/

//====================== 2.=========================


//------------PRINT_ONLY_UPPER_CASE--------------

/*#include <stdio.h>
int main() 
{
    char str[10];         
    char *ptr;
    printf("Enter a string: ");  
    scanf("%s", str);      
    ptr = str;     
    printf("Uppercase letters are: ");
    while (*ptr) 
    {
        if (*ptr >= 'A' && *ptr <= 'Z') 
        {
            printf("%c", *ptr);
        }
        ptr++;
    }
    printf("\n");
}
*/

//====================== 3.=========================


//-------------------CONCAT-----------------------

#include <stdio.h>

int main() {
    char str1[10], str2[10];
    char *p1 = str1, *p2 = str2;
    printf("Enter first string: ");
    scanf("%s", str1); 
    printf("Enter second string: ");
    scanf("%s", str2);
    while (*p1!='\0') 
    {
        p1++;
    }
    while (*p2!='\0') 
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1 ='\0';
    printf("OUTPUT =  %s\n", str1);
}
