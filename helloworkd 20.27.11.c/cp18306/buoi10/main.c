#include<stdio.h>
/*
hàm có giá trị về int, float, double,...
1 có tham số truyền 
vd: int tinhTong (int a , int b)
2 không có tham số truyền 
vd: int tinhTong()
cách sử dụng :
tên hàm phải có nghĩa
tên hàm phải chứa động từ*/
int tinhTong(){
    int a, b, c;
    printf("Moi nhap vao a, b, c ");
    scanf("%d %d %d",&a,&b,&c);
    return a+b+c;
}
/*int tinhTich(){

    int x, y, z;
    printf("Moi nhap vao x, y, z");
    scanf("a%d %d %d",&x,,&y,&z);*/

   

//}
 // tìm số lớn nhất trong 3 số a, b, c
 int tinhMax(int a,int b, int c){
    printf("\nMoi nao vao a, b, c=");
    scanf("%d %d %d ",&a,&b,&c);
    int max=a;
    if(b>max){
        max=b;

    }
    if(c>max){
        max=c;

    }
    return max;
    
 }


    int main(){
        //tingTong();
        int a,b,c;
        printf("Tong la %d",tinhTong());
        // tim max (a,b,c)
        printf("Max la %d",tinhMax(a,b,c));
        return 0;

    }
