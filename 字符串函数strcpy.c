#include<stdio.h>
#include<string.h>


char* mycpy(char* dst, const char* src) {

	//*int idx = 0;
	//while (src[idx] != '\0') {
	//	dst[idx] = src[idx];
	//	idx++;
	//}*/

	//dst[idx] = '\0';



	char* ret = dst;
	while ( *src ) {
		*dst++ = *src++;
	}
	*dst = '\0';
	return dst;

}


int test03(int argc, const char const* argv[]) {

	char s1[] = "abc";
	char s2[] = "abc";
	mycpy(s1, s2);
}