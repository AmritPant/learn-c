#include<stdio.h>
#include<string.h>

int main() {

printf("\e[1;1H\e[2J");

  printf("============================================================================================ \n");
  printf("=========================== WELCOME TO CHEMISTRY QUIZ ====================================== \n");
  printf("============================================================================================ \n");
  
  char questions[300][100] = {{"Which of the following is not the atomic properties"}};
  char options[300][4][200] = {{"Electron Gain Enthalypy", "Ionization Potential", "Vander Wall's Radii", "Ionization Gain Enthalypy"}};
  int answers[300][1] = {{4}, {3}};


  char decision[1];

 printf("\n");
 printf("\n");
 printf("Do you want to get into the quiz section (y/n):  ");
 scanf("%s", decision);

 // char upperCaseDecision[1] =  strupr(decision);
 int decisionResult = strcmp(decision, "y");
 
 if(decisionResult != 0) return 0;

 printf("%s ", questions[1]);

    // for(int j=0; j<4; j++) {             
    //         if(j == 2) printf(" \n");
    //         printf(" %s \t \t", options[1][j]);
            




  return 0;
}



