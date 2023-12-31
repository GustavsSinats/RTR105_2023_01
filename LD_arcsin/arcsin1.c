#include <stdio.h>
#include <math.h>
void main()
{
    double x = 0.58, y, a0, a1, a2, a3, S0, S1, S2, S3;
    y = asin(x);
    printf("y=asin(%.2f)=%.2f\n", x, y);

    a0 = (1.) * pow(x, 2 * 0 + 1) / (pow(4, 0) * pow(1, 2) * (2 * 0 + 1));
    S0 = a0;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a0, S0);

    a1 = (1. * 1 * 2) * pow(x, 2 * 1 + 1) / (pow(4, 1) * pow(1, 2) * (2 * 1 + 1));
    S1 = a0 + a1;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a1, S1);

    a2 = (1. * 1 * 2 * 3 * 4) * pow(x, 2 * 2 + 1) / (pow(4, 2) * pow(1 * 2, 2) * (2 * 2 + 1));
    S2 = a0 + a1 + a2;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a2, S2);

    a3 = (1. * 1 * 2 * 3 * 4 * 5 * 6) * pow(x, 2 * 3 + 1) / (pow(4, 3) * pow(1 * 2 * 3 * 4, 2) * (2 * 3 + 1));
    S3 = a0 + a1 + a2 + a3;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a3, S3);
}
