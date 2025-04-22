#include <bits/stdc++.h>
using namespace std;


void nhapMang(int a[], int &n) {
	cout << "nhap so phan tu n: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuatMang(int a[], int n) {

	cout << "day so co " << n << " phan tu: ";
		for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void soDuongchiahetcho3(int a[], int n) {
	
	cout << "day so duong chia het cho 3 la: ";
	for(int i = 0; i < n; i++) {
		if((a[i] % 3 == 0) && a[i] > 0) cout<< a[i] << " "; 
	}
}

void mangNgaunhien(int a[], int &n) {
	srand(time(0));
	cout << "nhap so phan tu n: ";
	cin >> n;
	for(int i =0; i < n; i++) {
	
		a[i] = rand()%100;
	}
	cout << "mang ngau nhien ";
	xuatMang(a, n);
}


int main () {
	int n;
	int a[100];
	
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	soDuongchiahetcho3(a, n);
	cout << endl;
	mangNgaunhien(a, n);
	
	return 0;
}


