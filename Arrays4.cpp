#include <iostream>
using namespace std;
// Dışarıdan girilen N elemanlı bir diziyi tersine çeviren program :)
int main() {
	int i, n;
	int dizi[n];
	int terscevir[n];
	cout<< "N degerini giriniz: ";
	cin>> n;
	for(i=0; i<n; i++){
		cout<< i+1<< ". elemani giriniz: ";
		cin>> dizi[i];
	}
	for (int j=0; j<n; j++){
		
        terscevir[n-1-j]= dizi[j];
    }
    cout<< "Ters cevirilmis hali: "<< endl;
    cout<< "terscevir[]= {";
    for (int j = 0; j < n; j++){
    	
    	cout<< terscevir[j]<< ", ";	
	}
	cout<< "}";
	return 0;
}
