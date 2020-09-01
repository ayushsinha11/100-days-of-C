#include<stdio.h>

int main()
{
     int phy,chem,maths;
     float total;

     printf("Enter the marks of phy\n");
     scanf("%d",&phy);

    printf("Enter the marks of chem\n");
     scanf("%d",&chem);


     printf("Enter the marks of maths\n");
     scanf("%d",&maths); 


    total=(phy+chem+maths)/3;


    if( (total<40) || phy<33 || chem<33 || maths<33)
    {
        printf("Your total percentage is %f less than 40,you are fail",total);
    }

    else
    {
        printf("Your total percentage is %f,you are pass",total);
    }
    
    return 0;
}