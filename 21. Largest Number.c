#include<stdio.h>
#include<conio.h>

main()
{
    int num1, num2, num3;
    printf("Enter the 1st number: ");
    scanf("%d", &num1);

    printf("Enter the 2nd number: ");
    scanf("%d", &num2);

    printf("Enter the 3rd number: ");
    scanf("%d", &num3);


    if ((num1 > num2) && (num1 > num3))
        printf("%d is the largest number", num1);
        else if ((num2 > num1) && (num2 > num3))
        printf("%d is the largest number", num2);
    else if ((num3 > num1) && (num3 > num2))
        printf("%d is the largest number", num3);

    getch();
}

