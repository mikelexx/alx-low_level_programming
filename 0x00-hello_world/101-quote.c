#include <unistd.h>
/**
 * main - entry point.
 * Description - print error message without using puts or printf their man 3.
 * Return: 1 for error. 
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-1";
write(2,message,strlen(message));
return (1);
}
