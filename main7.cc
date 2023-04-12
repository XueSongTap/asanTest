#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main(){
	char *p = (char*)malloc(32 *sizeof(char));

	free(p);

	free(p);

	return 0;
}
