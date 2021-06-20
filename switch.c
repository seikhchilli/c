#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u;
    printf("slect 1 for get factorial of number\n");
    printf("slect 2 for check prime number or not\n");
    printf("slect 3 for check odd or even number\n");
    printf("slect 4 for exit\n\n");
    printf("select the option\n");
    scanf("%d", &u);
    switch (u)
    {
    case 1:
        printf("you have selected for factorial\n");
        int i, n, factorial = 1;
        printf("enter the number whose factorial required\n=");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("the value of factorial %d is= %d", n, factorial);
    break;

    case 2:
         printf("you have selected for checking number is prime or not\n");
         int number,input,prime=1;
         printf("enter the number =");
         scanf("%d",&number);

         for(input=2;input<number;input++){
             if(number%input==0){
                 prime=0;
                 break;
             }
        }
        if(prime==0){
            printf("the number you have entered is not a prime numbe");
        }
             else{
                 printf("the number you have entered is prime number");
             }


    break;

    case 3:
        printf("you have selected number is even or not");
        int num;
    printf("enter a number =");
    scanf("%d", &num);
    if(num==0 || num%2==0){
        printf("you have entered a even number");
    }
    else{
        printf("you have entered a odd number");
    }
    break;

    case 4:
      printf("you have selected to exit");
      exit(0);
    break;

    default:
     printf("you have entered a invalid input");
    break;

    }

    return 0;
}
