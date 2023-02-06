/*
1. giải phương trình bậc 2 ax^2+bx+c=0 (a!=0)
Gợi ý
+ nếu a =0 ---->PT bậc nhất bx+c=0
+ nếu a!=0 ---> delta = b^2-4 *a*c
delta =0 -----> 2 nghiệm PB 
delta =0 ------> có nghiệm kép x1=x2=
delta <0 -----> vô nghiệm
void giaiPTBac2(int a, int b, int c,){

}
void giaiPTBac2(int a, int b, int c){
}
2. Tìm UCLN & BCNN của 2 số nguyên a và b
*/
#include<stdio.h>

int timUCLN(int a, int b)
{
    if (b== 0)
    return a;
    return timBCNN(int a, int b);

}
int main(){
int a,b;
printf("nhap a,b=");
printf("%d %d",&a &b);
printf("UCLN %d\n",timUCLN(a,b));
printf("BCNN %d\n",timBCNN(a,b));

}