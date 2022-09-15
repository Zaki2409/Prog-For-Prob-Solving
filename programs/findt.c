#include <stdio.h>
float myFunction();
float main()
{

    printf("GIVEN :\n the height of the buliding is 30 m.\n the accelearation die to gravity is 9.8m/s^2.\n the initial velocity is 0\n");
    printf("the time taken for the ball droped from the building is : ");

    myFunction();
    return 0;
}
float myFunction()
{
    float s = 30.0;
    float u = 0.0;
    float a = 9.8;
    float t;

    t = sqrt((2 * s) / a);
    printf("%f", t);
}