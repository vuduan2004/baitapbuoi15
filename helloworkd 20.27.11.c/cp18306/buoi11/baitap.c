/*
Bài 1: in ra các phần tử mảng
Bài 2: Đảo ngươc mảng
Gợi Ý:
i=5;i<=0;
Bài 3;
Nhập vào từ bàn phím 1 mảng và tính tông
//FOR nhập 
tính tổng FOR
sum +=arrNumber[i]
*/
#include<stdio.h>
int main(){
int arrNumber[]={1,2,3,4,5};
for (int i = 0; i < 5; i++)
{
    printf("arrNumber la: %d\n",arrNumber[i]);
}
for (int i = 4; i >=0; i--)
{
   printf("gia tri la: %d\n",arrNumber[i]);
}

}