#include <stdio.h>


// Function to calculate the number of bills needed
void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollar_amount / 20;  //number of 20s
    dollar_amount %= 20;             //remainder after 20s
    *tens = dollar_amount / 10;      //number after 10s
    dollar_amount %= 10;             //remainder after 10s
    *fives = dollar_amount / 5;       //number of 5s
    dollar_amount %= 5;              //remainder of 5s
    *ones = dollar_amount;           //ones left
}

int main() {
    int dollar_amount, twenties, tens, fives, ones;
    //user input
    printf("Enter dollar amount to pay: ");
    if(scanf("%d", &dollar_amount) != 1 || dollar_amount < 0){
      printf("Invalid input");
      return 1;
    }
    

    //number of bills needed
    calc_bills(dollar_amount, &twenties, &tens, &fives, &ones); //& to us the address of the variables

    //print statement
    printf("You need:\n");
    printf("$20 dollar bills: %d\n", twenties);
    printf("$10 dollar bills: %d\n", tens);
    printf("$5 dollar bills: %d\n", fives);
    printf("$1 dollar bills: %d\n", ones);

    return 0;
}
