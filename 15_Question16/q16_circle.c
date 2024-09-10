#include<stdio.h>
// calculate area and circumfarence of circle.

float circleCompute(float radius, float *circleArea, float *circleCircumference){
     *circleArea = 3.141 * radius * radius;
     *circleCircumference = 2 * 3.141 * radius;

}

int main(){
    float radius, circleArea, circleCircumference;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    circleCompute(radius, &circleArea, &circleCircumference);
    printf("Area of circle is : %.2f \n",circleArea);
    printf("Area of circumfarence is : %.2f ",circleCircumference);
}