#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap vao so luong phan tu cua mang");
    scanf("%d",&n);
    int arrNumber[n];// số lượng phần tử là n
    // nhập mảng
    for (int i = 0; i < n; i++)
    {
      printf("Moi nhap vao gia tri: ");
      scanf("%d",&arrNumber[i]);
    }
    
}