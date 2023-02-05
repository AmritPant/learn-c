# include <stdio.h>

int main() {
    int p,t,r;

    // Principle
    printf("Please Enter Principle:  ");
    scanf("%d", &p);

    // Rate
    printf("Please Enter Rate:  ");
    scanf("%d", &r);

    // time
    printf("Please Enter Time:  ");
    scanf("%d", &t);


    float si = (p * t * r ) /100;

    // Simple Interest
    printf("Your Simple Interest is %f", si);


    return 0;
}
