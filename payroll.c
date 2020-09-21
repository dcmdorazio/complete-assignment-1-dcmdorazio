#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Main function
int main(int argc, char *argv[]){

// Arguments for command line.
  char* lastname = argv[1]; // Last Name
  char* firstname = argv[2]; // First Name
  double minutesWorked = atof(argv[3]);
  double hourlyRate = atof(argv[4]);


// Calculations for hours and the total payment
  double hoursWorked = minutesWorked/60;
  double totalPayment = hourlyRate * hoursWorked;
  
  // Prints out the persons name along with the total payment for that person
  printf("%s %s: %.2f\n", firstname, lastname, totalPayment);
  // Expected output -> First Name, Last Name: Total Payment

}

// EOF