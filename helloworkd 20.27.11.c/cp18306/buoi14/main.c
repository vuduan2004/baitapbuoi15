/*--ÔN TẬP---
Viết chương trình xây dựng Menu cho các bài sau:
Bài 1: Viết chương trình tính tổng:
S= 1+2+..+100
Bài 2: Viết chương trình nhập vào họ và tên,
ngày tháng năm sinh, địa chỉ của bố em. Sau đó in ra
Bài 3: Viết chương trình nhập vào 1 mảng số nguyên
từ bàn phím gồm n phần tử, tìm giá trị lớn nhất của mảng.
Bài 4:Viết chương trình sử dụng hàm trả về tính
thể tích hình hộp chữ nhật.*/
#include <stdio.h>
void Baitap1()
{
    int sum = 0;
    for (int i = 0; i < 101 i++)
    {
        sum += i;
    }
    printf(("Tong la:%d",sum);
}

void Baitap2()
{
    char name[30], address[30];
    int day, month, year;
    printf("Moi nhap vao Ho & Ten:");
    gets(name);

    printf("Moi nhap vao nam sinh:");

    scanf("%d %d %d", &day, &month, &year);
    fflush(stdin);
    printf("Moi nhap dia chi: ");
    gets(address);
    printf("\nHo & Ten: %s",name);
    printf("\nNgay sinh: %d %d %d",day,month,year);
    printf("\nDia chi la: %s",address);
}
void Baitap3()
{
    int n;
    printf("Moi nhap so luong phan tu cua mang");
    scanf("%d",&n);int arr[n];
    for (int  i = 0; i < n; i++)
    {
        printf("Moi nhap vao gtri:");
        scanf("%d",&arr[i]); 
    }
    // tìm Max
    int max= arr[0];
    for (int i = 0; i < 0; i++)
    {
    if ((arr[i]>max))
    {
    max=arr[i];
    }
    printf("Max la: %d",max);
    
    }
    
}
void Baitap4()
{
}
int main()
{
    int choice;
    do
    {
        // Thực hiện
        printf("1.Tinh tong :\n");
        printf("2.Thong tin bo:\n");
        printf("3.Mang\n");
        printf("4.Ham\n");
        printf("100.Thoat\n");
        printf("Moi nhap vao lua chon:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("1.Tinh tong :\n");

            void Baitap1();
            break;
        case 2:
            printf("2.Thong tin bo:\n");

            void Baitap2();
            break;
        case 3:
            printf("3.Mang\n");

            void Baitap3();
            break;
        case 4:
            printf("4.Ham\n");

            break;
        case 100:

            break;

        default:
            printf("Khong co trong lua chon");
            break;
        }
    } while (choice != 100);
}
