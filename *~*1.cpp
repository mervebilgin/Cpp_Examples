#include <iostream>
using namespace std;

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Yukarıdaki çıktıyı veren program :)*/

int main() {
	
	int i,j,s=1;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			
			cout<<s<<" ";
			s= s+1;
		}
		cout<<endl;
	}
	
	return 0;
}
