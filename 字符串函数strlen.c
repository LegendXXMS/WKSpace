#include<stdio.h>
#include<string.h>


int mylen(const char* s) {                    //strlen


	
	int idx = 0;
	while(s[idx] != '\0') {
		idx++;
		
	}
	return idx;
}


int test01(int argc ,const char* argv[]) {


	char line[] = "Hello";

	printf("strlen = %lu\n", mylen(line));    //strlen(line)         //返回字符串长度，不包括结尾0
	printf("sizeof = %lu\n", sizeof(line));



	return 0;
}

