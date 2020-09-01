#include<stdio.h>

int main()
{
     char ch;
     printf("Enter the character =");
     scanf("%c",&ch);

     if (ch<=122 && ch>=97)
     {
        printf("%c is in lowercase",ch);
     }
     else
     {
         printf("%c is not in lowercase",ch);
     }
     

    return 0;
}