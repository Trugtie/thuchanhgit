#include <iostream>
using namespace std;
int tong(int a, int b){
	return a+b;
};
<<<<<<< HEAD
int hieu(int a, int b){
	return a-b;
};
=======
int hieu(int a, int b);
>>>>>>> 0903cb1daa7b2592cb579879e6b00d53740caf89

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(phepToan=="+")
<<<<<<< HEAD
	cout << "Hieu= " + hieu(a,b);
=======
	count<<"Tong= "<<tong(a,b);
>>>>>>> 0903cb1daa7b2592cb579879e6b00d53740caf89
	system("pause");
	return 0;
}