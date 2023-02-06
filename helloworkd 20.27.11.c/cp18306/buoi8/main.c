#include <stdio.h>
/*  hàm không trả về giá trị void
1 không có tham số truyền vào
VD : void tínhTong(); void tinhHieu();
Công thứC :<Kiểu hàm >();

2 có tham số truyền vào
VD : void tinhTong (int a,, int b, double c);
Công thức : <kiểu hàm > <tên hàm > (<tham số truyền vào >);
cách sử dụng :
- Đặt tên hàm chứa động từ
- Đặt tên hàm phải có nghĩa
 */
int a, b; // biến cục bộ để dùng chung
void nhapHaiSo()
{
    printf("Moi nhap vao a");
    sacnf("%d", &a);
    printf("Moi nhap vao b");
    scanf("%d", &b);
}
int main()
{
    int choice;
    do
    {
        printf("\n1. Tinh tong ");
        printf("2. Tinh hieu\n");
        printf("3. Tinh tich\n");
        printf("0. thoat");
        scanf("%d", &choice);
        switch 
        {
        case 1:
            nhapHaiSo();
            printf("%d+%d=%d", a, b, a + b);
            break;
        case 2:
            nhapHaiSo();
            printf("%d-%d=%d", a, b, a - b);
            break;
        case 3:
            nhapHaiSo();
            printf("%dx%d=%d", a, b, a * b);
            break;
        case 4:
            Thoat

                break;

        default:
            break;
        }
    } while (choice);
    {
    }
}