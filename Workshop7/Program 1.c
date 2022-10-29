#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_VALUE 100

int menu(){
    int choice;
    printf("\n=================MENU=================");
    printf("\n1- Add a student");
    printf("\n2- Remove a student");
    printf("\n3- Search a student");
    printf("\n4- Print the list in ascending order");
    printf("\n5- Quit");
    printf("\n====================================");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);
    return choice;
}

int isFull(int n){
    return n == MAX_VALUE;
}

int isEmpty(int n){
    return n == 0;
}

char* lTrim(char s[]){
    int i = 0;
    while (s[i] == ' ') i++;
    if (i > 0) strcpy(&s[0], &s[i]);
    return s;
}

char* rTrim(char s[]){
    int i = strlen(s) - 1;
    while (s[i] == ' ') i--;
    s[i+1] = '\0';
    return s;
}

char* trim(char s[]){
    rTrim(lTrim(s));
    char *ptr = strstr(s, "  ");
    while(ptr != NULL){
        strcpy(ptr, ptr + 1);
        ptr = strstr(s, "  ");
    }
    return s;
}

void addStudent(char names[][31], int *pn){
    char name[31];
    int exist, i;
    do{
        printf("\nPlease enter the name: ");
        scanf("%[^\n]", name);
        fflush(stdin);
        strupr(name);
        trim(name);
        exist = 1;
        for(i = 0; i < *pn; i++){
            if(strcmp(name, names[i]) == 0){
                printf("\nThe name is exist! Enter again");
                exist = 0;
                i = *pn - 1;
            }
        }
    }while(exist == 0);
    strcpy(names[*pn], name);
    (*pn)++;
}

void removeStudent(char names[][31], int *pn){
    printf("\nThe list of student: ");
    int i, j;
    for (i = 0; i < *pn; i++){
        printf("\nName[%d]: %s", i, names[i]);
    }
    int remove;
    printf("\nWhich name you want to remove: ");
    scanf("%d", &remove);
    if (remove > 0 || remove < *pn){
        for(j = remove + 1; j < *pn; j++){
            strcpy(names[j-1], names[j]);
        }
        printf("\nRemoved\n");
        (*pn)--;
    } else {
        printf("\nUnremoved\n");
    }
}

void searchStudent(char names[][31], int *pn){
    char name[31];
    printf("\nEnter the name you want to find: ");
    scanf("%[^\n]", name);
    fflush(stdin);
    strupr(name);
    trim(name);
    int i, check = 0;
    for (i = 0; i < *pn; i++){
        check = strcmp(names[i], name);
        if (check == 0){
            printf("\nFound it!");
            printf("\nName[%d]: %s\n", i, names[i]);
            check = 1;
        }
    }
    if (check == 0){
        printf("\nNot found!\n");
    }
}

void printList(char names[][31], int *pn){
    int i;
    for(i = 0; i < *pn; i++){
        printf("\nName[%d]: %s", i, names[i]);
    }
}

int main(){
    int userChoice, check = 1;
    char names[MAX_VALUE][31];
    int n = 0;
    do{
        userChoice = menu();
        switch(userChoice){
            case 1:
                if(isFull(n)){
                    printf("\nSorry, the list is full");
                } else {
                    addStudent(names, &n);
                    printf("\nAdded!\n");
                }
                break;
            case 2:
                if (isEmpty(n)){
                    printf("\nSorry, the list is empty");
                } else {
                    removeStudent(names, &n);
                }
                break;
            case 3:
                if (isEmpty(n)){
                    printf("\nSorry, the list is empty");
                } else {
                    searchStudent(names, &n);
                }
                break;
            case 4:
                if (isEmpty(n)){
                    printf("\nSorry, the list is empty");
                } else {
                    printList(names, &n);
                    printf("\n");
                }
                break;
            default:
                if(userChoice == 5){
                    check = 0;
                } else {
                    printf("\nWrong input, try again!\n");
                }
                break;
        }
    }while(check == 1);
    return 0;
}