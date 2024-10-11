/*
  Name: shapeCalc.c
  Author: Courtney Scrimshaw
  Function: calculate the area of a rectangle, triangle, or circle
  Compilation: gcc -std=c99 -o shapeCalc shapeCalc.c
  Execution: ./shapeCalc
*/

#include <stdio.h>
#include <math.h>

int main() {
  float length, width, base, height, radius, area;

  while (1) {
    printf("Select Option:\n");
    printf("1. Calculate rectangle\n");
    printf("2. Calculate triangle\n");
    printf("3. Calculate circle\n");
    printf("0. exit\n");

    printf("Enter the number of your choice:\n");
    int choice;
    scanf("%d", &choice);

    if (choice <0 || choice >3) {
      printf("Invalid choice. Please enter a valid option\n");
      continue;

    }

    if (choice == 0) {
      printf("Exiting the program.. goodbye!\n");
      break;

    }

    switch (choice) {
      case 1:
        printf("Enter the length of the rectangle:\n");
        scanf("%f" , &length);
        printf("Enter the width of the rectangle:\n");
        scanf("%f" , &width);
        area = length * width;
        break;

      case 2:
        printf("Enter the base of the triangle:\n");
        scanf("%f" , &base);
        printf("Enter the height of the triangle:\n");
        scanf("%f" , &height);
        area = base * height * 0.5;
        break;

      case 3:
        printf("Enter the radius of the circle:\n");
        scanf("%f" , &radius);
        area = M_PI * radius * radius;
        break;
      
    }

    printf("The area is: %.2f unit squared\n" , area);

  }

  return 0;

}