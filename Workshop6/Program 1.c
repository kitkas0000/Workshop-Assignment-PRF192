#include<stdio.h>
#include<math.h>

int a[9], i;
void input(){ 
	printf("Enter the digits of ISBN : "); 
	for (i = 0; i <= 9; i++) scanf("%d", &a[i]);
}

int main(){
	input(); 
	int t = 0; 
	int i; 
	for (i = 0; i < 10; i++) t = t + a[i] * (10 - i); 
	if (t % 11 == 0) printf("The ISBN is valid\n");  
	if (t % 11 != 0) printf("The ISBN is not valid\n");  
	system("pause"); 
	return 0;
}

