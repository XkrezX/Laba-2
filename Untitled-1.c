#include <stdio.h>
#include <math.h>

int main() {
    float x_MIN,x_MAX,dx,a=5,b=7;
    float e = (float) m_E;

    printf("Input xmin: ");
    if (scanf("%f", &x_MIN) != 1)
    {
        printf("Its not a float!\n");
        return 1;
    }
    printf("Input xmax: ");
    if (scanf("%f", &x_MAX) != 1)
    {
        printf("Its not a float!\n");
        return 1;
    }
    if (x_MAX < x_MIN) 
    {
        printf("xmax cannot be less than xmin !\n");
        return 1;
    }
    printf("Input dx: ");
    if (scanf("%f", &dx) != 1)
    {
        printf("Its not a float!");
        return 1;
    }
    float x = x_MIN;
    while(x <= x_MAX){
    float act1 = cos(pow(e,3*x)-a);
    float act2 = pow(a,2)+b;
    float act3 = a/pow(x,2);
    float unit_act = (act1/act2)+act3;
    if (isnan(unit_act)){
        continue;
    }
    else 
    {
    printf("Result: %f \n",unit_act);
    }
    x+=dx;
    }
    return 0;
    }