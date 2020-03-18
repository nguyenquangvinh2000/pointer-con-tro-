#include <iostream>
using namespace std;
struct thongtin
{
  char *hoten;
  char *sodienthoai;
  char *email;
  int namsinh;
};
int main2()
{
  int n;

  struct thongtin *dstt;
  cout<<"Ban cần nhập mấy người:";
  cin>>n;
  dstt = new thongtin[n];
  cin.ignore();

  cout<<"Nhập thông tin người thứ 1: "<<endl;
  cout<<"Họ tên:";
  dstt[0].hoten = new char[30];
  cin.getline(dstt[0].hoten,30);
  
  cout<<"Số điện thoại: ";
  dstt[0].sodienthoai= new char[11];
  cin.getline(dstt[0].sodienthoai,11);

  cout<<"email: ";
  dstt[0].email= new char[30];
  cin.getline(dstt[0].email,30);

  cout<<"Năm sinh:";
  cin>>dstt[0].namsinh;

  cout<<dstt[0].hoten<<"\t\t"<<dstt[0].sodienthoai<<"\t\t"<<dstt[0].email<<"\t\t"<<dstt[0].namsinh<<endl;

	return 0;
}
