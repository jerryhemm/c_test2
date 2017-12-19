#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void replaceStr(char str[], char subStr1[], char subStr2[]) {

	int strLen = strlen(str);
	int subStr1Len = strlen(subStr1);
	int subStr2Len = strlen(subStr2);

	char *pos = strstr(str, subStr1);
	int len1 = pos - str + 1;

	char newStr1[len1];
	strncpy(newStr1, str, len1);
	newStr1[len1 - 1] = '\0';

	printf("%s\n", newStr1);

	pos = pos + subStr1Len;
	int len2 = str + strLen - pos + 1;
	char newStr2[len2];
	strncpy(newStr2, pos, len2);
	newStr2[len2 - 1] = '\0';

	printf("%s\n", newStr2);

	int len3 = len1 + subStr2Len + len2;
	char newStr3[len3];

	strcpy(newStr3, newStr1);
	strcat(newStr3, subStr2);
	strcat(newStr3, newStr2);

	printf("%s\n", newStr3);

}













