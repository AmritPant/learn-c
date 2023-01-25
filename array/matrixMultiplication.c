#include<stdio.h>

int main(){
    
    ///////////////////////////////////////////////////////////////////////////
    // Taking the number of rows and columns
    int nh,nv;
    printf("Please enter the number of rows and colums:  \n");
    scanf("%d,%d", &nh, &nv);

    ///////////////////////////////////////////////////////////////////////////
    // Inputing the two different matrix 
    int arr1[nh][nv];
    int arr2[nh][nv];
    
    // 1st Array
   printf("\n");
   printf("-----------------------------------------------------------------------");
   printf("Please Enter the elements of first Array: \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
          printf("Please Enter the element of Matrix[%d][%d]", i , j);
          scanf("%d", &arr1[i][j]);
        }
    }

   // 2nd Array
   printf("\n");
   printf("-----------------------------------------------------------------------");
   printf("Please Enter the elements of Second Array: \n");
   for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("Please Enter the element of Matrx[%d][%d]", i,j);
            scanf("%d", &arr2[i][j]);
        }
    }

    ///////////////////////////////////////////////////////////////////////////
    // Multipying two arrays
    int mArr[nh][nv]; 
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){   // i =0; j=1;
            mArr[i][j] = arr1[i][j] * arr2[j][i] + arr1[i][j+1]*arr2[j+1][i];
        }
    }




}



/*

   2   4        *     1  8
   3   1              2  3 

   [2*1 + 4*2  2*8+4*3]
   [3*1 + 1*2  3*8+1*3]
    
* */
