#include <stdio.h>
void baiTap1()
{
    char datnuoc[50];
    char thanhpho[50];
    char duong[50];
    int sonha;
    printf("Dat nuoc :");
    scanf("%s", datnuoc);
    printf("Thanh Pho:");
    scanf("%s", thanhpho);
    printf("duong:");
    scanf("%s", duong);
    printf("So Nha:");
    scanf("%d", &sonha);
}
void baiTap2()
{
    int diem;
    printf("Moi nhap vao diem tieng anh:");

    scanf("%d", &diem);
    if (diem >= 80)
    {
        printf("gioi");
    }
    else if (diem<80 &&diem>=50)
    {
        printf("kha");
    }
    else 
    {
        printf("truot");
    }
}
void baiTap3()
{
   int soLuongLapTop;
    int dem = 0;
    
    printf ("\nNhập vào số lượng Laptop: ");
    scanf ("%d", &soLuongLapTop);
    
    int dungLuongLapTop[soLuongLapTop];
    for (int i = 0; i < soLuongLapTop; i ++){
        printf ("\nLaptop[%d]: ", i);
        scanf ("%d", &dungLuongLapTop[i]);
    }
    printf ("\nSố lượng Laptop là: %d", soLuongLapTop);
    for ( int i = 0; i < soLuongLapTop; i ++) {
        if (dungLuongLapTop[i] > 256) {
            dem ++;
        }
    }
    printf ("\nCó %d Laptop dung lượng > 256", dem);
    int min = dungLuongLapTop[0];
    for (int i = 0; i < soLuongLapTop - 1; i ++) {
        if (min > dungLuongLapTop[i + 1]) {
            min = dungLuongLapTop[i + 1];
        }
    }
    printf ("\nDung lượng nhỏ nhất của LapTop là: %d", min);
    
}

int main()
{
    int choice;
    do
    {
        printf("\n0.Thong tin ca  nhan");
        printf("\n1.Diem xep loai");
        printf("\n2.Thong tin laptop");
        printf("\n3.Thoat");
        printf("\nMoi nhap vao lua chon:");
        scanf("%d", &choice);
fflush(stdin);
        switch (choice)
        {
        case 0:
            baiTap1();

            break;

        case 1:

            baiTap2();
            break;
        case 2:

            baiTap3();
            break;
        case 3:

            break;
        default:
            printf("\nNhap sai moi nhap lai");
            break;
        }
    } while (choice != 3);
}
