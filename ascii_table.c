#include<stdio.h>
int main()
{
  int i;
  printf("Ascii value          character\n");
  for(i = 0; i <= 250; i++)
  {
    printf("     %d                 %c\n", i, i);
  }
}
