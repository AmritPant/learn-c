#include<stdio.h>

int main() {

int mode;
printf("Please the mode of sorting Acceding or Decending (1/2): ");
scanf("%d", &mode);

int nh, nv; 
printf("Please enter the number of rows and colums in the matrix respectively:  ");
scanf("%d, %d", &nh, &nv);

int arr[nh][nv];

for(int i=0; i<nh; i++){
   for(int j=0; j<nv; j++)  {
    printf("Please Enter the position of Element in Arr[%d][%d]: ", i, j);
    scanf("%d", &arr[i][j]);
  }
}

printf("Your Given Matrix: \n");
for(int i=0; i<nh; i++){
   for(int j=0; j<nv; j++)  {
    printf("%d \t", arr[i][j]);
  }
  printf("\n");
}



for(int i =0; i<nh; i++) {
  for(int j=0; j<nv; j++ ){ 
   for(int k=j+1; k<nv; k++) {
     if(mode == 1) {
        if(arr[i][j] > arr[i][k]){
         int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
      } else if(mode == 2) {
        if(arr[i][j] < arr[i][k]){
         int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
      }

    }
   }
  }
 }


printf("\n");


printf("Sorted Matrix: \n");
for(int i=0; i<nh; i++){
   for(int j=0; j<nv; j++)  {
    printf("%d \t", arr[i][j]);
  }
  printf("\n");
}
 
}
