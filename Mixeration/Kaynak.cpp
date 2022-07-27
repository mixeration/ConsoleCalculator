#include <iostream>

using namespace std;

int main() {
	string islemTuru;
	cout << "Toplama islemi icin: +\nCikarma islemi icin: -\nCarpma islemi icin: X\nBolme islemi icin: /";
	cout << "\n";
	cin >> islemTuru;
	if (islemTuru == "+") {
		int birinciDeger;
		int ikinciDeger;
		cout << "Secilen tur: Toplama, ";
		cout << "Lutfen birinci degeri giriniz: ";
		cin >> birinciDeger;
		cout << "Lutfen ikinci degeri giriniz: ";
		cin >> ikinciDeger;
		int toplam = birinciDeger + ikinciDeger;
		cout << "Cevap: " << toplam << endl;
		return 0;
	}
	if (islemTuru == "-") {
		int birinciDeger;
		int ikinciDeger;
		cout << "Secilen tur: Cikarma, ";
		cout << "Lutfen birinci degeri giriniz: ";
		cin >> birinciDeger;
		cout << "Lutfen ikinci degeri giriniz: ";
		cin >> ikinciDeger;
		cout << "Cevap: " << (birinciDeger - ikinciDeger);
		return 0;
	}
	if (islemTuru == "x" || "X") {
		int birinciDeger;
		int ikinciDeger;
		cout << "Secilen tur: Carpma, ";
		cout << "Lutfen birinci degeri giriniz: ";
		cin >> birinciDeger;
		cout << "Lutfen ikinci degeri giriniz: ";
		cin >> ikinciDeger;
		cout << "Cevap: " << (birinciDeger * ikinciDeger);
		return 0;
	}
	if (islemTuru == "/") {
		int birinciDeger;
		int ikinciDeger;
		cout << "Secilen tur: Bolme, ";
		cout << "Lutfen birinci degeri giriniz: ";
		cin >> birinciDeger;
		cout << "Lutfen ikinci degeri giriniz: ";
		cin >> ikinciDeger;
		cout << "Cevap: " << (birinciDeger / ikinciDeger);
		return 0;
	} else {
		cout << "\nTanimi olmayan bir tur";
	}
}