#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 10;
  int b = 15;
  int *p1 = &b;
  cout << "alamat p1 sekarang :" <<p1 << "\n";
  
  int*p2 = p1;
  cout <<"alamat p2 sekarang :" << p2 << "\n";
  
  int c = 27 ;
  p1 = &c ;
  cout <<"alamat p1 sekarang : "<< p1 << "\n";
  
  a = *p1;
  cout <<"nilai a sekarang : " << a << "\n";
  
  int*p3 = &b ;
  cout <<"alamat p3 sekarang : "<< p3 << "\n";
  
  *p2 = 8 ;
  cout << *p2 << "\n";

  return 0;
}
