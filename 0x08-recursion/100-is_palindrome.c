#include <stdio.h>
#include "main.h"

/**
 * length - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */

int length(char* s)
{
	if(*s)
	{
		s++;
		return(length(s) + 1);
	}
	else
		return 0;
}

/**
 * palindrome - helper function for is_palindrome
 * @s: the string
 * @l: length of string
 * @i: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */

int palindrome(char *s, int l, int i)
{
	if( i == l)
		return 1;
	else
	{
		if(s[i] == s[l])
			return palindrome(s, l - 1, i + 1);
		else
			return 0;
	}
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */

int is_palindrome(char *s)
{
	return palindrome(s, length(s) - 1, 0);
}	
