#include<stdio.h>

int main(){
	double num1, num2, result;
	char op;
	printf("Nhap phep tinh (+-*/): ");
	scanf("%c", &op);
	switch(op){
		case'+':
			printf("Nhap so thu nhat: ");
			scanf("%lf", &num1);
			printf("Nhap so thu hai: ");
			scanf("%lf", &num2);
			result = num1 + num2;
			printf("Ket qua: %lf", result);
			break;
		case'-':
			printf("Nhap so thu nhat: ");
			scanf("%lf", &num1);
			printf("Nhap so thu hai: ");
			scanf("%lf", &num2);
			result = num1 - num2;
			printf("Ket qua: %lf", result);
			break;
		case'*':
			printf("Nhap so thu nhat: ");
			scanf("%lf", &num1);
			printf("Nhap so thu hai: ");
			scanf("%lf", &num2);
			result = num1 * num2;
			printf("Ket qua: %lf", result);
			break;
		case'/':
			printf("Nhap so thu nhat: ");
			scanf("%lf", &num1);
			printf("Nhap so thu hai: ");
			scanf("%lf", &num2);
			if(num2 == 0){
				printf("Divide by 0");
			} else {
				result = num1 / num2;
				printf("Ket qua: %lf", result);
				break;	
			}
		default:
			printf("Phep tinh khong hop le");
			break;
	}
	return 0;
}
