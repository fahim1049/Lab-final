#include<stdio.h>
int main(){
	
	float n1, n2;
	printf("Enter number1: ");
	scanf("%f", &n1);
	printf("Enter number2: ");
	scanf("%f", &n2);
	
	float add = n1+n2;
	float subs = n1-n2;
	
	printf("\n");
	printf("Addition value is: %.2f\n", add);
	printf("Substraction value is: %.2f\n", subs);
	
	return 0;
}
