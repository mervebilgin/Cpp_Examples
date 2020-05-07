#include <iostream>
using namespace std;

// Çarpma işlemini kullanmadan iki sayının çarpımını bulan program...

int main() {
	
	int a, b, sonuc = 0;
	
	cout<< "1. sayiyi giriniz: ";
	cin>> a;
	cout<< "2. sayiyi giriniz: ";
	cin>> b;
	
	for (int i=1; i<=a; i++ ){
		sonuc += b;
	}
	
	cout<< a<<"*"<< b<<"=" <<sonuc;
	
	return 0;
}
