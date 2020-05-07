#include <iostream>
using namespace std;

// Fibonacci Sayılarını dışarıdan girilen N sayısı kadar yazan program...

int main() {
	int n;
	int num1=0;
	int num2=1;
	int fib=0;
	
	cout<< "Lutfen dizinin kac elemanini gormek istediginizi giriniz: ";
	cin>>n;
	
	cout<<"num1: "<< num1<< endl<< "num2: "<< num2<< endl;
	for(int x=1; x<=n; x++){
		fib=num1+num2;
		cout<<fib<<" - ";
		num1=num2;
		num2=fib;	
	}
	
	return 0;
}
