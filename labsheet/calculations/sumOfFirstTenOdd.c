#include<stdio.h>


int main() {
    int sum=0,counter,i =1;
        
     for(i; i<20; i++) {
         int rem = i % 2;
         if( rem != 0){
             sum += i;
         }
     }
     
    printf("The sum of first ten odd Number is %d", sum);
}
