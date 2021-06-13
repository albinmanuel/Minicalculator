//Minicalculator
//Here is the functions addition, subtraction, multiplication, division. After the use type 1 to retry


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //system("cls") is used for new tab
    system("cls");

    int n1,n2,choice,try;

    first:
    printf("\nCALCULATOR:\n\n");    
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    printf("\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter the Choice : ");
    scanf("%d",&choice);
    printf("\n");
    system("cls");
    
    switch(choice)
    {
        case 1: 
        {
            printf("Addition :  %d + %d = %d",n1,n2,n1+n2);
            break;
        }
        case 2:
        {
            printf("Subtraction :  %d - %d = %d",n1,n2,n1-n2);
            break;
        }
        case 3:
        {
            printf("Multiplication :  %d * %d = %d",n1,n2,n1*n2);
            break;
        }
        case 4:
        {
            printf("Division :  %d / %d = %.2f",n1,n2,n1/(float)n2);
            break;
        }
        default:
        {
            printf("Error :  Invalid Input");
            break;
        }  
    }

    printf("\n\nEnter '1' to Try Again : ");
    scanf("%d",&try);
    
    system("cls");

    if(try == 1)
    {
        goto first;
    }
    else 
    {
        printf("\nTHANK YOU\n");
    }

    return 0;
}
