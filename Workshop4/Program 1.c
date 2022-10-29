#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int m){
	int n = sqrt(m);
	int i;
	if(m < 2) return 0;
	for(i = 2; i <= n; i++){
		if(m % i == 0) return 0;
	}
	return 1;
}

void printMinMaxDigits( int n){
	int digit;
	int min, max ;
	digit = n % 10;
	n = n / 10;
	min = max = digit;
	while (n > 0){
		digit = n % 10;
		n = n / 10;
		if (min > digit) min = digit;
		if (max < digit) max = digit;
	}
	printf("\nMax digit : %d", max);
	printf("\nMin digit : %d", min);
}

double checkNumber(int *n, char buffer){
	do{
	scanf("%d", n);
	scanf("%c", &buffer);
	fflush(stdin);
	if(buffer != 10){
		printf("\nVui long nhap so !!!");
		printf("\nNhap lai: ");
	}else{
		return *n;
	}
	}while(buffer != 10);
	}

int main(){
	int n, buffer;
	int m, result;
	int choice;
	printf("\n1-Process primes.");
	printf("\n2-Print min, max digit in an integer.");
	printf("\n3-Quit.");
	printf("\n------------------------");
	printf("\nSelect an operation: ");
	do{
		choice = checkNumber(&n, buffer);
		if(choice < 1 || choice > 3){
			printf("\nVui long chon tu 1-3: ");
		}
	}while(choice < 1 || choice > 3);	
	switch(choice){
		case 1:{
			printf("\nVui long nhap so: ");
			scanf("%d", &m);
			result = prime(m);
			if(result == 1){
				printf("\nIt is a prime!");
			}else{
				printf("\nIt is not a prime!");
			}break;
		}
		
		case 2:{
			printf("\nVui long nhap so: ");
			scanf("%d", &m);
			printMinMaxDigits(m);
			break;
		}
		
		case 3:{
			return 0;
		}
	}
}

