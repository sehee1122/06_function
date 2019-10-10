#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	// Practice 06-1

void print_star() {
	
	int i;

	for(i = 0; i < 10; i++)
		printf("*");
}

	// Practice 06-2, 06-3

int sumTwo(int a, int b) {
	
/*	int output;
	output = a + b;
	return output;	*/
	
	return (a + b);
}

int square(int n) {
	
	return(n * n);
}

int get_max(int x, int y) {
	
	if(x > y)
		return x;
	else
		return y;
}

int main(int argc, char *argv[]) {
	
	print_star();
	print_star();
	print_star();
	
	printf("\n\n");
	
	int p;
	int q;
	int output;
	
	p = 2;
	q = 5;
	
	output = sumTwo(p, q);
	printf("sumTwo : %i\n", output);
	
	printf("square : %i\n", square(p));
	
	printf("get_max : %i\n", get_max(p, q));
	
	return 0;
}
