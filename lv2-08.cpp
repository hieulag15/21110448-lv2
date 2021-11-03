#include<iostream>
using namespace std;

int Giaithua(int n){
	if (n == 1) return 1;
	return n * Giaithua(n -1);
}

int Tinh(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += Giaithua(i);
	}
	return sum;
}
int main() {
	int n;
	cout<<"Nhap n: ";
	cin >> n;
	cout<<"Tong cua phep tinh la: "<<Tinh(n);
	return 0;
}

