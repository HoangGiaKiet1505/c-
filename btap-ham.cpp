#include <bits/stdc++.h>
using namespace std;
void nhapThang (int &thang) {
	do {
		cout << "moi ban nhap thang: ";
		cin >> thang;
		if(thang <= 0 || thang > 12) 
	    	cout << "nhap lai thang dung!\n";
	} while(thang <= 0 || thang > 12);
		
}

void nhapNam (int &nam) {
	do {
		cout << "moi ban nhap nam: ";				
		cin >> nam;
		if(nam <= 0 )
			cout << "nhap lai nam dung!\n";
	} while(nam <= 0);
	
}
bool laNamnhuan (int nam) {
	if((nam % 4 == 0) && (nam % 100 != 0))	return true;
	if(nam % 400 == 0)	return true;
	return false;
}
int soNgay (int thang, int nam) {
	switch(thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:	
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if(laNamnhuan(nam))	return 29;
			else	return 28;
			
		
	}
}
int main() {
	int thang, nam;

	nhapThang(thang);
	nhapNam(nam);
	cout << "thang " << thang << " nam " << nam << " co " << soNgay(thang, nam) << " ngay ";
	
	

	return 0;
}
