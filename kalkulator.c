// Made by Furkan Orta
// Written on Dev-C++ 5.11

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    int operation, value1, value2, result, remain, loop=1;
    printf("\nWelcome to Kalculator!");
    while (loop<=100)
    {
        printf("\nAddition=1, Substraction=2, Multiplication=3, Division=4, Power=5");
        selection:
        printf("\nPlease choose an operation: "); scanf("%d", &operation);
        switch(operation)
        {
            case 1:
                printf("\nYou have selected addition!");
                break;
            case 2:
                printf("\nYou have selected subtraction!");
                break;
            case 3:
                printf("\nYou have selected multiplication!");
                break;
            case 4:
                printf("\nYou have selected division!");
                break;
            case 5:
                printf("\nYou have selected power!");
                break;
            default:
                printf("\nEntered wrong value!");
                goto selection;
                break;
        }

        printf("\nEnter first value: "); scanf_s("%d", &value1);
        printf("\nEnter second value: "); scanf_s("%d", &value2);

        switch(operation)
        {

            case 1:
                (result)=(value1)+(value2);
                printf("\n%d + %d = %d", value1, value2, result);
                break;
            case 2:
                (result)=(value1)-(value2);
                printf("\n%d - %d = %d", value1, value2, result);
                break;
            case 3:
                (result)=(value1)*(value2);
                printf("\n%d x %d = %d", value1, value2, result);
                break;
            case 4:
                if (value2!=0)
                {
                    float(result)=(value1)/(value2);
                    (remain)=(value1)%(value2);
                    printf("\n%d : %d = %.2f , Remain = %d", value1, value2, result, remain);
                }
                else
                {
                    printf("\nDenominator can not be %d!", value2);
                }
                break;
            case 5:
                if (value1==0&&value2==0)
                {
                    printf("\n%d power of %d is indefinite!", value1, value2);
                }
                else
                {
                    result=pow(value1, value2);
                    printf("\n%d power of %d = %d", value1, value2, result);
                }
                break;
        }
        loop++;
        printf("\nPress any key to continue...\n");
        getch();
        system("cls");
    }
}

