#include <stdio.h>
#include <stdlib.h>


int login(int username , int password);
int menu ();
int main ()


{
	int PINcode = 2972002, username = 992002, sodutaikhoannhan = 2742002 ,sotienmuonchuyen, sodu, soduconlai, sotienmuonrut , taikhoannguoinhan,luachon,  y, n, count = 1 , ketqua;
	printf("Welcome to H'bank");
	printf(" Please enter username:  ");
	scanf ("%d", &username);
	printf("Please enter your PIN code : ");
	scanf ("%d", &PINcode);
	ketqua = int login ( int username, int PINcode  );
	if ( ketqua == 1)
	{
	menu();
    }
	else if ( ketqua == 0)
	{
		printf("Ket thuc ");
	}
	
}
	
int  login ( int username  , int PINcode)	
{
	//* Check username *//
	
	do 
	{
		if ( username !=992002 )
		{
			printf("\nErrow . So lan truy cap con lai  : %d  . Again    ", 3 - count);
			printf("\nToi da 3 lan ");
			count ++;
		}
		else if (count > 3)
		{
			printf(" \nTai khoan da bi khoa ");
			break;
		}while (username != 992002)
		
		
	//*Check password *//
		if ( username == 992002)
		{
		do
		{
			printf("\Pin code : ");
			scanf ("%d", &PINcode;
			if(mapin !=2972002) 
		{
			printf("\nErrow . So lan truy cap con lai : %d. Again ", 3 - count );
			printf("\nToi da 3 lan ");
			count ++;
		}
			else if (count > 3)
		{
			printf("\nTai khoan da bi khoa ");
			break ; 
		}while (mapin !=2972002)	
		}
	
		}
		if ( username == 992002 && PINcode == 2972002)
		{
			return 1 ;
		}
		else 
		{
			return 0 ;
		}
	}
		
}
int menu ()	
{
	/**Cac dich vu **/
	do 
	{
		printf("1.Rut tien || 2.Chuyen tien || 3. Hien thi so du  || 4.Ket thuc ");
		switch ( luachon )
		case 1 : 
		{
			printf("\nSo du cua ban la : %d", sodu);
			printf("\nNhap so tien ban muon rut :  ");
			scanf ("%d", &sotienmuonrut);
			if ( sotienmuonrut %50 == 0 && sotienmuonrut > 3000000 && sotienmuonrut >= sodu)
			{
			printf("\nSo du con lai cua ban la : %d = %d - %d", soduconlai = sodu - sotienmuonrut);
			}
			else if 
			{
			printf("\nSo tien khong hop le , moi ban nhap lai ");
			}
		
		}
		case 2 : 
		{
			printf("\nSo du cua ban la : ", sodu);
			printf("\nNhap so tai khoan ban muon chuyen : ");
			scanf ("%d", &stk);
			printf("\nNhap so tien muon chuyen : ");
			scanf ("%d", &sotienmuonchuyen)
			printf("\nSo du con lai trong tai khoan : %d = %d - %d", soduconlai = sodu - sotienmuonchuyen);
			printf("Tai khoan nguoi nhan : %d = %d + %d ",taikhoannguoinhan = sodutaikhoannhan + sotienmuonchuyen);
		}
		case 3 : 
		{
			printf("So du trong tai khoan : %d ", sodu);
		}
		case 4 : 
		{
			printf("Ket thuc ")
		}
		printf("Ban co muon tiep tuc khong %c or %c", y or n);
		scanf ("%d", &y);
		scanf ("%d", &n);
	}while ( luachon != 4)
	
}
