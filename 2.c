#include<stdio.h>
int main(){
	
	int n1, n2, add, sub, mult, div;
	
	printf("Enter number1: ");
	scanf("%d", &n1);
	printf("Enter number2: ");
	scanf("%d", &n2);
	
	add = n1+n2;
	sub = n1-n2;
	mult = n1*n2;
	div = n1/n2;
	
	printf("\n");
	printf("Addition value is: %d\n", add);
	printf("Substraction value is: %d\n", sub);
	printf("Multipication value is: %d\n", mult);
	printf("Division value is: %d\n", div);
	
	
	return 0;
}
