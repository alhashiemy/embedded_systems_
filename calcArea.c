#include <stdio.h>

float calcArea(float x);

int main()
{
    float rad;
    printf("Enter the radius of the circle:\t");
    scanf("%f",&rad);
    printf("area of this circle is:%f\n",calcArea(rad));

    return(0);
}

float calcArea(float x)
{
    float area = 3.14*x*x;
    return (area);

}
