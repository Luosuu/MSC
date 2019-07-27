#include<stdio.h>
int main(){
	int i,a,b;
	int n[10];
	printf("请输入10个整数\n");
	for(i=0;i<10;i++)
	    scanf("%d",&n[i]);
	for(;i>0;i--){
		for(a=9;a>0;a--){
		if(n[a]<n[a-1]){
		   b=n[a];
		   n[a]=n[a-1];
		   n[a-1]=b;}
		}
	}
	for(i=0;i<10;i++)
	    if(i<9) 
		printf("%d,",n[i]);
		if(i=9)
		printf("%d",n[i]);
	return 0;
}
