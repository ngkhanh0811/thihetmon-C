#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float chia(int num1, int num2);
int tinhtong(num1, num2);
int tinhhieu(num1, num2);
int nhan(num1, num2);
int main(int argc, char *argv[]) {
	char bieuthuc;
    int num1, num2;
    printf("\nNhap gia tri cua so thu nhat : ");
    scanf("%d", &num1);
    printf("\nNhap gia tri cua so thu hai : ");
    scanf("%d", &num2);
	printf("\nNhap loai bieu thuc muon tinh (Hoac chon 'e' de ket thuc chuong trinh) : ");
	fflush(stdin);
	scanf("%c", &bieuthuc);
	switch(bieuthuc)
	{
	case '+' : tinhtong(num1, num2);
	break;
	case '-' : tinhhieu(num1, num2);
	break;
	case '*' : nhan(num1, num2);
	break;
	case '/' : chia(num1, num2);
	break;
	case 'e' : printf("\nExit");
	break;
	default : printf("\nKhong co bieu thuc ");
	break;	
	}
}
int tinhtong(int num1, int num2)
{
	printf("\nTong hai so la : %d ", num1+num2);
}
int tinhhieu(int num1, int num2)
{
	printf("\nHieu hai so la : %d ", num1-num2);
}
int nhan(int num1, int num2)
{
	printf("\nTich hai so la : %d ", num1*num2);
}
float chia(int num1, int num2)
{
	printf("\nThuong hai so la : %f ", (float)num1/num2);
}
