// #include <stdio.h>
//
// // Learning array
// int main() {
//     int arr[5];
//
//    for(int i =0; i < 5; i++){
//         char suffix[2] = "st";
//     
//         if (i == 0) {
//             suffix[1] ="s";
//             suffix[2] ="t";            
//         }
//         if (i == 1) suffix[1] = "nd";
//         if (i == 2) suffix[] = "rd";
//         if (i >= 3) suffix[] = "th";
//
//         printf("Please Enter the %d %s", i,suffix);
//         scanf("%d", &arr[i]);
//     }
//
// int j =0;
//    while(j < 5)  {
//         printf("The Number are %d \n", arr[j]);
//         j++;
//     }
//
// return 0;
//
// }




#include <stdio.h>


int main(){
// find armstrong number between 0,1000

int arr[1000];    // Armstrong Numbers

 for(int i =0; i <= 1000; i++){

  int digits[4]; 
  int number=i;
  int j =0;
  int k =0;
  int cubicSum;

  while(number != 0){
   int rem = number % 10;      
   digits[j] = rem;
   cubicSum = cubicSum + (rem*rem*rem);
   number = number/10;
   j++;
}
  
    
    if(cubicSum == i){
    printf("%d is Armstrong Number \n" , i );
    printf("\n");
        }
    cubicSum = 0;
}
 return 0;
}




