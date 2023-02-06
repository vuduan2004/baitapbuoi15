/* Thời gian: 16h30 - 17h20
Xây dựng Menu chương trình bao gồm các bài sau.
 Menu in ra như sau
 (sự lựa chọn được lặp lại đến khi chọn 4):
1. Thông tin gia đình
2. Số chia hết cho 5
3. Thông tin sinh viên thi môn C
4.Thoát
Bài 1: Nhập vào tên, ngày sinh, địa chỉ của bố  em.
 In ra tất cả thông tin vừa nhập.
Bài 2: Viết chương trình nhập 1 dãy số nguyên dương từ 1-n.
Liệt kê các số chia hết cho 5
Tính tổng các số chia hết cho 5
Bài 3: Xây dựng chương trình như sau:
 Thông tin Sinh viên thi môn C
    Mời nhập số lượng sinh viên:
    Nhập mảng điểm thi môn C của từng sinh viên: ….
  Xuất thông tin Sinh Viên
    Số lượng Sinh Viên là :  ……
    Đếm số lượng sinh viên có điểm thi>=5:……
    Vị trí các sinh viên có điểm thi thấp nhất
*/

#include <stdio.h>
int main()
{
  int choice;
  do
  {
    printf("1.thong tin gia dinh\n");
    printf("2.So chia het cho 5\n");
    printf("3.Thong tin sinh vien thi mon C\n");

    printf("4.Thoat\n");
    printf("Moi nhap su lua chon\n");
    scanf("%d", &choice);
   
    switch (choice)
    {
    case 1:
      printf("1.thong tin gia dinh\n");
      char name[30], address[30];
      int day, month, year;
      printf("Moi nhap Ho & Ten");
      gets(name);
      fflush(stdin);
      scanf("%d %d %d", &day, &month, &year);
      fflush(stdin);
      printf("Moi nhap vao dia chi:");
      gets(address);
    
      printf("\nHo & Ten:%s", name);
      printf("\nNgay sinh:%d %d %d", day, month, year);
      printf("\nDia chi la:%s", address);

      break;
    case 2:
      printf("2.So chia het cho 5\n");
      int n;
      printf("Nhap vao phan tu n");
      scanf("%d",&n);
      for (int i = 1; i < n; i++)
      {
      if (i %5 ==0)
      {
        printf("cac so chia het cho 5:%d",i);
      }
      
      }
      
      
      
      break;
    case 3:
      printf("3.Thong tin sinh vien thi mon C\n");
      break;
    case 15:

      break;

    default:
      printf("Khong co trong lua chon\n");
      break;
    }

  } while (choice != 15);
}




