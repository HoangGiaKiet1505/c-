#include <bits/stdc++.h>
using namespace std;


//void nhapMang(int a[], int &n) {
//	cout << "nhap so phan tu n: ";
//	cin >> n;
//	for(int i = 0; i < n; i++) {
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//
//void xuatMang(int a[], int n) {
//
//	cout << "day so co " << n << " phan tu: ";
//		for(int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//}
//
//void soDuongchiahetcho3(int a[], int n) {
//	
//	cout << "day so duong chia het cho 3 la: ";
//	for(int i = 0; i < n; i++) {
//		if((a[i] % 3 == 0) && a[i] > 0) cout<< a[i] << " "; 
//	}
//}
//
//void mangNgaunhien(int a[], int &n) {
//	srand(time(0));
//	cout << "nhap so phan tu n: ";
//	cin >> n;
//	for(int i =0; i < n; i++) {
//	
//		a[i] = rand()%100;
//	}
//	cout << "mang ngau nhien ";
//	xuatMang(a, n);
//}
//
//
//int main () {
//	int n;
//	int a[100];
//	
//	nhapMang(a, n);
//	xuatMang(a, n);
//	cout << endl;
//	soDuongchiahetcho3(a, n);
//	cout << endl;
//	mangNgaunhien(a, n);
//	
//	return 0;
//}




//void nhapMang(int a[], int &n) {
//    cout << "Nhap so phan tu n: ";
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//}
//
//
//void timMax(int a[], int n) {
//    int max = a[0];
//    for (int i = 1; i < n; i++)
//        if (a[i] > max)
//            max = a[i];
//     cout << "Gia tri lon nhat trong mang: " << max << endl;
//}
//
//
//void timMin(int a[], int n) {
//    int min = a[0];
//    for (int i = 1; i < n; i++)
//        if (a[i] < min)
//            min = a[i];
//     cout << "Gia tri nho nhat trong mang: " << min << endl;
//}
//
//void timViTriX(int a[], int n, int x) {
//	cout << "Nhap gia tri x can tim: ";
//    cin >> x;
//    bool found = false;
//    for (int i = 0; i < n; i++)
//        if (a[i] == x) {
//            cout << "x xuat hien tai vi tri: " << i << endl;
//            found = true;
//   		} 
//   		if(found != true) cout << "Khong tim thay x trong mang" << endl;
//}
//
//
//int main() {
//    int a[100], n, x;
//    
//    nhapMang(a, n);
//	
//	timViTriX(a, n, x);
//	
//    return 0;
//}



//void boSungCuoi(int A[], int &n, int x) {
//    A[n] = x;
//    n++;
//}
//
//
//void xoaTaiViTri(int A[], int &n, int k) {
//    if (k < 0 || k >= n) {
//        cout << "Vi tri khong hop le" << endl;
//        return;
//    }
//    for (int i = k; i < n - 1; i++) {
//        A[i] = A[i + 1];
//    }
//    n--;
//}
//
//
//void chenTaiViTri(int A[], int &n, int x, int k) {
//    if (k < 0 || k > n) {
//        cout << "Vi tri khong hop le" << endl;
//        return;
//    }
//    for (int i = n; i > k; i--) {
//        A[i] = A[i - 1];
//    }
//    A[k] = x;
//    n++;
//}
//
//
//void inMang(int A[], int n) {
//    cout << "Mang hien tai: ";
//    for (int i = 0; i < n; i++) {
//        cout << A[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int A[1000]; 
//    int n, x, k;
//    
//    cout << "Nhap so phan tu ban dau: ";
//    cin >> n;
//    cout << "Nhap cac phan tu:\n";
//    for (int i = 0; i < n; i++) {
//        cin >> A[i];
//    }
//
//    inMang(A, n);
//
//
//    cout << "Nhap x can bo sung cuoi mang: ";
//    cin >> x;
//    boSungCuoi(A, n, x);
//    inMang(A, n);
//
// 
//    cout << "Nhap vi tri k can xoa: ";
//    cin >> k;
//    xoaTaiViTri(A, n, k);
//    inMang(A, n);
//
// 
//    cout << "Nhap gia tri x can chen: ";
//    cin >> x;
//    cout << "Nhap vi tri k can chen vao: ";
//    cin >> k;
//    chenTaiViTri(A, n, x, k);
//    inMang(A, n);
//
//    return 0;
//}
//



