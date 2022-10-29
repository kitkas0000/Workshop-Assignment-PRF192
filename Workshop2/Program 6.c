#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char a;
	int nVowels = 0;
    int nConsonants = 0;
	int nOthers = 0;
	printf("Nhap chuoi ky tu: ");
	do{
		a = getchar();        
		a = toupper(a);        
		if(a >= 'A' && a <= 'Z'){            
			switch(a){
				case 'A':{
					nVowels++;
					break;
				}
				case 'E':{
					nVowels++;
					break;
				}
				case 'I':{
					nVowels++;
					break;
					}
				case 'O':{
					nVowels++;
					break;
				}
				case 'U':{
					nVowels++;
					break;
				}default:{
					nConsonants++;
				}
			}
		}else{
			nOthers++;
		}
	}while(a != 10);
	printf("Number of Vowels: %d\n", nVowels);
	printf("Number of Consonants: %d\n", nConsonants);
	printf("Number of Others: %d\n", nOthers);
	return 0;
}

