#include<stdio.h>
int main(){
	
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	
	if(marks>=80 && marks<=100){
		printf("Your grade is: A+\n");
	}
	else if(marks>=75 && marks<80){
		printf("Your grade is: A");
	}
	else if(marks>=70 && marks<75){
		printf("Your grade is: A-");
	}
	else if(marks>=65 && marks<70){
		printf("Your grade is: B+");
	}
	else if(marks>=60 && marks<65){
		printf("Your grade is: B");
	}
	else if(marks>=55 && marks<60){
		printf("Your grade is: B-");
	}
	else if(marks>=50 && marks<55){
		printf("Your grade is: C+");
	}
	else if(marks>=45 && marks<50){
		printf("Your grade is: C");
	}
	else if(marks>=40 && marks<45){
		printf("Your grade is: D");
	}
	else if(marks>=0 && marks<40){
		printf("Your grade is: F");
	}
	else{
		printf("Input a valid number\n");
	}
	
	
	return 0;
}
