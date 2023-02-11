#include<stdio.h>

int main () {
    int nh,nv;  // numberHorizontal and Number Vertical
    
    printf("Please Provide the number of rows and columns respectively: ");
    scanf("%d,%d",&nh,&nv);
    
    int arr[nh][nv];
    int sum=0;
    int n = nv*nh;

    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("Please Enter the Element of a[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            sum += arr[i][j];
        }
    }


    float avg = sum/n;
    printf("The sum of Matrix is %d \n", sum);
    printf("The average of Matrix is %f", avg);

}
