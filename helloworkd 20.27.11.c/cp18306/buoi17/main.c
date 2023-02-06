/* Menu in ra như sau(sự lựa chọn được lặp lại đến khi chọn 4): (2.5 điểm)
+--------------------------Menu------------------------+
1. Thông tin cá nhân
2. Tính tổng từ 1 đến N
3. Thông tin Quạt
Bài 1: Nhập vào Họ Tên, Tuổi, Mã Số SV, Điểm môn C. In ra tất cả thông tin vừa nhập. (1,5 điểm)

4.Thoát*/

#include <stdio.h>
#include<string.h>
void baiTap1()
{
    char name[20], maSV[20];
    int Tuoi, maSv, diemC;
    printf("Nhap Ho & Ten");
    gets(name);
    printf("Nhap vao maSV");
    gets(maSV);
    printf("Nhap vao tuoi");
    scanf("%d", &Tuoi);
    fflush(stdin);
    printf("Nhap vao diem mon C");
    scanf("%d", &diemC);
    printf("\nNhap Ho & Ten:%s", name);
    printf("nhap vao", maSV);
    printf("Nhap vao tuoi:%d", Tuoi);
    printf("\n Nhap diem mon C:%d", diemC);
}
void baiTap2()
{
    int n, sum = 0;
    printf("\n moi nhap vao so phtu n :");
    scanf("%d", &n);
    fflush(stdin);
    for (int i = 0; i < n + 1; i++)
    {
        printf("\n nhap vao gtri :");
        scanf("%d", &i);
        sum += i;
    }
    printf("\n tong la : %d", sum);
    if (n % 2)
    {
        printf("\n so vua nhap la so chan :");
    }
    else
    {
        printf("\n so vua nhap la so le ");
    }
}

void baiTap3()
{
    
}

int main()
{
    int choice;
    do
    {
        printf("\n1.Thong tin ca nhan");
        printf("\n2.tinh tong tu 1 den n");
        printf("\n3.Thong tin quat");
        printf("\n4.Thoat");
        printf("\nMoi nhap vao ban phim");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            printf("\n1. thong tin ca nhan");
            baiTap1();
            break;
        case 2:
            printf("\n2.thong tin ca nhan");
            baiTap2();
            break;
        case 3:
            printf("\n3.thong tin Quat");
            baiTap3();
            break;
        case 4:

            break;

        default:
            break;
        }

    } while (choice != 4);
}
