#include <iostream>
using namespace std;

/*“pi” sayısının formulu aşağıdaki gibi olduğuna göre serinin paydasıdaki 
    ifade dışarıdan girildiğinde “pi” sayısını hesaplayan program...*/

int main() {
	
	int n, isaret;
    float i=3, s=1.0;
    
    cout<< "N sayisini Giriniz: ";                   
    cin>> n;
    
    isaret--;
    
    do{
    	s=s+isaret*(1/i);
    	i=i+2;
    	isaret=isaret*(-1);
	}
    while(i<=n);
     
    s=s*4;
    cout<<s;
    
	return 0;
}
