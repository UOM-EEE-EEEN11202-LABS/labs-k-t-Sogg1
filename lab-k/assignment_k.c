#include <stdio.h>
#include <math.h>

int main(void) {
  double height = 0;
  printf("Enter height: ");
  scanf("%lf", &height);

  // Your code in this section

  // Declare Variables
  char email[] = "abdulradhi.eddiesuhardi@student.manchester.ac.uk";
  double volume = 0.0;

  //
  if (height < 0) {
    printf("Error");
    return 1; // Exit with an error code
  }

  // Set Variables
  volume = height * M_PI * pow(2.2, 2);

  // Do not edit below here
  printf("%s\n", email);
  printf("Volume: %.2f\n", volume);
  return 0;
}