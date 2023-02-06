#include<stdio.h>
/*
    mảng     
1. mảng chứa tập các giá trị cùng kiểu 
vd: int arrNumber[]-{3, -6, 9, 0, 1};
công thức :
<kiểu dữ liệu> <tên mảng> []={<giá trị 1>,<giá trị 2>,......}
2. mảng chứa 1 kích thước tối đa 
VD : int arrNumber1[50]; số lượng phân tử tối đa 50

*/
int main(){
    // nguyễn văn cóc ngao
char name[50],address[50];
int age[10];
//printf("Index 2: %d",arrNumber[2]);
//printf("Index 4: %d",arrNumber[4]);
// in tất cả các phân tử trong mảng 
// vòng lặp FOR
int arrNumber[]={1,4,9,0,-6};

for (int  i = 0; i <5 ; i++)
{
    printf("Cac gtri la: %d\n",arrNumber[i]);
}
// nHẬP và in ra 1 mảng 
// Vòng lặp để nhập mảng 
int arrNumber1[5]={1,2,3,4,5};// khởi tạo mảng
for (int i = 0; i <5; i++)
{
    printf("Moi nhap gtri: ");
    scanf("%d",&arrNumber1[i]);
}
//in ra các phần tử FOR
for (int i = 0; i <5; i++)
{
    printf("arr[%d]=%d\n",i,arrNumber1[i]);
}

}