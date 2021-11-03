#include<iostream>
#include<math.h>
using namespace std;

bool Kiemtra(int n){
	if (n < 2 )	return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) {
			return false;
		}
	} return true;
}

int Dem(int n){
	int count = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0) {
			if (Kiemtra(i)){
				count++;
			}
		} 
	} return count;
}

int main() {
	int n;
	cin >> n;
	cout<<"So uoc la so nguyen to la: "<<Dem(n);
	return 0;
}

