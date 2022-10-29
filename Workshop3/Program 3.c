#include<stdio.h>
#include<math.h>

int getRelPos(double x, double y, double r){
	double d = sqrt(x*x + y*y);
	if (d < r) return 1;
	else if (d == r) return 0;
	else return -1;
}

int main(){
	double x, y, r, result;
	printf("Insert point: ");
	scanf("%d %d", &x, &y);
	do{
		printf("Insert r: ");
		scanf("%d", &r);
	} while(r < 0);
	result = getRelPos(x, y, r);
	if (result == 1) printf("The point is in the circle");
	else if (result == 0) printf("The point is on the circle");
	else printf("The point is out the circle");
	return 0;
}

