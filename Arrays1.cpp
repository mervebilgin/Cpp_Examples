#include <iostream>
#include<math.h>
using namespace std;

// Bir dizideki elemanların standart sapmasını ve varyansını bulan program...

int main() {
	
    int i,n;
    int dizi[n];
    float ariort,stsapma,varyans;
    
    ariort=0;
    varyans=0;
    
    cout<< "Dizinin eleman sayisini giriniz: ";
    cin>> n;

    for(i=0;i<n;i++){
    	
    	cout<< "Dizinin "<< i+1<< ". elemani: ";
        cin>> dizi[i];
    }
    
    for(i=0;i<n;i++){
    	ariort=ariort+dizi[i];	
	}
    ariort=ariort/n;
    
    for(i=0;i<n;i++){
    	varyans=varyans+(dizi[i]-ariort)*(dizi[i]-ariort);
	}
    varyans=varyans/n;
    stsapma=sqrt(varyans);
    
    cout<< endl;
    cout<< "Aritmetik Ortalama= "<< ariort<< endl;
    cout<< "Varyans= "<< varyans<< endl;
    cout<< "Standart Sapma= "<< stsapma <<endl;
    
    return 0;
}
