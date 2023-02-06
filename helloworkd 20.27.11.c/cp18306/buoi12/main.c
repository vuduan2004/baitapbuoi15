#include <stdio.h>
// CHUỖI là %S
int main()
{
    /*
    nhập và họ và tên, tuổi, địa chỉ
    ngày tháng năm sinh, cung hoàng đạo
    */
    // nguyễn tử quốc doanh
    char name[50], address[50], country[50];
    int age, day, month, year;
    printf("\n moi nhap ha va ten: ");
    gets(name);
    printf("ten la: %s", name);
    // tuổi
    printf("\nmoi nhap Tuoi cua Ban: ");
    scanf("%d", &age);
    fflush(stdin); // xoá bộ nhớ dệm(khoảng trắng)
    printf("Tuoi la: %d", age);
    //địa chir
    printf("\nnhap dia chi cua ban: ");
    gets(address);
    printf("dia chi la: %s", address);
    // ngày tháng năm sinh
    printf("\nmoi nhap vao ngay sinh: ");
    scanf("%d %d %d ", &day, &month, &year);
    
    printf("Ngay sinh: %d/%d/%d", day, month, year);
    // nhap thanh pho
    printf("\nmoi nhap thanh pho: ");
    fflush(stdin);
    gets(country);
    printf(" thanh pho: %s", country);
}





