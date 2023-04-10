#include <unistd.h> 
 
/** 
* _putchar - writes the character c to stdout 
* @c: The character to print 
* 
* Return: an success 1. 
* an error, -1 is returned, and errror is set appropriately. 
*/ 
int _putchar(char)	
{ 
 return(write(1, &c, 1)); 
} 

