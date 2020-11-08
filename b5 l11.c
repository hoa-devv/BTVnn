#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum  (int a , int b)
{
	int sum = a +b;
	return sum ;
}
int sub (int a , int b )
{
	int sub = a-b;
	return sub;
}
int multi (int a , int b )
{
	int multi = a *b;
	return multi;
}
 int  dev ( int a , int b )
 {
 	int dev = a /b;
	if ( b == 0 )
	{
		printf("So ban nhap vao khong hop le  ");
	}
	return dev ;
}
int main ()
{
	int a , b,lua_chon;
	printf("Menu ");
	printf("\nNhap so vao day : ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	printf("\nTINH TOAN ");
	printf("\n  ================");
	printf(" \n 1. Sum \n 2.Sub \n 3.Multi \n 4.Double div  ");
	scanf ("%d",&lua_chon);
	
	switch (lua_chon) {
	case  1:
		printf("Tong la : %d", sum(a,b));
		break;
	case 2 :
		sub (a,b);
		printf("Hieu la : %d", sub(a,b));
		break;
	case 3:
		multi (a,b);
		printf("Tich la : %d ", multi(a,b));
		break ;
	case 4 :
		dev ( a,b );
		printf("Thuong la : %d", dev (a,b));
		break;
		
	}
}
