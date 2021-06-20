#include <stdio.h>
//find the volume of cylinder by continue 1_practice_2a progran
int main()
{
    int radius;
    printf("what is the radius of circular base of cylinder\n=");
    scanf("%d", &radius);
    float pi = 3.14;
    printf("the area of required circular base of cylinder is\n= %f\n", radius*radius* pi);
    int height;
    printf("\nwhat is height of cylinder\n=");
    scanf("%d", &height);
    printf("the volume of cylinder is\n= %f", radius*radius* pi*height);
    return 0;
}
