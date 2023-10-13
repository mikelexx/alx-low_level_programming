#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && (b > c || b == c || b == a))
    {
        largest = a;
    }
    else if (a > c && (c > b || c == b || c == b))
    {
	    largest = a;
    }
    else if (b > c && (c > a || c == a || a == b))
    {
	    largest  = b;
    }
    else if (b > a && (a > c || a == c || c == b))
    {
        largest = b;
    }
    else if (c > a && (a > b || a == b || a == b))
    {
        largest = c;
    }
    else if (c > b && (b > a || b ==a || b == c)) 
    {
	    largest = c;
    }
    else
    {
	    largest = c;
    }

    return (largest);
}
