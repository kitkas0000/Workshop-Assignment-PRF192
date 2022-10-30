#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int random_number(int min_num, int max_num){
	int a, b;
	do{
		a = min_num + (int) (rand()*(max_num - min_num+1.0) / (1.0+RAND_MAX));
	}while(a<min_num || a>max_num);
	return a;
	do{
		b = min_num + (int) (rand()*(max_num - min_num+1.0) / (1.0+RAND_MAX));
	}while(b<min_num || b>max_num);
	return b;
}

int main(){
	int total;
	int count, x, y;
	do{
		printf("Accept num: ");
		scanf("%d", &total);
	}while (total<2 || total >20);
	count =1;
	srand((unsigned int)time(NULL));
	do{
		x = random_number(1,10);
		y = random_number(1,10);
		printf("Result of throw %d: %d + %d\n", count, x, y);
		count++;
	}while (x+y != total);
	printf("You got your total in %d picks!", count-1);
	return 0; 
}

