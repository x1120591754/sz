#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int index=512;
    float pi = 3.1415;
    float outV;
    for (int Fori = 0; Fori != index; Fori++)
    {
       outV = (sin(2*pi/index*Fori)*3300+3300)/2;
       printf("%lf\t",outV);
       if(!((Fori+1)%8))
       printf("\r\n");
    }
    return 0;
}
