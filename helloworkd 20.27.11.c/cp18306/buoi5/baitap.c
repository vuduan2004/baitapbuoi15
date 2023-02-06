

#include <stdio.h>
#include <stdlib.h>

void Chucnang1()
{
}

void Chucnang2()
{
}

void Chucnang3()
{
}

void Chucnang4()
{
}

void Chucnang5()
{
}

void Chucnang6()
{
}

void Chucnang7()
{
}

void Chucnang8()
{
}

void Chucnang9()
{
}

void Chucnang10()
{
}

void Chucnang0()
{
	exit(0);
}

void Menu()
{
	int luachon;
	do
	{
		printf("\n-------------MENU---------------");
		printf("\n 1. Chuc nang so 1: Kiem tra so nguyen");
		printf("\n 2. Chuc nang so 2. Tim Uoc so chung va boi so chung cua 2 so");
		printf("\n 3. Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke");
		printf("\n 4. Chuc nang so 4: Tinh tien dien");
		printf("\n 5. Chuc nang so 5: Chuc nang doi tien");
		printf("\n 6. Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop");
		printf("\n 7. Chuc nang so 7: Xay dung chuong trinh vay tien mua xe");
		printf("\n 8. Chuc nang so 8: Sap xep thong tin sinh vien");
		printf("\n 9. Chuc nang so 9: Xay dung game FPOLY-LOTT (2/15)");
		printf("\n 10.Chuc nang so 10: Xay dung chuong trinh tinh toan phan so");
		printf("\n 0. Thoat");
		printf("\n--------------------------------");
		printf("\nMoi ban lua chon:");
		scanf("%d", &luachon);
		switch (luachon)
		{
		case 12:
		
			break;
		case 1:
			printf("Chuc nang so 1: Kiem tra so nguyen\n");
			Chucnang1();
			break;
		case 2:
			printf("Chuc nang so 2. Tim Uoc so chung va boi so chung cua 2 so\n");
			Chucnang2();
			break;
		case 3:
			printf("Chuc nang so 3: Chuong trinh tinh tien cho quan Karaoke\n");
			Chucnang3();
			break;
		case 4:
			printf("Chuc nang so 4: Tinh tien dien\n");
			Chucnang4();
			break;
		case 5:
			printf("Chuc nang so 5: Chuc nang doi tien\n");
			Chucnang5();
			break;
		case 6:
			printf("Chuc nang so 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
			Chucnang6();
			break;
		case 7:
			printf("Chuc nang so 7: Xay dung chuong trinh vay tien mua xe\n");
			Chucnang7();
			break;
		case 8:
			printf("Chuc nang so 8: Sap xep thong tin sinh vien\n");
			Chucnang8();
			break;
		case 9:
			printf("Chuc nang so 9: Xay dung game FPOLY-LOTT (2/15)\n");
			Chucnang9();
			break;
		case 10:
			printf("Chuc nang so 10: Xay dung chuong trinh tinh toan phan so\n");
			Chucnang10();
			break;
		}
	} while (luachon !=12);
}

int main()
{

	Menu();
}
