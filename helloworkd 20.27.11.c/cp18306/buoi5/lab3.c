#include <stdio.h>
int main()
{
	int a, b;
	printf("Nhap a hoac b de kiem tra: ");

	scanf("%d%d", &a, &b);
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\nPhuong trinh vo so nghiem.");
		}
		else
		{
			printf("\nPhuong trinh vo nghiem.");
		}
	}

	else
	{
		printf("\nPhuong trinh co nghiem x = %d", -b / a);
	}
	
}
