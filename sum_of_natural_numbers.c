#include<stdio.h>
int fun(int a)
{
  int sum;
  if(a != 1)
  {
    sum = a + fun(a-1);
  }
  else
  {
    sum = 1;
  }
  return sum;
}

int main()
{
  int n;
  printf("Enter the range:\n");
  scanf("%d", &n);
  int s = fun(n);
  printf("Sum of %d natural numbers: %d", n, s);

}
