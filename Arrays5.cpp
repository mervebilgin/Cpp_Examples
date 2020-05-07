#include <iostream>
using namespace std;

// N elemanlı bir dizideki en küçük elemanı ve bu elemanın adresini bulan program...

int main() {
	
	int n, i;
	int dizi[n];
	cout<< "N sayisini giriniz: ";
	cin>> n;
	
	for(int i=0; i<n; i++){
		cout<< i+1<<". eleman: ";
		cin>> dizi[i];
	}
	int enk;
	enk = dizi[i];
	int adres = 0;
	
	for (int i=1; i<n; i++){
		if(enk>dizi[i]){			
            enk=dizi[i];
            adres=i;
    }
}
cout<< "En Kucuk Eleman= "<<dizi[i]<<endl<<"Adresi= "<< adres;
	
	return 0;
}
