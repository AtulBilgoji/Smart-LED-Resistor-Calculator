#include<stdio.h>
int main()
{
    float Vs,Vf ,I;
    float R;

    printf("Enter the supply voltage(Vs): ");
    scanf("%f",&Vs);
    printf("\nEnter the LED forward voltage(Vf): ");
    scanf("%f",&Vf);
    printf("\nEnter the LED current in Amperes (A): ");
    scanf("%f",&I);

    if(I <= 0)
    {
        printf("Current cannot be zero.");
    }
    else if(Vf > Vs)
    {
        printf("\nInsufficient supply voltage.");
    }
    else
    {
        R = (Vs - Vf) /I;
    
    printf("\nTotal Resistance R = %.2f Ohms", R);

    }

    return 0;
}