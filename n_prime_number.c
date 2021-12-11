#include <stdio.h>
#include <math.h>
int main() {
	int i, prime = 2, is_prime, count = 0, term, flag;
	printf("\nEnter the total prime number you wanted : ");
	scanf("%d", & term);
	while (count != term) {
		flag = 0;
		for(is_prime = 2; is_prime<=sqrt(prime); is_prime++) {
			if(prime%is_prime==0) {
				flag = 1;
				break;
			}
		}
		if(flag==0) {
			printf("%d\t", prime);
			count++;
		}
		prime++;
	}
}
