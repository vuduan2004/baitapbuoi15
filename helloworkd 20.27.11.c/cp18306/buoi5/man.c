#include <stdio.h>
// xây dựng menu
//   quan lau ngan beo
//   1 thit bo my
//   2 ech
//   3 rau
//   4 nuoc giai khat
//   5 hoa qua
//   6 thoat
int main()
{
    int choice;
    do
    {
        printf("   1 thit bo my  \n");
        printf(" 2 hoa qua  \n");
        printf(" 3rau  \n");
        printf("4 nuoc giai khaat  \n");
        printf("5 hoa qua  \n");
        printf("6 thoat  \n");
        printf("Moi nhap vao lua chon");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("thit bo my");
            break;
        case 2:
            printf("ech");
            break;
        case 3:
            printf("rau");
            break;
        case 4:
            printf("nuoc giai khat");
            break;
        case 5:
            printf("hoa qua");
            break;
        case 6:
            printf("thoat");
            break;

        default:
            break;
        }
    } while (choice = 6);
}

//  giá trị truyền vào có thể là :
//                 số nguyên, string, char
//                 break khi chạy xong nó sẽ dừng
// default khi tất cả case không thoả mãn thì sẽ trở về
// trong default