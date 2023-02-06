#include <stdio.h>
int main()
{
float diemTB;
    printf("Moi nhap vao diemTB: ");
    
    scanf("%f ", &diemTB);
    if (diemTB>=0 && diemTB<=10)
    {
        if (diemTB >= 9)
    {
        printf("hoc bong la 5000000");
    }
    else if (diemTB >=8)

    {
        printf("hoc bong la 3000000");
    }

    else if (diemTB >= 7 )
    {
        printf("hoc bong la 1000000");
    }
    }
    else
    {
        printf("Moi nhap lai");

    }
    
    }

