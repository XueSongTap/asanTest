#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main(){
	int * arr = new int[1024];

	arr[0] = 11;
	delete [] arr;
	delete [] arr;
	
	int a = arr[0];

	return 0;
}
