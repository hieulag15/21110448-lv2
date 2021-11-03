#include<iostream>
#include<math.h>
using namespace std;

bool Kiemtra(int n){
	if (n < 2) return false;
	int sqr = sqrt(n);
	if (sqr*sqr == n)
		return true;
	return false;
}

int main() {
	int n, count = 0;
	cout<<"Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		if (Kiemtra(i))
			count++;
	}
	cout<<"So luong so chinh phuong la: "<<count;
	return 0;
}

