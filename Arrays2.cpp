#include <iostream>
#include<math.h>
using namespace std;

// Dışarıdan girilen N elemanlı bir dizinin aritmetik, geometrik ve harmonik ortalamasını hesaplayan program...

int main() {
	
    int i,n;
    int dizi[n];
    float ariort,geoort,harort;

    ariort=0;
    geoort=1;
    harort=0.0;
    
    cout<< "Dizinin eleman sayisini giriniz: ";
    cin>> n;

    for(i=0;i<n;i++){
    	
    	cout<< "dizinin "<< i+1<< ". elemani: ";
    	cin>>dizi[i];
	}
         
    for(i=0;i<n;i++){
    	ariort=ariort+dizi[i];
        geoort=geoort*dizi[i];
        harort=harort+1.0/dizi[i];
    }
    
    ariort=ariort/n;
    geoort=pow(geoort,(1/n));
    harort=n/harort;
    
    cout<<endl;
    
    cout<< "Aritmetik Ortalama= "<< ariort<< endl;
    cout<< "Geometrik Ortalama= "<< geoort<< endl;
    cout<< "Harmonik Ortalama= "<< harort<< endl;	
		
    return 0;
}
