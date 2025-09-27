#include <iostream>

using namespace std;

int main() {
	
	int x,y,h,k,a,b;
	float translasi1,translasi2,refleksi1,refleksi2;
	char rumus,yes;
	string ulang;
	
	cout << "======================================" << endl;
	cout << "|---------Zahwa Al Taqiyyah ---------|" << endl;
	cout << "======================================" << endl;
	
	
	do {
		cout << endl;
		cout << "=====================================" << endl;
		cout << "| Pilih rumus yang ingin di gunakan |" << endl;
		cout << "=====================================" << endl;
		cout << "| 1. Translasi                      |" << endl;
		cout << "| 2. Refleksi (Mx)                  |" << endl;
		cout << "| 3. Refleksi (My)                  |" << endl;
		cout << "| 4. Refleksi (My=x)                |" << endl;
		cout << "| 5. Refleksi (My=-x)               |" << endl;
		cout << "| 6. Refleksi (M0)                  |" << endl;
		cout << "| 7. Refleksi (My=h)                |" << endl;
		cout << "| 8. Refleksi (Mx=k)                |" << endl;
		cout << "=====================================" << endl;
		cout << "Masukan pilihan rumus = ";
		cin >> rumus;
		cout << endl;
		
		switch (rumus){
			case '1':
		cout << "===========================" << endl;
		cout << "|        Translasi        |" << endl;
		cout << "===========================" << endl;
		cout << "masukan nilai x : ";
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		cout << "masukan nilai a : ";
		cin >> a;
		cout << "masukan nilai b : ";
		cin >> b;
		
		translasi1 = x+a;
		translasi2 = y+b;
		cout << endl;
		cout << "Translsi x: " << translasi1 << endl;	
		cout << "Translsi y: " << translasi2 << endl;	
	    cout << "===========================" << endl;
		break;
		
		case '2':
	    cout << "===================================" << endl;
		cout << "|            Refleksi MX          |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		
		refleksi1 = x;
		refleksi2 = -y;
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '3':
	    cout << "===================================" << endl;
		cout << "|            Refleksi MY          |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		
		refleksi1 = -x;
		refleksi2 = y;
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '4':
	    cout << "===================================" << endl;
		cout << "|            Refleksi MY=x          |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		
		refleksi1 = y;
		refleksi2 = x;
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '5':
	    cout << "===================================" << endl;
		cout << "|            Refleksi My=-x          |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		
		refleksi1 = -y;
		refleksi2 = -x;
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '6':
	    cout << "===================================" << endl;
		cout << "|            Refleksi M0          |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		
		refleksi1 = -x;
		refleksi2 = -y;
		cout << endl;
	    cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '7':
	    cout << "===================================" << endl;
		cout << "|            Refleksi My=h        |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		cout << "masukan nilai h : ";
		cin >> h;
		
		refleksi1 = x;
		refleksi2 = 2*h-(y);
	
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		case '8':
	    cout << "===================================" << endl;
		cout << "|            Refleksi Mx=k        |" << endl;
		cout << "===================================" << endl;
		cout << "masukan nilai x : "; 
		cin >> x;
		cout << "masukan nilai y : ";
		cin >> y;
		cout << "masukan nilai k : ";
		cin >> k;
		
		refleksi1 = 2*k-(x);
		refleksi2 = y;
		cout << endl;
		cout << "Refleksi x : " << refleksi1 << endl;
		cout << "Refleksi y : " << refleksi2 << endl;
		cout << "===================================" << endl;
		break;
		
		default:
			cout << endl;
			cout << "-------------------------" << endl;
			cout << "PILIHAN TIDAK ADA DI MENU" << endl;
			cout << "-------------------------" << endl;
		}
			cout << endl;
			cout << "Ingin mengulang perhitungan (Y/N) = ";
			cin >> ulang;
			
	}while (ulang == "Y" | ulang == "y");
	
	cout << endl;
	cout << "===============================" << endl;
	cout << "|        SISTEM SELESAI       | " << endl;
	cout << "===============================" << endl;
}
		