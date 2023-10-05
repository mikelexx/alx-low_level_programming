# inclue <stdio.h>
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
printf("Size of a char: %u byte(s)", sizeof(e));
printf("Size of an int: %u byte(s)", sizeof(a));
printf("Size of a long int: %u byte byte(s)", sizeof(b));
printf("Size of a long long int: %u byte(s)", sizeof(c));
printf("Size of a float: %u byte(s)", sizeof(d));
return (0);
}
