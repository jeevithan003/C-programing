// C program to demonstrate the 
// declaration, definition and
// initialization
#include <stdio.h>

int main()
{
	// declaration with definition
	int defined_var;

	printf("Defined_var: %d\n", defined_var);

	// initialization
	defined_var = 12;

	// declaration + definition + initialization
	int ini_var = 25;

	printf("Value of defined_var after initialization: %d\n",defined_var);
	printf("Value of ini_var: %d", ini_var);

	return 0;
}







// C program to declare and print local variable inside a
// function.
#include <stdio.h>

void function()
{
	int x = 10; // local variable
	printf("%d", x);
}

int main() { function(); }






// C program to demonstrate use of global variable
#include <stdio.h>

int x = 20; // global variable

void function1() { printf("Function 1: %d\n", x); }

void function2() { printf("Function 2: %d\n", x); }

int main()
{

	function1();
	function2();
	return 0;
}










// C program to demonstrate use of static variable
#include <stdio.h>

void function()
{
	int x = 20; // local variable
	static int y = 30; // static variable
	x = x + 10;
	y = y + 10;
	printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}

int main()
{
	printf("First Call\n");
	function();
	printf("Second Call\n");
	function();
	printf("Third Call\n");
	function();
	return 0;
}





// C Program to Demonstrate constant variable
#include <stdio.h>

int main()
{
	// variable
	int not_constant;

	// constant variable;
	const int constant = 20;

	// changing values
	not_constant = 40;
	constant = 22;

	return 0;
}
