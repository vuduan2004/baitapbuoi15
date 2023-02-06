// #include <stdio.h>
// int main(){
//     int a,c;
//     float b = 10;
//     // nhap vao so nguyen n tu ban phim
//     //Buoc 1 ; Khai bao
//     int n;
//     printf("moi nhap vao moi nguyen n= ");
//     scanf("%d",&n);//Nhap vao n
//     printf ("Gia triuat ra gia cua n= %d",n);// x
/*
Bài 1: Viết chương trình nhập vào 3 số thực
- Tính tổng, hiệu, tích, thương cuẩ 3 số đó
- In ra màn hình kết quả
*/
// bước 1: khai boá
// bước 2: tính
// bước 3: in ra

#include <stdio.h>
int main()
{
    float x, y, z, sum, hieu;
    printf("Moi nhap vao gia tri x=1");
    printf("Moi nhap vao gia tri y=2");
    printf("Moi nhap vao gia tri z=3");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    sum = x + y + z;
    hieu = x - y - z;

    printf("Tong la = %3.f", sum);
    printf("Hieu la = %3.f",hieu);
    printf("Tich la = %3.f\n", tich);
    //Toan tu so sanh >,>=,<,<==,!=
    //True tra ve 1 , false tra ve 0
    
}