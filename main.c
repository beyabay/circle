#include <stdio.h>
#include <stdlib.h>

//program to calculate an area of a circle

int main()
{
    float r, area;
    printf("Enter Radius:\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area=%f",area);

    return 0;

}

/**
simplified answer using cs50 library 

int main()
{
    float r = get_float("Enter Radius\n");
    float area = 3.14*r*r;
    printf("area =%f",area);
}
**/
