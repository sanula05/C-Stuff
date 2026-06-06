#include <stdio.h>
#include <stdbool.h>

//cd "/Users/sanulanawarathna/Documents/C Project"
//./Intro

/*
Basic Types 
- Int
- Float 
- Char 
- Char * (String)

Format Specifiers 
- %d Digit
- %c Char 
- %f Float
- %s String

- Change value by removing the type declaration
- Add const to the stats to make it imutable
*/
int main(void) {

int age = 25;
int year = 2025 ;
int quantity = 40;

float gpa = 2.5;
float price = 10.20;

char name[] = "Ml";

bool isOnline = true;

if(isOnline){
    printf("you are online");

}
else{
    printf("you are not online");
}

}
