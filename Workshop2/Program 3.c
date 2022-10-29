#include<stdio.h>

int main(){
	int sum = 0;
	int count = 1;
	int n;
	printf("Ban muon nhap bao nhieu so nguyen: ");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		printf("Nhap so thu %d: ", count);
		scanf("%d", &a[i]);
		count += 1;
	}
	for ( int i = 0; i < n; i++){
		if(a[i] != 0){
			sum += a[i];
		} else {
			printf("%d\n", sum);
			break;
		}
	}
	return 0;
}

