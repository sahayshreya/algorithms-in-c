/**
 *Modified 08/01/2019 - Shreya sahay
 *
 */

#include <stdio.h>

int main() {

	int remainder, number = 0,numbercopy=0, decimal_number = 0, temp = 1;
	printf("Enter any binary number= ");
	scanf("%d", &number);
    numbercopy=number;// so as to not lose the original number for further computations.
	// Iterate over the number until the end using a standard digit extraction algorithm.
	while(number > 0) {

		remainder = number % 10;
		number = number / 10;
		decimal_number += remainder * temp;
		temp = temp*2;		//used as power of 2

	}

	printf("binary %d = decimal %d\n",numbercopy, decimal_number);
}
