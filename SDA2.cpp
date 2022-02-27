#include <iostream>
#include <string>
using namespace std;

int main (){
	
	int a = 10;
	int b = 15;
	int c = 27;
	cout << "nilai a: " << a << "\n";
	cout << "nilai b: " << b << "\n";
	cout << "nilai c: " << c << "\n";
	int*p1 = &a;
	int*p2 = &b;
	cout << "alamat p1 sekarang: " << p1 << "\n";
	cout << "alamat p2 sekarang: " << p2 << "\n";
	*p1 = c;
	cout << "nilai p1 sekarang: " << *p1 << "\n";
	a =*p2;
	b = 6 ;
	cout << "nilai a sekarang: " << *p2 << "\n";
	cout << "nilai b sekarang: " << b << "\n";
	int*p3 = &b;
	cout << "alamat p3 sekarang: " << p3 << "\n";
	p3 = &c;
	cout << "alamat p3 sekarang: " << p3 << "\n";
	*p1 = *p3;
	cout << "nilai p1 sekarang: " << *p1 << "\n";
  
	return 0;
}
