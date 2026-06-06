#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//cd "/Users/sanulanawarathna/Documents/C Project"
//./Intro

/*
Basic Types 
- Int
- Float 
- Char 
- Char * (String)
- Void

Format Specifiers 
- %d Digit
- %c Char 
- %f Float
- %s String

- Change value by removing the type declaration
- Add const to the stats to make it imutable

- x++ -> x+1

*/

int main() {
  
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int freq = 0;
    double total = 0.0; 

    printf("begin");
    printf("Compound interest calculator\n");
    printf("Enter the rate: ");
    scanf("%lf", &rate);
    printf("Enter the principal: ");
    scanf("%lf", &principal);
    printf("Enter the compounding frequency: ");
    scanf("%d", &freq);
    printf("Enter the number of years: ");
    scanf("%d", &years);

    total = principal * pow(1 + rate / freq, years * freq);
    printf("The total paid is %.2lf\n", total);
    return 0;
}
