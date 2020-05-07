#include <iostream>
using namespace std;

// 7.. N elemanlý bir dizideki tek elemanlarý dizinin baþýna çift elemanlarý dizinin sonuna taþýyan program...

int main() {
	
	// TEKRAR BAKKK
	int n,dizi[n];
	int i;
	
	cout<< "N degeri giriniz:";
	cin>> n;

	for(i=0; i<n; i++){                                          // indis sayisini belirlediðimiz diziye sýrasýyla dýsardan sayý alýp kaydeden dongumuz
		cout<< i+1<< ". indis icin bir sayi giriniz: ";
		cin>> dizi[i];		
	}
	cout<<"tek sayilar: ";
	for(i=0; i<n; i++){                                   //diziye girilen sayilardan tek sayilarý bulan dongumuz
		
		if(dizi[i]%2==1){
			
			cout<<dizi[i]<< " ";
		}
	}
	cout<<endl;
	
	cout<<"cift sayilar ";
	for(int j=0; j<n; j++){                                    //diziye girilen sayilardan çift sayilari bulan dongumuz
		
		if(dizi[j]%2==0){
			cout<<dizi[j]<< " ";
			
		}
	}
	
	return 0;
}
