#include<stdio.h>
int sum(int a)
{
  int s, remainder;
  if(a != 0)
  {
    remainder = a%10;
    s = remainder + sum(a/10);

  }
  else
  {
    return 0;
  }
  return s;
}
int main()
{
  int n;
  printf("Please enter the number:\n");
  scanf("%d", &n);
  int t = sum(n);
  printf("%d", t);

}
