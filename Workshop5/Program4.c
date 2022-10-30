#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double checkNumber(int *n, char buffer){
	do{
		scanf("%d", n);
		scanf("%c", &buffer);
		fflush(stdin);
		if(buffer != 10){
			printf("\nVui long nhap so !!! ");
			printf("\nNhap lai: ");
		}else{
			return *n;
		}
	}while(buffer != 10);
}


void giaiPTBac2(float a, float b, float c){
	if (a == 0) {
		if (b == 0) {
			printf("Phuong trinh vo nghiem!");
		} else {
			printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
		}
		return;
	}
	float delta = b*b - 4*a*c;
	float x1;
	float x2;
	if (delta > 0) {
		x1 = (float) ((-b + sqrt(delta)) / (2*a));
		x2 = (float) ((-b - sqrt(delta)) / (2*a));
		printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
	}else if (delta == 0) {
		x1 = (-b / (2 * a));
		printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
	} else {
		printf("Phuong trinh vo nghiem!");
	}
}

void laiNH(float d,float r,int n){
	float p = d* pow((1+r),n);
	printf("\nSo tien nhan duoc la: %f", p);
}

int main(){
	int n, buffer;
	int m, result;
	int choice;
	printf("\n1-Quadratic equation.");
	printf("\n2-Bank deposit problem.");
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
			float a, b, c;
			printf("\nPhuong trinh bac 2 co dang: ax^2 + bx + c = 0");
			printf("\nNhap a: ");
			scanf("%f", &a);
			printf("\nNhap b: ");
			scanf("%f", &b);
			printf("\nNhap c: ");
			scanf("%f", &c);
			giaiPTBac2(a,b,c);
			break;
		}
		case 2:{
			float d, n, r;
			printf("\nNhap so tien muon gui: ");
			scanf("%f", &d);
			while(d<=0){
				printf("\nSo tien phai lon hon 0, vui long nhap lai: ");
				scanf("%f", &d);
			}
			printf("\nNhap lai suat: ");
			scanf("%f", &r);
			while(r<=0 || r >1){
				printf("\nLai suat nam trong khoang tu 0 den 1, vui long nhap lai: ");
				scanf("%f", &r);
			}
			printf("\nNhap so nam muon gui: ");
			scanf("%f", &n);
			while(n<0){
				printf("\nSo nam phai lon hon 0, vui long nhap lai: ");
				scanf("%f", &n);
			}
			laiNH(d, r, n);
			break;
		}
		case 3:{
			return 0;
		}
	}
}

