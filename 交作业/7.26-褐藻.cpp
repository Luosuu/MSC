#include<stdio.h>
int main(){
    printf("请输入字符串以计算其中“a”与“d”的个数\n");
	int a=0,b=0,c=0;
	char str[10000];
	gets(str);
	for(;a<sizeof(str)/sizeof(char);a++){
		if(str[a]=='a')
		   b++;
		if(str[a]=='d')
		   c++;
	}
	printf("a:%d,d:%d",b,c);
	return 0;
}
