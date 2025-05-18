//#include <bits/stdc++.h>
//using namespace std;
//
//
//void hoanDoi(int* a, int* b) {
//    int tam = *a;
//    *a = *b;
//    *b = tam;
//}
//
//
//int nhapSoLuongPhanTu() {
//    int n;
//    do {
//        cout << "nhap phan tu mang: ";
//        cin >> n;
//        if (n <= 0 || n > 100) {
//            cout << "vui long nhap lai" << endl;
//        }
//    } while (n <= 0 || n > 100);
//    return n;
//}
//
//
//void nhapMang(int* arr, int n) {
//    for (int i = 0; i < n; i++) {
//        cout << "nhap phan tu thu " << i + 1 << ": ";
//        cin >> *(arr + i);
//    }
//}
//
//
//void xuatMang(int* arr, int n) {
//    cout << "cac phan tu trong mnag: ";
//    for (int i = 0; i < n; i++) {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//
//
//void xuLyHoanDoi() {
//    int x, y;
//    cout << "Nhap so nguyên x: ";
//    cin >> x;
//    cout << "Nhap so nguyên y: ";
//    cin >> y;
//
//    hoanDoi(&x, &y);
//
//    cout << "Sau khi hoan doi: x = " << x << ", y = " << y << endl;
//}
//
//
//
//void xuLyMang() {
//	int n = nhapSoLuongPhanTu();
//    int arr[100];
//    nhapMang(arr, n);
//    xuatMang(arr, n);
//}
//
//
//int main() {
//    xuLyHoanDoi();
//    xuLyMang();
//    return 0;
//}


//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//void tinhToanHaiSoThuc() {
//    float *a = new float;
//    float *b = new float;
//
//    cout << "Nhap so thuc a: ";
//    cin >> *a;
//    cout << "Nhap so thuc b: ";
//    cin >> *b;
//
//    cout << "Tong: " << (*a + *b) << endl;
//    cout << "Hieu: " << (*a - *b) << endl;
//    cout << "Tich: " << (*a * *b) << endl;
//
//    if (*b != 0) {
//        cout << "Thuong: " << (*a / *b) << endl;
//    }else
//        cout << "Khong the chia cho 0\n";
//
//    delete a;
//    delete b;
//}
//
//
//int nhapSoLuong() {
//    int n;
//    do {
//        cout << "Nhap so luong phan tu: ";
//        cin >> n;
//    } while (n <= 0);
//    return n;
//}
//
//
//void taoMangNgauNhien(int* arr, int n) {
//    srand(time(0));
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 201 - 100; 
//    }
//}
//
//
//void xuatMang(int* arr, int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//
//bool tanCungLa6(int x) {
//    return abs(x) % 10 == 6;
//}
//
//
//void xuLyMang(int* arr, int n) {
//    int dem = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] % 4 == 0 && tanCungLa6(arr[i])) {
//            arr[i] *= 2;
//            dem++;
//        }
//    }
//    cout << "So phan tu chia het cho 4 va tan cung la 6: " << dem << endl;
//}
//
//int main() {
//    
//    tinhToanHaiSoThuc();
//
//    
//    int n = nhapSoLuong();
//    int* arr = new int[n];
//
//    taoMangNgauNhien(arr, n);
//    cout << "Mang ban dau: ";
//    xuatMang(arr, n);
//
//
//    xuLyMang(arr, n);
//    cout << "Mang sau khi xu ly: ";
//    xuatMang(arr, n);
//
//    delete[] arr; 
//
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//void soSanhChuoi(string s1, string s2) {
//    if (s1 == s2)
//        cout << "s1 bang s2\n";
//    else
//        cout << "s1 khac s2\n";
//}
//
//
//string noiChuoi(string s1, string s2) {
//    return s2 + s1;
//}
//
//bool chuaChuoi(string s1, string s2) {
//    int len1 = s1.length();
//    int len2 = s2.length();
//
//    if (len2 > len1) return false;
//
//    for (int i = 0; i <= len1 - len2; i++) {
//        bool match = true;
//        for (int j = 0; j < len2; j++) {
//            if (s1[i + j] != s2[j]) {
//                match = false;
//                break;
//            }
//        }
//        if (match) return true;
//    }
//
//    return false;
//}
//
//
//int main() {
//    string s1, s2;
//
//
//    cout << "Nhap chuoi s1: ";
//    getline(cin, s1);
//    cout << "Nhap chuoi s2: ";
//    getline(cin, s2);
//
//
//    cout << "Chuoi s1: " << s1 << "do dai: " << s1.length() << endl;
//    cout << "Chuoi s2: " << s2 << "do dai: " << s2.length() << endl;
//
//   
//    soSanhChuoi(s1, s2);
//
//    
//    string ketQuaNoi = noiChuoi(s1, s2);
//    cout << "Chuoi sau khi noi s1 vao s2: " << ketQuaNoi << endl;
//
//    
//    if (chuaChuoi(s1, s2)) {
//        cout << "s1 chua s2";
//    }else
//        cout << "s1 khong chua s2";
//
//    return 0;
//}
//

//#include <bits/stdc++.h>
//using namespace std;
//
//string Left(string str, int n) {
//    if (n > str.length()) n = str.length();
//    return str.substr(0, n);
//}
//
//string Right(string str, int n) {
//    if (n > str.length()) n = str.length();
//    return str.substr(str.length() - n, n);
//}
//
//void Nhap(string &str, int &n) {
//    cout << "Nhap chuoi: ";
//    getline(cin, str);
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//}
//
//void Xuat(const string &str, int n) {
//    cout << "Left(" << str << ", " << n << ") = " << Left(str, n) << endl;
//    cout << "Right(" << str << ", " << n << ") = " << Right(str, n) << endl;
//}
//
//int main() {
//    string chuoi;
//    int n;
//
//    Nhap(chuoi, n);
//    Xuat(chuoi, n);
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//
//struct PhanSo {
//    int tu;
//    int mau;
//}
//
//
//int UCLN(int a, int b) {
//    while (b != 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//
//
//void Nhap(PhanSo &ps) {
//    cout << "Nhap tu so: ";
//    cin >> ps.tu;
//    do {
//        cout << "Nhap mau so (khac 0): ";
//        cin >> ps.mau;
//    } while (ps.mau == 0);
//}
//
//
//void Xuat(PhanSo ps) {
//    cout << ps.tu << "/" << ps.mau << endl;
//}
//
//
//void RutGon(PhanSo &ps) {
//    int ucln = UCLN(abs(ps.tu), abs(ps.mau));
//    ps.tu /= ucln;
//    ps.mau /= ucln;
//    if (ps.mau < 0) {
//        ps.tu = -ps.tu;
//        ps.mau = -ps.mau;
//    }
//}
//
//
//PhanSo Cong(PhanSo a, PhanSo b) {
//    PhanSo kq;
//    kq.tu = a.tu * b.mau + b.tu * a.mau;
//    kq.mau = a.mau * b.mau;
//    RutGon(kq);
//    return kq;
//}
//
//
//PhanSo Tru(PhanSo a, PhanSo b) {
//    PhanSo kq;
//    kq.tu = a.tu * b.mau - b.tu * a.mau;
//    kq.mau = a.mau * b.mau;
//    RutGon(kq);
//    return kq;
//}
//
//
//PhanSo Nhan(PhanSo a, PhanSo b) {
//    PhanSo kq;
//    kq.tu = a.tu * b.tu;
//    kq.mau = a.mau * b.mau;
//    RutGon(kq);
//    return kq;
//}
//
//
//PhanSo Chia(PhanSo a, PhanSo b) {
//    PhanSo kq;
//    kq.tu = a.tu * b.mau;
//    kq.mau = a.mau * b.tu;
//    RutGon(kq);
//    return kq;
//}
//
//
//int main() {
//    PhanSo ps1, ps2;
//
//    cout << "Nhap phan so thu nhat:" << endl;
//    Nhap(ps1);
//
//    cout << "Nhap phan so thu hai:" << endl;
//    Nhap(ps2);
//
//    cout << endl << "Phan so 1: ";
//    Xuat(ps1);
//
//    cout << "Phan so 2: ";
//    Xuat(ps2);
//
//    cout << endl << "Tong: ";
//    Xuat(Cong(ps1, ps2));
//
//    cout << "Hieu: ";
//    Xuat(Tru(ps1, ps2));
//
//    cout << "Tich: ";
//    Xuat(Nhan(ps1, ps2));
//
//    cout << "Thuong: ";
//    Xuat(Chia(ps1, ps2));
//
//    return 0;
//}




