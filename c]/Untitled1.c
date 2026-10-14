#include <stdio.h>
int main()
{
    // int, float,

    int a = 4;
    int c = 5;
    float b = 40.87;
    float sum;

    int sum1 = a + c;
    // \n --> for add one line
    // \t --> for tab --> for 4 space

    sum = a + b;
    // %d for integer value
    // %f for float value
    printf("%f \n", sum);
    printf("%d \n", sum1);

    printf("the float value of %d and %f is : %f",a,b,sum );



    return 0;
}
