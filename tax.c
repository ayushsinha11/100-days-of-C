#include<stdio.h>

int main()
{
     float income,tax;
     printf("Enter the income \n");
     scanf("%f",&income);

     if (income>=250000 && income<=500000)
     {
         tax = tax + 0.05*(income-250000);
     }


      if (income>=500000 && income<=1000000)
     {
         tax = tax + 0.20*(income-500000);
     }


      if (income>=1000000)
     {
         tax = tax + 0.30*(income-1000000);
     }
     

     printf("You have to pay the tax of %f before 26 of this month\n",tax);


    return 0;
}