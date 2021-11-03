#include<iostream>
using namespace std;

int Kiemtrasohoanhao( int n){
	if (n < 1) return false;
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0) {
			sum += i;
		}	
	}
	if (sum == n){
		return true;
	} else {
		return false;
	}
}


int main() {
	int n, count = 0;
	cout<<"Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		if (Kiemtrasohoanhao(i))
			count++;
	}
	cout<<"so luong so hoan hao la: "<<count;
	return 0;
}

