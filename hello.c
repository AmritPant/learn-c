#include<stdio.h>
#include<time.h>
#include<string.h>


void main () {

  //  Declared the function for Clearing the screen 
  // I used this instead to of clrscr() to be platform independent; No Intention to use Docker for this small project
  // conio.h doesn't works on linux :(
  void clearScreen() {
   printf("\e[1;1H\e[2J");
  }
  clearScreen();

  // These are the secret passwords which will help to figure out which employee generated the invoice
  int passwords[4];
  passwords[1] = 1201;
  passwords[2] = 5623;
  passwords[3] = 2312;
  passwords[4] = 2341;



  // Function For Generating the Heading
  // Parameter: null
  // Returns: null
  // Work: Prints the Heading
  void generateHeading() {
  // HEADING ....................
  printf("=========================================================================== \n");
  printf("===================== PANT RESTURANT BILLING SYSTEM ======================= \n");
  printf("=========================================================================== \n");
  }
  generateHeading();


  // Function For Generating the Sub Heading
  // Parameter: name -> Sub Heading Name
  // Returns: null
  // Work: Prints the Sub Heading
 
 void generateSubHeading(char headingName[]) {
    // SUB HEADING
    printf(" \n");
    printf(" \n");
    printf("--------------------------- %s -----------------------------------", headingName);
    printf(" \n");
    printf(" \n");
    
  }



  // Taking Input 
  printf( "                                                                         \n");
  printf( "---------------------------------------------------------------------------\n");
  printf("What is today's job ? \n");
  printf("1) Generate New Invoice \n");
  printf("2) Search Invoices \n");
  printf("3) Edit Invoice \n");
  printf("4) Exit \n");


  //  Declaring variables
  int job;   // job variable hold the value of which job is currently happening
  printf( "                                                                         \n");
  printf( "                                                                         \n");
  printf("Please Enter Desired Number From Above List: ");
  scanf("%d", &job);

  //  Declaring the if else Statement for the Different Jobs 
  if (job == 1) {
  //  When User Wants to Generate New Invoice

  //  Making Default Screen
  clearScreen();
  generateHeading();
  char subHeadingName[] = "New Invoice";
  generateSubHeading(subHeadingName);


void createNewInvoice() {
  //  Taking Inputs
  char customerName[100]; 
  printf("Please Enter the Customer Name:  ");
  scanf("%s", customerName);


  // Finding How many itmes a person has ordered and looping overit 
  int numberOfItems; 
  printf("Please Enter the Number of Items:  ");
  scanf("%d", &numberOfItems);

  //  Declaring Variables For required Data
  char productName[100][numberOfItems];
  int productQuantity[numberOfItems];
  float productPrice[numberOfItems];

  int i = 0; 
    while(i < numberOfItems) {
    printf(" \n");
    printf(" \n");
  
    // Name
    printf("Please Enter the Product Name:  ");
    scanf("%s", productName[i]);

    // Price
    printf("Please Enter the Price of the Product: ");
    scanf("%f", &productPrice[i]);

    // Quantity
    printf("Please Enter the Quantity of the Product: ");
    scanf("%d", &productQuantity[i]);

    printf(" \n"); 
    i++;
    }

    // // Check Passwords for the validity of the employee
    // int curPass;
    // printf("Please Enter Your Password:  ");
    // scanf("%d", &curPass);

    // // Checking if the enterted passwords are correct or not
    // for(int i = 0; i < 4; i++) {   // 4 is because the maximum number of user/passords can only be 4
    //   if(passwords[i] == curPass)  
    //   printf("cur: %d, saved: %d", curPass , passwords[i]) ;

    //   printf("cur: %d, saved: %d", curPass , passwords[i]) ; 
    // }

      //  Now Preparing the bill
    // Clearing the whole Screen
    clearScreen();
    generateHeading();

    printf("  \n");
    printf("  \n");
    printf("  \n");

    printf("                                 PANT RESTURANT PVT.LTD                                \n");
    printf("                              - - - - - - - - - - - - - -                              \n");

  time_t billTime;
  time(&billTime);
  printf("\n");
  printf(" Date: %s ", ctime(&billTime));
  printf("Invoice to: %s \n", customerName);

  printf(" ------------------------------------------------------------------------- \n");
  printf(" Items                           Price               Quantity    Total     \n");
  printf(" ------------------------------------------------------------------------- \n");
  
  float netTotal  = 0;

  for(int i =0; i < numberOfItems; i++) {
      float total = productPrice[i] * productQuantity[i];


      printf(" %s \t\t\t %f \t \t %d \t %f \n", productName[i], productPrice[i], productQuantity[i], total);
      netTotal = netTotal + total;
    } 
 
  printf(" ------------------------------------------------------------------------- \n");
  printf(" Net Total                                                    %f \n", netTotal );
  printf(" ------------------------------------------------------------------------- \n");
  float vat = netTotal * 0.13; // 13 percent of vat
  printf(" VAT @13                                                          %f \n", vat );
  float grandTotal = netTotal + vat;
  printf(" ------------------------------------------------------------------------- \n");
  printf(" Grand Total                                                    %f \n", grandTotal );

  printf("\n");
  printf("\n");
  printf("\n");
 

}  
    createNewInvoice();
 char saveOrNot;
 printf("Do you want to save above Invoice (y/n) ? ");
 scanf("%c", &saveOrNot); 



  } else if ( job==2) {

  }  else if (job == 3) {

  } else {
    printf( "                                                                         \n");
    printf( "                                                                         \n");
    printf( "                                                                         \n");
    printf( "                                                                         \n");

    printf( "---------------------------------------------------------------------------\n");
    printf( "-------------------------- Thanks for visiting ----------------------------\n");
    printf( "---------------------------------------------------------------------------\n");

  }

}
