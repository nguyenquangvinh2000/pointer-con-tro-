#include <iostream>
using namespace std;
struct thongtin
{
  char *hoten;
  int namsinh;
};
int main1()
{
  int n;

  struct thongtin *dstt;
  cout<<"Ban cần nhập mấy người:";
  cin>>n;
  dstt = new thongtin[n];//Giả sử n=2~ dstt[2] có kiểu thongtin
  cin.ignore();

  cout<<"Nhập thông tin người thứ 1:"<<endl;
  cout<<"Họ tên:";
  dstt[0].hoten = new char[30];
  cin.getline(dstt[0].hoten,30);
  
  cout<<"Năm sinh:";
  cin>>dstt[0].namsinh;

  cout<<dstt[0].hoten<<"\t\t"<<dstt[0].namsinh<<endl;

	return 0;
}
/*
Bài 1. Sửa lại code trên để có thêm thông tin về số điện thoại, email
Bai2. Nâng cấp bài 1, cho phép người dùng nhập đủ thông n người. 
Bài 3. Viết lại bài 2 để thành hàm nhập thông tin cho n người. 
*/
