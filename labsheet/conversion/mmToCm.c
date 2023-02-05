#include<stdio.h>

int main() {

    int mode;
    int n;

    printf("Please Select Appropriate Mode \n");
    printf("1. CM TO MM \n");
    printf("2. MM TO CM \n");
    
    printf("Your Option: ");
    scanf("%d", &mode);


    if(mode == 1) {
        printf("Please Enter the cm value");
        scanf("%d", &n);
        int mm = n*10;
        printf("Your Answer from %dcm is %dmm ", n,mm );
    } else if (mode == 2) {
        printf("Please Enter the mm value");
        scanf("%d", &n);
        int cm = n/10;
        printf("Your Answer from %dmm is %dcm ", n,cm ); 
    }


    return 0;
}                                                                                                                                                                                                                                                                          
