#include<stdio.h>
#include<math.h>

int factorial(int n){
	double p = 1;
	int i;
	for(i = 2; i <= n; ++i) p *= i;
	return p;
}

int main(){
	int n;
	do{
		printf("Insert n: ");
		scanf("%d", &n);
	} while(n < 0);
	printf("The factorial of the number: %d", factorial(n));
	return 0;
}

