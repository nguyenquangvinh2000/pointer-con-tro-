//Bui thị Thùy Dung a36044

#include <iostream>
using namespace std;
struct thongtin
{
  char *hoten;
  int sdt;
  char *email;
  int namsinh; 
};
void nhap(struct thongtin *dstt,int n);
void In(struct thongtin *dstt,int n);
int main(){ 
  int n;
  struct thongtin *dstt;
  cout<<"Ban cần nhập mấy người:";
  cin>>n;
  cin.ignore();
  dstt = new thongtin[n];
  nhap(dstt,n);
  In(dstt,n);
  return 0;

}
void nhap(struct thongtin *dstt,int n){
  for(int i=0;i<n;i++){
    cout<<"Nhập thông tin người thứ "<<i+1<<endl;

    cout<<"Họ tên:";
    dstt[i].hoten = new char[30];
    cin.getline(dstt[i].hoten,30);

    cout<<"Số điện thoại:";
    cin>>dstt[i].sdt;

    cout<<"Năm sinh:";
    cin>>dstt[i].namsinh;

    cin.ignore();
    cout<<"Email:";
    dstt[i].email= new char[30];
    cin.getline(dstt[i].email,30);
    
  }
}
void In(struct thongtin *dstt,int n){ 
  for(int i=0;i<n;i++){
    cout<<dstt[i].hoten<<"\t\t"<<dstt[i].namsinh<<"\t\t"<<dstt[i].sdt<<"\t\t"<<dstt[i].email<<endl;
  }
}
