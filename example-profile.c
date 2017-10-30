#include <stdio.h>

void print_message(const char* msg);

int main(int argc, char **argv)
{
	print_message("Hello world!\n");	
	return 0;
}

void print_message(const char* msg)
{
	puts(msg);
}
