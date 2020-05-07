#include <iostream>
using namespace std;

/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
7 6 5 4 3 2 1
Yukarıdaki çıktıyı veren program :)*/

int main() {
	
	int i, j,n;
	cout<< "Satir sayisini giriniz: ";
	cin>> n;
	
	for(i=1; i<=n; i++){
		for(j=i; j>=1; j--){
			
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
