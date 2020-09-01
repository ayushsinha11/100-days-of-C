#include<stdio.h>

int main()
{
     float n1,n2,n3,n4;
     printf("Enter thr value of n1,n2,n3,n4\n");
     scanf("%f %f %f %f",&n1, &n2 ,&n3, &n4);

    if (n1>=n2 && n1>=n3 && n1>=n4)
    {
        printf("%f is the largest number",n1);
    }
    

     if (n2>=n1 && n2>=n3 && n2>=n4)

    {
        printf("%f is the largest number",n2);

    }


     if (n3>=n1 && n3>=n2 && n3>=n4)
    {
        printf("%f is the largest number",n3);

    }

     if (n4>=n1 && n4>=n2 && n4>=n3)
    {
        printf("%f is the largest number",n4);
    }

    return 0;
}