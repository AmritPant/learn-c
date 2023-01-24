#include <stdio.h>

int main() {

    int nh,nv; // nh -> NumberHorizontal, Number Vertical 
    printf("Please Enter the rows and columns: ");
    scanf("%d, %d", &nh, &nv);


    int arr[nh][nv];
    
    ////////////////////////////////////////////////////////////////////////////////////
    // Taking input from user
    printf("Please Enter the Values of Matrix:  \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
           printf("Please Enter the element of Matrix[%d][%d]: " , i, j);
           scanf("%d", &arr[i][j]);
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////
    /// Transposing Arr 
    int transArr[nh][nv];   //  Transposed Arr
    for(int i=0; i<nh; i++){
        for(int j =0; j<nv; j++){
            transArr[i][j] = arr[j][i];
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////
    /// Printing the orignal Arr and Tranposed Arr
    printf("Your Orignal Matrix Was: \n");

    for(int i=0; i<nh; i++) {
     for(int j =0; j<nv; j++){
            printf("%d  \t", arr[i][j]);
        }
        printf(" \n");
    }

        printf(" \n");
        printf(" \n");
    printf("Your Modified Matrix Is: \n");
    for(int i=0; i<nh; i++){
        for(int j =0; j<nv; j++){
            printf("%d \t", transArr[i][j]);
        }
        printf(" \n");
    }
        printf(" \n");
        printf(" \n");


  return 0;

}
