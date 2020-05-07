#include <iostream>
using namespace std;

// Dışardan girilen 3 sayının en büyüğünü bulan program...

int main() {	
	
	int x, y, z, enb;
	
	cout<< "3 tane sayiyi giriniz:"<< endl;
	cin>> x>> y>> z;
		
	if (x>y && x>z){
		enb = x;
	}	
	
    else if (y>x && y>z){
   	    enb = y;
    }
    else{
    	enb = z;  	
    }
    cout<< "En buyuk deger:"<< enb<< endl;     

	return 0;
}
