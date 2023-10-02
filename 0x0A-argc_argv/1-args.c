#include "main.h"
#include <stdio.h>
/**
 *main-prints the number of arguments passed into it
 *@argc:number of argument count
 *@argv:vector of commandline argument
 *Return:number of arguments passed to it
 **/
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
