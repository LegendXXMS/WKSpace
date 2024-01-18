#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const* argv[]) {

	char s[] = "hello";
	char* p = strchr(s, 'l');               //Ñ°ÕÒÊä³ö
	char* t = (char*)malloc(strlen(p) + 1);
	strcpy_s(t, strlen(p) + 1, p);

	
	printf("%s\n", t);

	free(t);


	return 0;
}