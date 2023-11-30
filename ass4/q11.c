// menu driven program which consite of function like 
// 1. factorial of no
// 2. odd or even 
// 3. exit

#include<stdio.h>

int checkFactorial(int num){
    if(num == 0){
        return 1;
    }
    return num * checkFactorial(num - 1);
}

int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int option, num;

    do {
        printf("1 -- factorial of a no\n");
        printf("2 -- check odd or even\n");
        printf("3 -- exit\n");

        printf("What is your choice : ");
        scanf("%d", &option);

        if(option == 1){
            printf("Enter no for factorial operation : ");
            scanf("%d", &num);
            int fact = checkFactorial(num);
            printf("Factorial : %d\n", fact);
        } else if (option == 2) {
            printf("Enter no for odd/even check : ");
            scanf("%d", &num);
            if (isEven(num) == 1) {
                printf("Even No\n");
            } else {
                printf("Odd No\n");
            }
        } else if (option != 3) {
            printf("Wrong input: %d\n", option);
        }

    } while (option != 3);

    return 0;
}
