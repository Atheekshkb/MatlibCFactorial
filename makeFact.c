#include <stdio.h>
#include <stdbool.h>

unsigned long long int factCalc(int num){
    int i =0;
    unsigned long long int temp = 1;
    for(i = 1; i <= num; i++){
        temp = temp * i;
    }
    return temp;
}

int main(void){
    int num =0, i=0;
    printf("Please enter the number you would like to find the factorial of: \n");
    scanf("%d", &num);
    printf(" num |factorial\n");
    for(i = 1; i <= num; i++){
        unsigned long long int temp = factCalc(i);
        printf("%4d |   %10llu\n", i, temp);
    }
    return 0;
}