#include <iostream>
using namespace std;

// Dışardan girilen n sayısına kadar olan sayıların karelerinin toplamını hesaplayan program...

int main() {
	
    int n, i,kare
	int toplam=0;
	
	cout<<"Sayiyi giriniz: ";
	cin>>n;
	
	for (i=1 ;i<=n ;i++){	
		kare = i*i;
		toplam = toplam + (i*i);   
	}
	cout<<"Sonuc: "<<toplam<< endl;
	
	return 0;
}
