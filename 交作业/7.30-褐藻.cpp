#include<stdio.h>
#include<string.h>
int main(){
	char c,e[]="y";
	do{
	float a,b,d;
	scanf("%f%c%f",&a,&c,&b);
	if(c=='+'){
	   d=a+b;
	   printf("%.2f %c %.2f = %.2f\n",a,c,b,d);}
	else
	if(c=='-'){
	   d=a-b;
	   printf("%.2f %c %.2f = %.2f\n",a,c,b,d);}
	else
	if(c=='*'){
	   d=a*b;
	   printf("%.2f %c %.2f = %.2f\n",a,c,b,d);}
	else
	if(c=='/'){
	   d=a/b;
	   printf("%.2f %c %.2f = %.2f\n",a,c,b,d);}
	else printf("error");
	scanf("%s",&e);
	}while(strcmp(e,"y")==0);
	return 0;
} 
