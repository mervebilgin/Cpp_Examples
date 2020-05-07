#include <iostream>
using namespace std;

// Dışardan girilen n adet aritmetik sayının aritmetik ortalamasını bulan program...

int main() {
	
	int n, sayi;
	float toplam = 0, ortalama ;
	
	cout<< "Kac tane sayi giriceksiniz: ";
	cin>> n;
	
	for (int i=1 ;i<=n; i++){
		cout<< i<<". sayiyi giriniz: ";
		cin>> sayi;
		
		toplam += sayi; 
	}
	ortalama = toplam/n;
	
	cout << "Ortalama: "<< ortalama<< endl;
		
	return 0;
}
