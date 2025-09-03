/*
Student Name: Jesus Gonzalez
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

// create enums for the flavors
enum flavors {vanilla, chocolate, mint, strawberry};

int main(void) {
  double corner1Sales[4] = { 11.5, 15.75, 22, 7.25 };   // Bob's Saturday Sales
  double corner2Sales[4] = { 12.75, 9.25, 16.5, 21 };   // Bob's Sunday Sales
  double totalSales[4];
  double bobTotal = 0.0;
  enum flavors flavor;
  const char *flavorNames[] = { "Vanilla", "Chocolate", "Mint", "Strawberry" };

//Create a program that allows a user to enter the type of ice cream sold

//Create a program that allows a user to enter the sales data.

// user enter sales for corner 1
printf("Enter sales for Corner 1:\n");
  for (flavor = vanilla; flavor <= strawberry; flavor++) {
    printf("How much %s was sold at Corner 1? $", flavorNames[flavor]);
    scanf("%lf", &corner1Sales[flavor]);
  }

// user enter sales for corner 2
printf("\nEnter sales for Corner 2:\n");
  for (flavor = vanilla; flavor <= strawberry; flavor++) {
    printf("How much %s was sold at Corner 2? $", flavorNames[flavor]);
    scanf("%lf", &corner2Sales[flavor]);
  }

//Load two one-dimensional arrays with Bob’s entered sales data. Only index your arrays using an enum variable (enum flavors index = vanilla; corner1Sales[index] = 11.5;)
double corner1Sales[4] = {11.5, 15.75, 22.0, 7.25};
double corner2Sales[4]   = {12.75, 9.25, 16.5, 21.0};
//Sum the contents of the flavors in the arrays together.
for (flavor = vanilla; flavor <= strawberry; flavor++) {
  totalSales[flavor] = corner1Sales[flavor] + corner2Sales[flavor];
  bobTotal += totalSales[flavor];
}

//Print out the resulting flavors and their sum with Bob's total sales.


return 0;
}
