#include<stdio.h>
#include<string.h>

int main() {
  // For Clearing the screen
  // Using Regular Expression Because the clrscr() doesn't work on linux;
   printf("\e[1;1H\e[2J");


  int whichCode;
  printf("Which Code Do you want to check (1/2) ? ");
  printf(" \n");
  printf("1. Prime or Composite? \n");
  printf("2. SWAP Values ");

  printf(" \n");
  printf("Value (1/2) : " );
  scanf("%d", &whichCode);



  // Find Prime and Composite 
  if(whichCode == 1){
    printf("\e[1;1H\e[2J");
  int n;
    
  printf("Please Enter a Number:  ");
    scanf("%d", &n);

    int intVal;
    float floatVal; 

    for(int i = 2; i < n; i++){
      intVal = n/i;  // 2 
      floatVal = n/i; // 2.5


      printf("%d, %f", intVal, floatVal);

      if(intVal != floatVal) {
        printf("Prime Number");
        break;
      } else  if (intVal == floatVal){
        printf("Composite Number");
        break;
      }
  }
  }

  //  int count = 0;
  //  aafu ra 1 bhayek jole pani divide garyo point maa aaune, 2 , 3, 5, 7, 11, 13,17,19,23
  // for(int i =2; i < n; i ++) {
  //   if(n % i == 0 ) {
  //     count = 1;
  //     break;
  //   } else {
  //     count = 0;
  //   }
  // }

  // if (count == 0) {
  //   printf("Prime");
  // } else if (count == 1){
  //   printf("Composite");
  // }
   
  //  }



  return 0;
}