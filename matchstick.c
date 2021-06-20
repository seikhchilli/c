#include<stdio.h>
int main()
{
  char again;
  printf("There are 21 matchsticks. You can pick 1,2,3, or 4 matchsticks.\n");
  printf("After you pick, I will pick. Whoever is forced to pick up the last matchstick loses the game.\n\n" );
  do
  {
    int m, n;
    n = 21;
    printf("--------------------------------------------------------------------------------------------\n\n");
    printf("Total number of matchsticks: %d\n\n", n);
      do
        {
          printf("It's your turn\n");
          if(n == 1)
          {
            int t;
            printf("There is only one matchstick left. Pick it looser.\n");
            input:
            scanf("%d", &t);
            if(t != 1)
            {
              printf("There is only one matchstick left, you blind mf. Just pick it and accept your defeat.\n");
              goto input;
            }
            n = n - t;
          }
          else
          {
            printf("Please pick any number of matchsticks from 1 to 4.\n");
            tinput:
            scanf("%d", &m);
            if(1 > m || m > 4)
            {
              printf("invalid input\nPlease re-enter\n");
              goto tinput;
            }
            n = n - m;
            printf("Number of matchsticks left: %d\n", n);
          }

          if( n == 5)
          {
            n = n - 4;
            printf("I have picked 4 matchsticks\n");
            printf("Number of matchsticks left: %d\n", n);

          }
          else if(n == 4)
          {
            n = n - 3;
            printf("I have picked 3 matchsticks\n");
            printf("Number of matchsticks left: %d\n", n);
          }
          else if(n == 3)
          {
            n = n - 2;
            printf("I have picked 2 matchsticks\n");
            printf("Number of matchsticks left: %d\n", n);
          }
          else if(n == 2)
          {
            n = n - 1;
            printf("I have picked 1 matchsticks\n");
            printf("Number of matchsticks left: %d\n", n);
          }
          else if(n == 0)
          {
            printf("You lost.\n");
            break;
          }
          else
          {
            int h = 5 - m;
            printf("I have picked %d matchsticks\n", h);
            n = n - h;
            printf("Number of matchsticks left: %d\n", n);
          }
        }while(n >= 0);
        fflush(stdin);
        printf("Do you want to try one more time?(y/n)\n");
        scanf("%c", &again);


      }while(again == 'y' || again == 'Y');
}
