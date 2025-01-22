#include <stdio.h>
int even(int n){
    if (n % 2 == 0){
        printf("%d is even\n", n);
    }
    else{
        printf("%d is odd\n", n);
    }
}

void main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    even(n);
}