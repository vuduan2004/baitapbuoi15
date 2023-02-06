#include<stdio.h>
int main(){
/*
hàm có giá trị trả về
1. có tham số chuyền vào
 công thức : <kieu ham> <ten ham>(<tham số chuyền vào>)
2. không có tham số chuyền vào
công thức : <kiểu hàm><tên hàm>()
cách sử dụng :
- tên hàm phải có nghĩa
- tên hàm luôn có động từ đứng trước ở trong
vd : int tinh Tong(), float tinhHieu(float a,float b)
*/
int phepTru()
{
}
int phepTru1(int a, int b)
{
}
int phepTru2(){
    int a, b;
    printf("moi nhap vao so a=");
    scanf("%d",&a);
    printf("moi nhap vao so b= ");
    scanf("%d",&b);
    return a-b;
}
int tinhTich(){
    float a,b;
    printf("moi nhap vao so a= ");
    scanf("%f",&a);
    printf("moi nhap vao so b=");
    scanf("%f",&b);
    return a*b;

}


int main()
{
    int a = 7, b = 10;
    phepTru1(a, b);
    printf("\n%d -%d =%d", a, b, a - b);
    printf("\n%d",phepTru2());
    
   
    

    return 0;
}

}