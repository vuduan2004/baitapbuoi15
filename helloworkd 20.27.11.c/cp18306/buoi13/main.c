/*
Các hàm đối với chuỗi
1. đảo ngược chuỗi: strcmp()

2. sao chep chuỗi : strcpy()
3. so sánh chuỗi : strcmp()
-strc1= strc2 trả về 0
-sttrc1> strc2 trả về số > 0
str1<str2 trả về số < 0
5.độ dài chuỗi: strlen()
6. tìm chuỗi con trong chuỗi đã cho : strstr()

*/
#include <stdio.h>
int main()
{
    // sao cheps chuỗi
    char str1[20] = {'u', 'e', 'o', 'a', 'i'};
   
   
    char str2[20];
    strcpy(str2, str1);
    printf("Chuoi da sao chep: %s", str2);
    // đảo ngược
    char str[20]; // 50 lương phân tử tối da 20
    printf("Nhap chuoi: ");
    gets(str);
    printf("\nChuoi ban dau:%s", str);
   // printf("\nChuoi dao nguoc: %s", strrev(str));
    printf("Do dai chuoi la :%s",strlen(str));
    // so sánh chuỗi
    char str3[20], str4[20];
    printf("Chuoi 1 la: ");
    gets(str3);
    printf("Chuoi 2:");
    gets(str4);
    if (strcmp(str3, str4) == 0)
    {
        printf("Hai chuoi bang nhau");
    }
    else if (strcmp(str3, str4) > 0)
    {
        printf("chuoi 3 lon hon chuoi 4");
    }
    else
    {
        printf("Chuoi 3 nho hon chuoi 4");
    }
    // strstr()
    char str5[20]={'u','e','0','a','i'};
    char str6[20]='o';
    if (strstr(str5,str6)|-NULL)
    {
        printf("tim thay");
    }
    printf("Khong tim thay");
    
}