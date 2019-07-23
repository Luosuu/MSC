#include <stdio.h>

int main()
{
	printf("请输入圆柱体的半径r和高h\n");
	float pi=3.14;
	float r=0;
	float h=0;
    scanf("%f %f",&r,&h);
    float area=pi*r*r;
    float volume=area*h;
    printf("area=%.2f,volume=%.2f",area,volume);
    return 0;
}
