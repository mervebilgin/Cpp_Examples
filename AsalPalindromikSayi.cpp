#include <iostream>
using namespace std;
/*10 bin ile 100 bin arasındaki asal sayılardan ters çevrildiğinde aynı sayı olan 
 asal sayıları ekrana yazan ve bu sayıların adetini yazan program :) */

int main()
{
	int sayac1=0,sayac2=0;
	int bir, on, yuz, bin, onbin, yeni_sayi;
	 
	for(int i=10000;i<100000;i++) 
	{
		sayac1=0; 
		for(int j=2;j<i;j++) {
			
			if(i%j==0)
			{
				sayac1++;  
				break;	
			}
		}
		if(sayac1==0){ 
		
			bir=i%10;              
		    on=(i/10)%10;          
	    	yuz=(i/100)%10;       
		    bin=(i/1000)%10;       
		    onbin=i/10000;        
		    
		    yeni_sayi = bir*10000 + on*10000 + yuz*100 + bin*10 + onbin*1 ; 
		    
		    if(bir==onbin && on==bin ){
		    	
			    cout<<i<<" "; 
			    sayac2++;     
		    }
	    }
	}
	cout<<endl;
	cout<<"1000-10000 arasinda toplam "<<sayac2<<" adet ters cevrildiginde ayni sayi olan asal sayi vardir."; 
	
	return 0;
}
