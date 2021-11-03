#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

	char s[7] = "hello";
	//char d[7] = "test";
	char *d = s + 3;
	printf("s => %s\n", s);
	printf("d => %s\n", d);
	//memcpy(d, s, 9);
	memmove(d,  s, 3);
	printf("s => %s\n", s);
	printf("d => %s\n", d);


}
