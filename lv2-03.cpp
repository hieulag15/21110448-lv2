#include<iostream>
#include<math.h>
using namespace std;

bool Kiemtra(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
	 	if (n % i == 0){
	 		return false;
	 	}
	 }
		return true;
}


int main() {
	int n,count = 0;
	cout<<"Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		if (Kiemtra(i))
			count += 1;
	}
	cout<<"so nguyen to co trong day la: "<<count;
	return 0;
}

