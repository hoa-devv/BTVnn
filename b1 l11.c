#include <stdio.h>
void main ()
{
	 int a, b , c ,  p ,s;
	 printf("Chuong trinh tinh dien tich tam giac : ");
	 printf("\nNhap canh a vao day : ");
	 scanf ("%d", &a);
	 printf("\nNhap canh b vao day : ");
	 scanf ("%d" , &b);
	 printf("\nNhap canh c vao day : ");
	 scanf ("%d", &c);
	 if ( (a +b) > c && (a +c ) > b && (b+c ) > a)
	 {
	 	p = ( a + b +c)/2;
	 	s = sqrt (p*(p-a)*(p -b)*(p-c));
	 	printf("\nDien tich tam giac la :  %d ", s);
	 }
	 else {
	 	printf("\nDu lieu nhap vao khong hop le !  ");
	 }
}

