#include<stdio.h>
void circulate(int *a, int *b, int *c)
{
  int t = *c;
  *c = *b;
  *b = *a;
  *a = t;

}
int main()
{
  int x, y, z;
  printf("Pls enter value of x:\n");
  scanf("%d", &x);
  printf("pls enter value of y:\n");
  scanf("%d", &y);
  printf("pls enter value of z:\n");
  scanf("%d", &z);
  printf("x : %d \ny : %d \nz : %d\n", x, y, z);
  circulate(&x, &y, &z);
  printf("\n\n------------NEW VALUE----------------\n");
  printf("\nx : %d \ny : %d \nz : %d\n", x, y, z);
}
