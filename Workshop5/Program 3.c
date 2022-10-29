#include <stdio.h>
#include <stdlib.h>

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

void validDate (void){
	int d, m, y;
	printf("Nhap ngay: ");
	scanf("%d", &d);
	printf("Nhap thang: ");
	scanf("%d", &m);
	printf("Nhap nam: ");
	scanf("%d", &y);
	if(m<1 || d<1 || y<1 || m>12 || d>31){
		printf("----------");
		printf("\nKhong hop le !");
	}else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		if(d <= 31){
			printf("----------");
			printf("\nHop le !");
		}
	}else if(m ==4 || m==6 || m==9 || m==11){
		if(d<=30){
			printf("----------");
			printf("\nHop le !");
		}else{
			printf("----------");
			printf("\nKhong hop le !");
		}
	}else if(y%400==0 || (y %4==0 && y%100!=0)){
		if(m == 2 && d <=29){
			printf("----------");
			printf("\nHop le !");
		}else{
			printf("----------");
			printf("\nKhong hop le !");
		}
	}else{
		printf("----------");
		printf("\nKhong hop le !");
	}
}

void chaData(char c1, char c2){
	char t;
	int d;
	if(c1>c2){
		t = c1;
		c1 = c2;
		c2 = t;
	}
	for(char c = c2; c >= c1; c--){
		printf("\nChr: %c | Dec: %d | Oct: %o | Hx: %X\n", c, c, c, c);
	}
}

int main(){
	int n, buffer;
	int m, result;
	int choice;
	printf("\n1-Processing date data.");
	printf("\n2-Character data.");
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
			printf("\n");
			validDate();
			break;
		}
		case 2:{
			char c1, c2;
			printf("\n");
			printf("Accept c1: ");
			scanf("%c", &c1);
			fflush(stdin);
			printf("Accept c2: ");
			scanf("%c", &c2);
			chaData(c1, c2);
			break;
		}
		case 3:{
			return 0;
		}
	}
}
