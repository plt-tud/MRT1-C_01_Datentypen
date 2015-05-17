/* Datentypen in C90 
 * MRT1, LUR (c) 2007 */
 #include <stdio.h>

int main() {
	char a; int i;
	
	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(long long) = %d\n", sizeof(long long));

	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(long double) = %d\n", sizeof(long double));

	// c kennt Typ und damit auch Speicherplatzbedarf von Variablen
	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(i) = %d\n", sizeof(i));

	return 0;
}  
