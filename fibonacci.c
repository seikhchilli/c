#include<stdio.h>
int fun(int a)
{
  register  int sum;
  if(a > 2 )
  {
    sum = fun(a-1) + fun(a-2);
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
  register int i;
  for( i = 1; i <= n; i++)
  {
    int t = fun(i);
    printf("%d ", t);
  }

}
