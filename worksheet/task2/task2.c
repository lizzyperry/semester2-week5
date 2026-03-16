/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Elizabeth Perry
 * ID: 201952237
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int value;
	
	printf("Enter a hexadecimal:");

	for(int i = 0; hex[i] != '\0'; i++){ //loops throuhg each character
        if(hex[i] >= '0' && hex[i] <= '9'){ //each if and else if converts the character to decimal
            value = hex[i] - '0';
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F'){
            value = hex[i] - 'A' + 10;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f'){
            value = hex[i] - 'a' + 10;
        }
        else{
			// if input contains invalid hex digit
			// printf("Error: Invalid Hexadecimal\n");
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }
		//this makes the decimal value that will be looped again until it is ready to be outputted
        decimal = decimal * 16 + value;
    }
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}