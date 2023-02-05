// Pattern Example
// N A S T
// N A S
// N A
// N

#include<stdio.h>
#include<string.h>

int main() {  

    char s[5] = "NAST";
    strrve(s);

    for(int i=5; i>=1; i--){
     for(int j=1; j <=i; j++){
        printf("%c \t", s[i-1]);       
    }
        printf("\n");
   }
    
    return 0;
}
