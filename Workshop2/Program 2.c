#include<stdio.h>

// T�nh Tax-free income //
int ctf (int pa, int pd, int n){
	return 12 * (pa + n * pd);
}

//T�nh Taxable income //
int cti (int income, int tf){
	return income - tf;
}

//T�nh Income tax //
double cit(double incometax, int ti){
	return ti * incometax;
}

int main(){
	int income, tf, ti, n;
	double incometax;
	int pa = 9000000;
	int pd = 3600000;
	printf("Nhap thu nhap ca nam: ");
	scanf("%d", &income);
	printf("Nhap so nguoi phai cap duong: ");
	scanf("%d", &n);
	tf = ctf(pa, pd, n);
	printf("Tax-free income: %d", tf);
	ti = cti(income, tf);
	
	//Kiem tra income tax //
	if(ti > 18000000){
		incometax = 0.2;
	} else if(ti >= 10000001 && ti <= 18000000) {
		incometax = 0.15;
	} else if(ti >= 5000001 && ti <= 10000000){
		incometax = 0.1;
	} else if(ti <= 5000000 && ti > 0){
		incometax = 0.05;
	} else{
		ti = 0;
		incometax = 0;
	}
	printf("\nThu nhap chiu thue: %d", ti);
	printf("\nIncome tax: %lf", cit(incometax, ti));
	return 0;
}

