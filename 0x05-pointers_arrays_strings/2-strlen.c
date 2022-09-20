#include "main.h"



/**

 * _strlen - returns the length of a string

 * @s: pointer of parameter

 * Return: returns n as integer;

 */



int _strlen(char *s)

{

	int n = 0;



	while (s[n] != '\0')

	{

		n++;

	}



	return (n);

