#include <iostream>
 using namespace std;
/*
 2 3 4 5 6
 3 5 7 9 11
 4 7 10 13 16
 5 9 13 17 21
 6 11 16 21 26
 Yukarıdaki çıktıyı veren program...
*/

int main() {
	int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5 ;j++){
        	cout<< i*j+1<< " ";	
		}
	cout<< endl;	
    }
	return 0;
}
