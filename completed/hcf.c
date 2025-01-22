#include <stdio.h>
int hcf(int num1, int num2){
    int hcf;
    for(int i = 1; i <= num1 || i <= num2; i++) {
    if(num1 % i == 0 && num2 % i == 0) {
        hcf = i;
    }
    }
    printf("HCF: %d\n", hcf);
}

int main(){
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    hcf(num1,num2);
}