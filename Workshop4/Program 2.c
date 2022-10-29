#include <stdio.h>
#include <stdlib.h>

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

int validDate(int date, int month, int year){
	int maxd = 31;
	if (date < 1 || date > 31 || month < 1 || month > 12) return 0;
	if (month == 4 || month == 6 || month == 9 || month == 11){
		maxd = 30;
	} else if (month == 2){
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) maxd = 29;
		else maxd = 28;
	}
	return date <= maxd;
}



int fibonacci(int n) {
	int f0 = 0;
	int f1 = 1;
	int fn = 1;
	int i;
	if (n < 0){
		return -1;
	}else if (n == 0 || n == 1) {
		return n;
	}else{
		for (i = 2; i < n; i++) {
			f0 = f1;
			f1 = fn;
			fn = f0 + f1;
		}
	}
	return fn;
}

int main(){
	int n, buffer;
	int m, result;
	int choice;
	printf("\n1-Fibonacci sequence.");
	printf("\n2-Check a date.");
	printf("\n3-Quit.");
	printf("\n------------------------");
	printf("\nSelect an operation: ");
	do{
		choice = checkNumber(&n, buffer);
		if(choice<1 || choice>3){
			printf("\nVui long chon tu 1-3: ");
		}
	}while(choice <1 || choice > 3);
	switch(choice){
		case 1:{
			printf("\nVui long nhap so: ");
			scanf("%d", &m);
			printf("\n%d so dau tien cua day so Fibonacci: \n", m);
			for (int i = 0; i < m; i++){
				printf(" %d ", fibonacci(i));
			}
			break;
		}
		
		case 2:{
			int date, month, year;
			printf("\n");
			printf("Enter date, month, year: ");
			scanf("%d %d %d", &date, &month, &year);
			if (validDate(date, month, year)){
				printf("Valid Date");
			} else {
				printf("Invalid Date");
			}
			break;
		}
			
		case 3:{
			return 0;
		}
	}
}
