#include<stdio.h>

int main() {

    int nh,nv;
    printf("Please Enter the number of rows and colums respectively: ");
    scanf("%d,%d", &nh,&nv);

    int arr[nh][nv];
    int temp[nh][nv];


    //  Taking Values from user
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("Please Enter the element of A[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the original array
    printf("\n Your Original Matrix is: \n");
    for(int i =0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }

    // Tranposing the Array
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            temp[j][i] = arr[i][j];
        }
    }

    printf("\n Your Transposed Array is: \n");
    // Printing the Transposed Array
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("%d   ", temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
