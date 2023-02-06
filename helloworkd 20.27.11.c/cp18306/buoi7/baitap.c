#include <stdio.h>

int main(){

	int a;
	printf("Nhap diem: ");
	scanf("%d",&a);
	if(a>=9)
	printf(" Hoc Luc Xuat sac");
	else{
		if(a>=8)
		printf("Hoc Luc Gioi");
		else{
			if(a>=7)
			printf("Hoc Luc Kha");
		}
		
	} 
	
	return 0;
}


    