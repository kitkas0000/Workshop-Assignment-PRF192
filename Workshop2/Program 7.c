#include<stdio.h>

int main(){
	char x, y;
	int d, c;
	printf("Nhap ky tu thu nhat va so thu hai: ");
	scanf("%c %c", &x, &y);
	
	if(x > y){
		int t = x;
		x = y;
		y = t;
	}
	
	d = y - x;
	printf("D: %d\n", d);
	for(c = x; c <= y; c++){
		printf("%c : %d, %o, %X\n", c, c, c, c);
	}
	return 0;
}

