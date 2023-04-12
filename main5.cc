#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *p = (char*)malloc(32*sizeof(char));

	free(p);

	std::cout << "&P:"<< (void*)p << std::endl;

	if (p == NULL){
		std::cout << "p is NULL" << std::endl;
	}else if (p == nullptr) {
		std::cout << "p is nullptr" << std::endl;
	}else{
		std::cout << "p is true" << std::endl;
	}

	int a = p[1];

	return 0;
}
