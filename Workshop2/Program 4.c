#include<stdio.h>

int main(){
	int x, y, t;
	do{
		printf("Nhap so thu nhat: ");
		scanf("%d", &x);
		printf("Nhap so thu hai: ");
		scanf("%d", &y);
		
		t = x;
		x = y;
		y = t;
		
		printf("Gia tri cua so thu nhat sau khi hoan doi: %d\n", x);
		printf("Gia tri cua so thu hai sau khi hoan doi: %d\n", y);		
		break;
	}while(x != 0 || y != 0);
	
	return 0;
}

