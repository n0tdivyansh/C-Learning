#include <stdio.h>

void printnumtowrd(int n);
void printbelow100(int n);

int main() {
 int number;

 printf("enter a number: ");
 scanf("%d", &number);

 if (number < 0 || number > 9999)
 {
  printf("enter a valid number (0-9999): ");
  return 1;

 }

if (number == 0)
{
  printf("The number is: Zero");
}
 else
 {
  printnumtowrd(number);
 }
 
 
  return 0;
}


void printbelow100(int n) 
{
  char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

  if (n >= 10 && n <= 19) {
    printf("%s ", teens[n - 10]);
  } else {
    if (n / 10 > 1) { 
    printf("%s ", tens[ n / 10]);
   }
  if (n % 10 > 0) {
    printf("%s ", ones[n % 10]);
   }
 }
}

void printnumtowrd(int n) {
  char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  if (n >= 1000) {
    printf("%s thousands ", ones[n / 1000]);
    n %= 1000;
  }

  if (n >= 100) {
        printf("%s hundred ", ones[n / 100]);
        n %= 100;   
    }
    if (n > 0) {
        printbelow100(n);
    }
}