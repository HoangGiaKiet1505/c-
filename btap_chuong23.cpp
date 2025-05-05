#include <bits/stdc++.h>
using namespace std;
//void nhapSonguyen(int &n) {
//	do{
//		cout << "moi ban nhap so nguyen duong n: ";
//		cin >> n;
//		if(n <= 0 || n >= 10) cout << "moi ban nhap lai" << endl;
//} while (n <= 0 || n >= 10);
//}
//
//int main() {
//	int n;	
//	nhapSonguyen(n);
//    
//	cout << "Cac so co 2 chu so sao cho tong 2 chu so bang " << n << " la: " << endl;
//
//    for (int i = 10; i < 100; i++) {
//        int hangChuc = i / 10;
//        int donVi = i % 10;
//        if (hangChuc + donVi == n) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    
//    
//    cout << "cac so co 2 chu so bang 2 lan tong cua 2 chu so do " << n << "la: " << endl;
//    
//    
//    for (int i = 10; i < 100; i++) {
//        int hangChuc = i / 10; 
//        int donVi = i % 10;  
//        if (hangChuc * donVi == 2 * (hangChuc + donVi)) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}
//void nhapSonguyen(int &n) {
//	do{
//		cout << "moi ban nhap so nguyen duong n: ";
//		cin >> n;
//		if(n <= 0) cout << "moi ban nhap lai" << endl;
//} while (n <= 0);
//}
//
//void nhapHaisonguyen(int &a, int &b) {
//	do{
//		cout << "moi ban nhap 2 so nguyen duong a va b: ";
//		cin >> a >> b;
//		if(a <= 0 || b <=0) cout << "moi ban nhap lai" << endl;
//} while (a <= 0 || b <=0);
//}
//
//void inUocSo(int n) {
//    cout << "Cac uoc so cua " << n << " la: ";
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
//
//
//int timUSCLN(int a, int b) {
//    while (a != b) {
//        if (a > b) {
//            a = a - b;
//        } else {
//            b = b - a;
//        }
//    }
//    return a; 
//}
//int main() {
//	//a
//	int n;
//	nhapSonguyen(n);
//	inUocSo(n);
//	//b
//	int a, b;
//    nhapHaisonguyen(a, b);
//    cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << timUSCLN(a, b) << endl;
//
//    return 0;
//}


//void inDayfibonacci(int n) {
//    int a = 0, b = 1, c;
//    cout << "15 so dau tien cua day Fibonacci: ";
//    for (int i = 0; i < n; ++i) {
//        cout << a << " ";
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    cout << endl;
//}
//
//int main() {
//    inDayfibonacci(15);
//    return 0;
//}


// bai 1 chuong 3


//float emux(float x, float epSilon) {
//    float sum = 1;     
//    float tu = 1;     
//    float mau = 1;    
//    int n = 1;
//
//    while (true) {
//        tu = tu * x;         
//        mau = mau * n;      
//        float soHang = tu / mau;
//
//        if (soHang < 0) soHang = -soHang;  
//
//        if (soHang < epSilon) 
//		break;
//
//        sum = sum + tu / mau; 
//        n++;
//    }
//
//    return sum;
//}
//
//
//int main() {
//	float x, epSilon;
//	   
//	cout << "Nhap gia tri x: ";
//    cin >> x;
//
//    cout << "Nhap epsilon: ";
//    cin >> epSilon;
//    
//
//    cout << "e^" << x << " = " << emux(x, epSilon);
//    return 0;
//}


// bai 2 chuong 3


//int hoanhao(int K) {
//    int tong = 0;
//    for (int i = 1; i <= K; i++) {
//        if (K % i == 0) {
//            tong += i;
//        }
//    }
//    return (tong == 2 * K); 
//}
//
//int main() {
//    int N;
//	
//	cout << "Nhap so nguyen N: ";
//    cin >> N;
//    cout << "Cac so hoan hao <= " << N << " la: ";
//    for (int i = 1; i <= N; i++) {
//        if (hoanhao(i)) {
//            cout << i << " ";
//        }
//    }
//
//    cout << endl;
//    return 0;
//}


//bai 3 chuong 3

//
//
//float tinhThue(float thuNhap) {
//    if (thuNhap <= 9000000)
//        return 0;
//    else if (thuNhap <= 20000000)
//        return (thuNhap - 9000000) * 0.25;
//    else
//        return (20000000 - 9000000) * 0.25 + (thuNhap - 20000000) * 0.40;
//}
//
//
//float tinhLuongThucTe(float thuNhap) {
//    return thuNhap - tinhThue(thuNhap);
//}
//
//
//void xuLyThuNhap() {
//    float thuNhap;
//    float tongThue = 0;
//    float tongLuong = 0;
//    int soNguoi = 0;
//
//    cout << "Nhap tong thu nhap cua tung nguoi (nhap 0 de ket thuc):" << endl;
//
//    while (true) {
//        cout << "Thu nhap nguoi thu " << soNguoi + 1 << ": ";
//        cin >> thuNhap;
//
//        if (thuNhap == 0)
//            break;
//
//        if (thuNhap < 0 || thuNhap > 50000000) {
//            cout << "Thu nhap khong hop le! Nhap lai (0 < thu nhap <= 50,000,000)." << endl;
//            continue;
//        }
//
//        float thue = tinhThue(thuNhap);
//        float luong = tinhLuongThucTe(thuNhap);
//		cout << fixed << setprecision(0); 
//        cout << "Thue: " << thue << " VND, Luong thuc te: " << luong << " VND" << endl;
//
//        tongThue += thue;
//        tongLuong += luong;
//        soNguoi++;
//    }
//
//    if (soNguoi > 0) {
//        cout << endl << "Trung binh thue: " << tongThue / soNguoi << " VND" << endl;
//        cout << "Trung binh luong thuc te: " << tongLuong / soNguoi << " VND" << endl;
//    } else {
//        cout << endl << "Khong co du lieu de tinh toan." << endl;
//    }
//}
//
//
//int main() {
//    xuLyThuNhap();
//    return 0;
//}





#include <iostream>
#include <cmath>
using namespace std;

// Hàm ki?m tra s? nguyên t?
bool LaSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

// Câu 1: In các s? nguyên t? t? 2 ð?n n
void SoNguyenTo() {
    int n;
    cout << "Nhap so nguyen lon hon 2: ";
    cin >> n;
    if (n <= 2) {
        cout << "Gia tri khong hop le!" << endl;
        return;
    }
    cout << "Cac so nguyen to tu 2 den " << n << " la:" << endl;
    for (int i = 2; i <= n; ++i)
        if (LaSoNguyenTo(i)) cout << i << " ";
    cout << endl;
}

// Ki?m tra nãm nhu?n
bool LaNamNhuan(int nam) {
    return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}

// Câu 2: Ki?m tra ngày h?p l?
void NgayHopLe() {
    int ngay, thang, nam;
    cout << "Nhap ngay, thang, nam (dd mm yyyy): ";
    cin >> ngay >> thang >> nam;
    if (nam < 1 || thang < 1 || thang > 12 || ngay < 1) {
        cout << "Ngay khong hop le!" << endl;
        return;
    }

    int soNgayToiDa;
    switch (thang) {
        case 2:
            soNgayToiDa = LaNamNhuan(nam) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            soNgayToiDa = 30;
            break;
        default:
            soNgayToiDa = 31;
    }

    if (ngay <= soNgayToiDa)
        cout << "Ngay hop le." << endl;
    else
        cout << "Ngay khong hop le!" << endl;
}

// Câu 3: Ki?m tra v? trí ði?m so v?i ðý?ng tr?n
void ViTriDiem() {
    double x, y;
    const double banKinh = 5.0;
    cout << "Nhap toa do diem A (x y): ";
    cin >> x >> y;
    double khoangCach = sqrt(x * x + y * y);
    if (khoangCach < banKinh)
        cout << "Diem nam trong duong tron." << endl;
    else if (khoangCach == banKinh)
        cout << "Diem nam tren duong tron." << endl;
    else
        cout << "Diem nam ngoai duong tron." << endl;
}

// Câu 4: Tính s? Fibonacci th? n
int TinhFibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void Fibonacci() {
    int n;
    cout << "Nhap n (0 < n < 40): ";
    cin >> n;
    if (n <= 0 || n >= 40) {
        cout << "Gia tri khong hop le!" << endl;
        return;
    }
    cout << "So Fibonacci thu " << n << " la: " << TinhFibonacci(n) << endl;
}

// Câu 5: Tính UCLN và BCNN
int TimUCLN(int a, int b) {
    while (b != 0) {
        int tam = a % b;
        a = b;
        b = tam;
    }
    return a;
}

void UCLN_BCNN() {
    int a, b;
    cout << "Nhap hai so nguyen duong: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Gia tri khong hop le!" << endl;
        return;
    }
    int ucln = TimUCLN(a, b);
    int bcnn = (a * b) / ucln;
    cout << "UCLN la: " << ucln << endl;
    cout << "BCNN la: " << bcnn << endl;
}

// Câu 6: T?m ch? s? l?n nh?t và nh? nh?t
void SoLonNhoNhat() {
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    if (n <= 0) {
        cout << "Gia tri khong hop le!" << endl;
        return;
    }
    int lonNhat = 0, nhoNhat = 9;
    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo > lonNhat) lonNhat = chuSo;
        if (chuSo < nhoNhat) nhoNhat = chuSo;
        n /= 10;
    }
    cout << "Chu so lon nhat: " << lonNhat << endl;
    cout << "Chu so nho nhat: " << nhoNhat << endl;
}

// Hàm chính
int main() {
    int chon;
    do {
        cout << endl;
        cout << "===== CHUONG TRINH TONG HOP =====" << endl;
        cout << "1. Cac so nguyen to (SoNguyenTo)" << endl;
        cout << "2. Kiem tra ngay hop le (NgayHopLe)" << endl;
        cout << "3. Vi tri diem A so voi duong tron (ViTriDiem)" << endl;
        cout << "4. So Fibonacci thu n (Fibonacci)" << endl;
        cout << "5. Tinh UCLN va BCNN (UCLN_BCNN)" << endl;
        cout << "6. Tim chu so lon nhat, nho nhat (SoLonNhoNhat)" << endl;
        cout << "7. Thoat chuong trinh" << endl;
        cout << "Chon chuc nang (1-7): ";
        cin >> chon;

        switch (chon) {
            case 1: SoNguyenTo(); break;
            case 2: NgayHopLe(); break;
            case 3: ViTriDiem(); break;
            case 4: Fibonacci(); break;
            case 5: UCLN_BCNN(); break;
            case 6: SoLonNhoNhat(); break;
            case 7: cout << "Ket thuc chuong trinh. Tam biet!" << endl; break;
            
        }
    } while (chon != 7);

    return 0;
}




