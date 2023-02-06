#include<stdio.h>
int a, b;// biến cục bộ
// có giá trị trả về, không có tham số truyền vào
int tinhTong(){
    printf("Moi nhap a,b=");
    scanf("%d %d",&a,&b);
    return a+b;

}
int tinhTich(int a, int b, int c){
    printf("Nhap a, b, c= ");
    scanf("%d %d %d ",&a ,&b ,&c);
    return a*b*c;
}

int main(){
    printf("Tong la:%d",tinhTong());
    printf("Tich la: %d",tinhTich(a,b,c));
}