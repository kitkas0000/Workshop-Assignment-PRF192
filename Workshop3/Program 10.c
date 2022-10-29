#include<stdio.h>
#include<math.h>

void printMinMaxDigits(int n){
	int digit, min, max;
	digit = n % 10;
	n = n / 10;
	min = max = digit;
	while(n > 0){
		digit = n % 10;
		n = n / 10;
		if (min > digit) min = digit;
		if (max < digit) max = digit;
	}
	printf("Max digit: %d\n", max);
	printf("Min digit: %d\n", min);
}

int main(){
	int n;
	do{
		printf("Insert n: ");
		scanf("%d", &n);
		printMinMaxDigits(n);
	}while(n < 0);
	return 0;
}

