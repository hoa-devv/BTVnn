#include<stdio.h>
#include<stdlib.h>
int main ()
{
	
	int i, so_cho_truoc = 100, Arr[20];
	printf("Nhap mang so nguyen vao day : ");
	scanf ("%d",&Arr[20]);
	for (i = 0 ; i < 20 ; i ++ )
	{
		scanf ("%d", &Arr[i]);
    }
    for ( i = 0 ; i < 20 ; i ++)
    {
    	int check = Arr[i];
    	if ( i % 50 == 0 )
    	{
    		printf("Boi so cua 50 la : ");
		}
	}
}
int check (int so_cho_truoc)
{
	if ( so_cho_truoc%50 == 0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

