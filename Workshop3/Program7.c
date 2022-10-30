#include<stdio.h>
#include<math.h>

int sumDigits(int n){	
	int sum = 0; /* initialize sum of digits */
	do{
		int remainder = n % 10 ; /* Get a digit at unit position */
		n = n / 10;
		sum += remainder;
	} while(n > 0);
	return sum;
}

int main(){
	int s, n;
	do{
		printf("Insert n: ");
		scanf("%d", &n); 
		if (n >= 0){
			s = sumDigits(n);
			printf("Sum: %d\n", s);
		}
	} while(n >= 0);
	return 0;
}

