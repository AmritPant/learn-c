#include<stdio.h>


void main () {

  //  Declared the function for Clearing the screen 
  // I used this instead to of clrscr() to be platform independent; No Intention to use Docker for this small project
  // conio.h doesn't works on linux :(
  void clearScreen() {
   printf("\e[1;1H\e[2J");
  }
  clearScreen();


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

  //  Taking Inputs
  char customerName[31]; 
  printf("Please Enter the Customer Name:  ");
  scanf("%s", customerName);


  // Finding How many itmes a person has ordered and looping overit 
  int numberOfItems; 
  printf("Please Enter the Number of Items:  ");
  scanf("%d", &numberOfItems);

  //  Declaring Variables For required Data
  char productName[20];
  int productQuantity;
  float productPrice;

  int i = 0; 
    while(i < numberOfItems) {
    printf(" \n");
    printf(" \n");
  
    // Name
    printf("Please Enter the Product Name:  ");
    scanf("%s", productName);

    // Price
    printf("Please Enter the Price of the Product: ");
    scanf("%f", &productPrice);

    // Quantity
    printf("Please Enter the Quantity of the Product: ");
    scanf("%d", &productQuantity);

    i++;
    }
    printf(" \n");
    printf(" \n");
    printf("%s,%ls", productName, &productQuantity);
    
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
