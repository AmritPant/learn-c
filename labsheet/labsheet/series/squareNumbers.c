// 1,4,9,16,25;


#include<stdio.h>

int main() {
    int n;

    // Taking Input
    printf("Please input the number of elements: ");
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        printf("%d,", i*i);
    }

    return 0;
}
