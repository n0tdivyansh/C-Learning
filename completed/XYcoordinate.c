#include <stdio.h>

int main() {
 
 float x, y;

 printf("Enter X: ");
 scanf("%f", &x);

 printf("Enter Y: ");
 scanf("%f", &y);

 if (x > 0 && y > 0)
 {
    printf("The point lies in the 1st Quadrant");
 
 }
 else if (x < 0 && y > 0)
 {
    printf("The point lies in the 2nd Quadrant");

 }
 
 else if (x < 0 && y < 0)
 {
    printf("The point lies in the 3rd Quadrant");
 }

 else if (x > 0 && y < 0)
 {
    printf("The point lies in the 4th Quadrant");
 }
 
 else if (x == 0) 
 {
        printf("The point lies on the Y-axis.");
 } 
 
 else if (y == 0) 
 {
        printf("The point lies on the X-axis.");
 }
 else
 {
    printf("The point is on Origin");
 }
 

 
 
  return 0;
}
