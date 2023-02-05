// 1,3,5,7,9,11


#include<stdio.h>

int main () {

int n,count=1;

// Taking the Input
printf("Please enter the number of elements in series: ");
scanf("%d", &n);

// Printing the first Value
printf("1,");

// Printing Other Values Dynamically
for(int i=1; i<n; i++) {
    count +=2;
    printf("%d,", count);
}

}

