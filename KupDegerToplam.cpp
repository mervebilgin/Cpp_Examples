#include <iostream>
using namespace std;

/* 1'den 999'a kadar olan tam sayılar içeresinden basamaklarının 
    küp değeri toplamı kendisine eşit olan program...*/

int main() {
	
	int i, kuptoplam, bir, on,yuz;
	
	for (i=1; i<=999; i++ ){
		
		yuz = i/100;
        on = (i/10)%10;
        bir = i%10;
      
        kuptoplam = bir*bir*bir+on*on*on+yuz*yuz*yuz;
   
        if (i == kuptoplam){
        	cout<< "i degeri: "<<i << endl;
		}    
    }
    
	return 0;
}
