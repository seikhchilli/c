#include<stdio.h>
int main()
{
  int space;
  int num = 1;

  for(int rows = 1; rows <= 10; rows++)
  {
    for(space = 0; space < (10 - rows); space++)
    {
      printf("  ");
    }
    for(int i = 1; i <= rows; i++)
    {
      printf(" %d  ", num);
      num++;
    }
    for(space = 0; space < (10 - rows); space++)
    {
      printf("  ");
    }
    printf("\n");
  }


  }
