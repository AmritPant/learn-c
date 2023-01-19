#include <stdio.h>


int main() {

    int nh,nv;
    printf("Please Enter the number of rows and column in the matrix: ");
    scanf("%d,%d", &nh,&nv); 
    // TO ADD TWO ARR , THEY SHOULD HAVE SAME ORDER MEANS THE NUMBER OF COLUMN AND ROW IN ARR 1 should equal to 
    // nuber of row and column in arr 2

    

    int a[nh][nv], b[nh][nv];

// TAKE VALUE FROM USER
    printf("\n");
    printf("First Matrix \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nh; j++) {
            printf("Please Enter the element in a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }

   printf("\n");
   printf("Second Matrix \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nh; j++) {
            printf("Please Enter the element in b[%d][%d]: ", i,j);
            scanf("%d", &b[i][j]);
            printf("\n");
        }
    }



   printf("\n");
// PRINT THE GIVEN MATRIX
    printf("Your Given Matrixes \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nh; j++) {
            printf("%d \t", a[i][j]);
        }
        printf("  \t\t\t  ");
        for(int j=0; j<nh; j++){
          printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

// ADD TWO MATRIX
 int sum[nh][nv];

  for(int i=0; i<nh; i++){
        for(int j =0; j<nv; j++ ){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }


   printf("\n");
// PRINT THE OUTPUT MATRIX
    printf("Your Output Matrix \n");
for(int i=0; i<nh; i++){
 for(int j=0; j<nv; j++){
     printf("%d \t", sum[i][j]);
    }
   printf("\n");
}
}

