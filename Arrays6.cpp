#include <iostream>
using namespace std;

//N elemanlı bir dizideki pozitif elemanların ortalamasını bulan program :)

int main() {
	
	int n,k;
	int i=0, dizi[n];
	float ort,toplam = 0;
	
	cout<< "N sayisini giriniz: ";
	cin>> n;
	
	for(i=0; i<n; i++){
		cout<< i+1<< ". elemani giriniz: ";
		cin>> dizi[i];
	}
	for(i=0; i<n; i++){
		if(dizi[i]>0){
			toplam += dizi[i];
			k++;
		}
	}
	cout<< "Toplam: "<< toplam<< endl;
	
	ort = toplam/k;
	cout<< "Ortalama: "<< ort;
		
	return 0;
}
