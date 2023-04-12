#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
// memery leak how to fix ？
char* get_systeminfo(){
    char *p_system = (char*)malloc(38*sizeof(char));
    strcpy(p_system, "Linux version 4.18.0-147.e18.x86_64");

    return p_system;
}

int main() {
    char *p_system = get_systeminfo();
    printf("system info:%s\n", p_system);
    free(p_system);
    return 0;
}