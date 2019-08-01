#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 0, strlen = 1, count = 0;
	char *a=(char*)malloc(sizeof(char*)*strlen);
	char *b=(char*)malloc(sizeof(char*)*strlen);
	printf("ÇëÊäÈë×Ö·û´®\n");
	scanf("%s",a);
	if (count >= strlen) 
		a= (char*)realloc(a, sizeof(char*) * ++strlen);
	for (; a[count] != '\0'; i++) {
		if ((i + 1) % 3 == 0)
			b[i] = '*';
		else b[i] = a[count++];	
		b[i+1]='\0';
	}
	printf("%s\n", b);
	return 0;
}
