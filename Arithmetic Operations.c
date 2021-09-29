#include <stdio.h>
#include <stdlib.h>                                                                                                                                                       //For functions like pow(), sin(), cos(), tan()
int main()
{
  int i=1;
  int num1, num2,opt;  
    int sum, sub, mult;  
    float div;  
    char oper;
  
    /* 
     * Read two numbers from user separated by comma 
     */  
    printf("Input any two numbers separated by comma : \n");  
    scanf("%d,%d", &num1, &num2);  
  
    /* 
     * Performs all arithmetic operations 
     */   
    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    div = (float)num1 / num2;  
    /* 
     * Prints the result of all arithmetic operations based on options 
     */  
printf("---Do you want to perform the operations?, choose 1 to proceed---\n");
scanf("%d",&opt);
  while(1)
  {
  	printf("Key in the operator\n");
    scanf("%c",&oper);
  	if(oper=='+')
  	{
  		printf("You chose [+] for addition\n");
  		printf("The sum of the given numbers : %d\n", sum); 
	}
	else if(oper=='-')
	{
		printf("You chose [-] for subtraction\n");
		printf("The difference of the given numbers : %d\n", sub);
	}
	else if(oper=='*')
	{
		printf("You chose [*] for multiplication\n");
		printf("The product of the given numbers : %d\n", mult);
	}
	else if(oper=='/')
	{
		printf("You chose [/] for division\n");
		printf("The quotient of the given numbers : %f\n", div);
	}
  }
}


