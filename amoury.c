#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char *ptrtab;
	//ptrtab = malloc(sizeof(char) * 5);
	ptrtab = "theatre";	
	printf("%p\n", &ptrtab);
	printf("%p\n", ptrtab);
	printf("%s\n", ptrtab);
	printf("%c\n", *ptrtab);
	return (0);
}
