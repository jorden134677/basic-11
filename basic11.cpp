#include<stdio.h>
#include <stdlib.h>
 
int main()
{
	int x,y,z,h;
	printf("�п�J�T�ӼơG");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		h=x;
		x=y;
		y=h;
	}
	if(x>z)
	{
		h=x;
		x=z;
		z=h;
	}
	if(y>z)
	{
		h=y;
		y=z;
		z=h;
	}
	
	printf("�Ʀr�q�p��j��:%d  %d   %d\n",x,y,z);
	system("pause");
	return 0;
}

