#include<stdio.h>
int main(){
	
	int yr;
	printf("Enter any year: ");
	scanf("%d", &yr);
	
	if(yr%400==0){
		printf("\nThis is leap year\n");
	}
	else if(yr%4==0 && yr%100!=0){
		printf("\nThis is leap year\n");
	}
	else{
		printf("\nNot a leap year\n");
	}
	
	return 0;
}
