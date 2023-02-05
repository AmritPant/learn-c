#include<stdio.h>
#include<math.h>

int main() {

    float p,r,t;

    // Principle
    printf("Please Enter the principle: ");
    scanf("%f", &p);

    // Rate
    printf("Please Enter the Rate: ");
    scanf("%f", &r);

    // Time
    printf("Please Enter the time: ");
    scanf("%f", &t);
    
    // ci
    float compoundInterest = p * pow((1 + r / 100), t) - p;
    printf("Your Compound Interest is %f", compoundInterest);

    return 0;
}
