#include <stdio.h>
#include <stdlib.h>

//arithmetic operations with scanf and printf

int main(int argc, char *argv[]) {
	
	//variables
	int num_1, num_2, operation,result;
	printf("---------Arithmetic operations--------\n");
	printf("Key in first number\n");
	scanf("%d",&num_1);
	printf("Key in second number\n");
	scanf("%d",&num_2);
	printf("--------CHOICE-----\n");
	printf("1.Addition\n 2.Multiplication\n 3.Division\n 4.Subtraction\n 5.Modulus\n");
	printf("Enter the operation to perfom arithmetics:%s\t");
	scanf("%d",&operation);
	
	//use nested if-else to perform arithmetics
	//addition
	if(operation==1)
	{
		result=num_1+num_2;
		printf("\nAddition is: %d",result);
	    printf("\nEnter the operation to perfom arithmetics:%s\t");
	    scanf("%d",&operation);
	    if(operation==2)
	    {
	    result=num_1*num_2;
		printf("\nProduct is: %d",result);
	    printf("\nEnter the operation to perfom arithmetics:%s\t");
	    scanf("%d",&operation);
		}
		if(operation==3)
	    {
	    result=num_1/num_2;
		printf("\nDivision is: %d",result);
	    printf("\nEnter the operation to perfom arithmetics:%s\t");
	    scanf("%d",&operation);
		}
		if(operation==4)
	    {
	    result=num_1-num_2;
		printf("\Subtraction is: %d",result);
	    printf("\nEnter the operation to perfom arithmetics:%s\t");
	    scanf("%d",&operation);
		}
		if(operation==5)
	    {
	    result=num_1%num_2;
		printf("\Modulus is: %d",result);
	    printf("\nEnter the operation to perfom arithmetics:%s\t");
	    scanf("%d",&operation);
		}
	}else
	{
		printf("Invalid operation");
	}
	
	return 0;
}
