#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return a + b;
};
int hieu(int a, int b){
    return a-b;
};

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
<<<<<<< HEAD
	if(phepToan=='+')
	cout<<"Tong= "<<tong(a,b);
	else if(phepToan=='-')
	cout<<"Hieu= "<<hieu(a,b);
=======
<<<<<<< HEAD
	if (phepToan == '+')
		cout << "Tong= " << tong(a, b);
=======
	if(phepToan=="+")
<<<<<<< HEAD
	cout << "Hieu= " + hieu(a,b);
=======
	count<<"Tong= "<<tong(a,b);
>>>>>>> 0903cb1daa7b2592cb579879e6b00d53740caf89
>>>>>>> 6bb75932f4e0261e565870df52b02f3a15c43fb1
>>>>>>> 45bf3d393173d5a552768a7fe1b5fb75fc8ca634
	system("pause");
	return 0;
}