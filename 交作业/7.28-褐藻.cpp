#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	printf("请输入数组长度\n");
	int a=0,b,c,d,i;
	int *n;
	scanf("%d",&d);
	n=(int*)malloc(d*sizeof(int));
	printf("请输入数组内容(有序正数且用“,”隔开)\n");
    for(int i=0;i<d;i++){
    	if(i==d-1){
    	   scanf("%d",&n[i]);
		}
		else{
			scanf("%d,",&n[i]);
		}
	}
	printf("请输入要查找的内容\n");
	scanf("%d",&b);
	d=d-1;
	while(a<=d){
		c=(a+d)/2;
	    if(b<n[c])
	       d=c-1;
	    else if(b>n[c])
	       a=c+1;
	    else if(b==n[c]){
	       printf("要查找内容在其中位置为%d",c+1);
	       break;
		}	
	}  
	return 0; 
}
