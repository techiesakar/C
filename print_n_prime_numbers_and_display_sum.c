// C Program to find the n prime numbers and make sum of it
// If user input, 900, then there must 900 prime number displayed
// This program is written by techiesakar
// fb.com/techiesakar
// instagram.com/techiesakar
// github.com/techiesakar

#include <stdio.h>
#include <math.h>
int main() {
    int i, prime = 2, is_prime = 2, count = 0, term, sum = 0, flag = 0;
    printf("\nEnter the total prime number you wanted : ");
    scanf("%d", & term);
    while (count != term) {
        if (count == 0 || count == 1) {
        	prime= is_prime;
            printf("\n%d", prime);
            sum = sum + prime;
            is_prime++;
            count++;
        } else {
            for (i = 2; i<=sqrt(is_prime); i++) {
                if (is_prime % i == 0) {
                    flag = 0;
                    is_prime++;
                    break;
                } else {
                    flag = 1;
                }

            }
            if (flag == 1) {
                prime= is_prime;
                printf("\n%d", prime);
                sum = sum + prime;
                count++;
                is_prime++;
            }
        }
    }
    printf("\nThe sum of %d prime number is %d", term, sum);
    printf("\nThe highest prime number is %d", prime);
}
