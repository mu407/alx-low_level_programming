#include "main.h"
#include <stdio.h>
/**
 *main-prints the number of arguments passed into it
 *@argc:number of argument count
 *@argv:vector of commandline argument
 *Return:all of arguments passed to it
 **/
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
