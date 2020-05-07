#include <iostream>
using namespace std;

// Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların toplamını bulan program...

int main() {
	
	int n, i, toplam=0;
	cout<<"Sayiyi giriniz: ";
	cin>>n;
	
	for (i=1 ;i<=n ;i+=2){
		
		toplam = toplam+i;   
	}
	cout<<"Sonuc: "<<toplam<< endl;
	
	return 0;
}
