#include <iostream>
using namespace std;

/* Dýþarýdan girilen n elemanlý bir dizideki en büyük elemaný en küçük elemaný ve 
    en büyük elemanla en küçük eleman arasýndaki farký bulan program...*/

int main() {
	
    int enb, enk, i, n, fark;
    int dizi[n];
    cout<< "Dizinin Eleman Sayisini Giriniz :";
    cin>> n;
    
    for (i = 1; i <= n; i++){
        printf("%d . elememani giriniz : ", i);
        scanf("%d", &dizi[i]);
    }
    
    enk = dizi[1];
    enb = dizi[1];
    for (i = 2; i <= n; i++){
    	if (dizi[i] < enk){
    		enk = dizi[i];	
		}
		else if (dizi[i] > enb){
			enb = dizi[i];			
		}
    }
   
    fark = enb - enk;
    cout<<"\nEn buyuk sayi: "<<enb<< "\nEn kucuk sayi: "<<enk << "\nSayilar arasindaki fark: "<< fark;
	
	return 0;
}
