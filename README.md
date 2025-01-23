# Completed C Programs

This directory contains completed C programs for various tasks. Each program is designed to demonstrate specific concepts and functionalities in C programming.

## Programs Example:

### even_odd.c

This program checks whether a given number is even or odd.

#### Usage

1. Compile the program using a C compiler.
   ```sh
   gcc even_odd.c -o even_odd
   ```
2. Run the compiled executable.
   ```sh
   ./even_odd
   ```
3. Enter a number when prompted. The program will output whether the number is even or odd.

#### Code Overview

- The `even` function takes an integer as input and prints whether it is even or odd.
- The `main` function prompts the user to enter a number, reads the input, and calls the `even` function.

```c
#include <stdio.h>

int even(int n) {
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}

void main() {
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    even(n);
}
```

## License

This project is licensed under the MIT License.
