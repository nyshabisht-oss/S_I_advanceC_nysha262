#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T, SI, CI, A;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest : ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

   
    SI = (P * R * T) / 100;
    A = P * pow((1 + R / 100), T);
    CI = A - P;

    
    printf("\nSimple Interest = %f", SI);
    printf("\nCompound Interest = %f", CI);
    printf("\nTotal Amount after Compound Interest = %f", A);

    return 0;
}