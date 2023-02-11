#include<stdio.h>

int main(){
    int nh,nv;

    printf("Please Enter the number of rows and columns: ");
    scanf("%d,%d", &nh,&nv);
    
    int arr1[nh][nv];
    int arr2[nh][nv];
    int added[nh][nv];

    printf("\n Please Enter the Elements of First Matrix \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("Element of First array a[%d][%d]",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n Please Enter the Elements of Second Matrix \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("Element of First array a[%d][%d]",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Addition
    for(int i=0; i<nh; i++) {
        for(int j=0; j<nv; j++){
           added[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Print the Added Matrix 
    printf("\n Your Added Array is:  \n");
    for(int i=0; i<nh; i++){
        for(int j=0; j<nv; j++){
            printf("%d   ", added[i][j]);
        }
        printf("\n");
    }

    
   return 0; 
}
