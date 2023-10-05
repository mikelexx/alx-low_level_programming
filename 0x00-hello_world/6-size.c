# include <stdio.h>
/**
 * main -entry point to program.
 * Description - prints types of various data.
 * Returns 1
 */
int main(void)
{
int a;
long int b;
long long int c;
float d;
char e;
printf("Size of a char: %c(s)", sizeof(e));
printf("Size of an int: %d(s)", sizeof(a));
printf("Size of a long int: %ld(s)", sizeof(b));
printf("Size of a long long int: %lld(s)", sizeof(c));
printf("Size of a float: %f(s)", sizeof(d));
return (0);
}
