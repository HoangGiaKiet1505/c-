#include <bits/stdc++.h>
using namespace std;


//void nhapSonguyen(int &n) {
//	do{
//		cout << "moi ban nhap so nguyen duong n: ";
//		cin >> n;
//		if(n <= 0) cout << "moi ban nhap lai";
//} while (n <= 0);
//}


//int tinhS1(int n) {
//	
//	int S1 = 0;
//	for(int i = 0; i <= n; i++) {
//		
//		if(i % 2 == 0) S1 += i;
//		
//	}
//return S1;
//}
//
//
//
//int tinhS2(int n) {
//	int S2 = 1;
//	for(int i = 1; i <= n; i++) {
//		S2 *= i;
//	}
//return S2;
//}
//
//
//int tinhS3(int n) {
//	int S3 = 0;
//	for (int i = 1; i <= n; i++) {
//			S3 += tinhS2(i);
//}
//return S3;
//}
//
//
//int tinhS4(int n) {
//	int S4 = 0;
//	for(int i = 1; i <= n; i++) {
//		if(i % 2 != 0) S4 += pow(i, 2);
//	}
//return S4;
//}
//
//void ketQua() {
//	int n;
//	nhapSonguyen(n);
//	cout << "S1 = " << " " << tinhS1(n) << endl;
//	cout << "S2 = " << " " << tinhS2(n) << endl;
//	cout << "S3 = " << " " << tinhS3(n) << endl;
//	cout << "S4 = " << " " << tinhS4(n) << endl;
//}

void nhapSonguyen(int &n) {
	do{
		cout << "moi ban nhap so nguyen duong n: ";
		cin >> n;
		if(n <= 0) cout << "moi ban nhap lai";
	} while (n <= 0);
}

bool soNguyento(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return true;
}


bool soChinhphuong(int n) {
	if(n < 3) return false;
	int sqr = sqrt(n);
	if(pow(sqr, 2) == n) {	
		return true;
	}else
		return false;
}


void soLonnhat(int n) {
	int soDu = n % 10;
	int max = soDu;
	int min = soDu;
	while(n > 0){ 
		soDu = n % 10;
		if(soDu > max) max = soDu;
		if(soDu < min) min = soDu;
		n /= 10;
	}
	cout << "chu so lon nhat la:" << " " << max << endl;
	cout << "chu so be nhat la: " <<  min <<endl;
}



int soDaonguoc(int n) {
	int soDao = 0;
	while(n > 0) {
		soDao = soDao * 10 + (n % 10);
		n /= 10;
	}
	return soDao;
}


void ketQua() {
	int n;
	nhapSonguyen(n);
	if(soNguyento(n)) {
	 		cout << n << " " << "la so nguyen to" << endl;
	}else
	 		cout << n << " " << "khong la so nguyen to" << endl;
	 		
	 		
	if(soChinhphuong(n)) {
			cout << n << " " << "la so chinh phuong" << endl;
	}else 
			cout << n << " " << "ko la so chinh phuong" << endl;
			
	soLonnhat(n);
	cout << "so dao nguwoc la: " << soDaonguoc(n);
}

int main () {
		
	ketQua();
	
return 0;
}
