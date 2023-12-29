#include <iostream>

using namespace std;
/*
Kullanıcıdan iki sayı alarak kombinasyonunu 
ekrana bastıran fonksiyonu yazınız.
*/

int faktoriyel (int x){//3!=3*2*1=6
	int carpim = 1;//1 den başlatıyoruz çünkü sıfırdan başlarsa tüm çarpım sıfırlanır.
	for(int i=x; i>0; i--){
		carpim *= i;//carpim = carpim*i
	}
	return carpim;
}

int kombinasyon (int n, int r){//fonksiyon kümelerine istediğimiz kadar parametre atayabilmekteyiz.
	return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
}

int main()
{
	
	cout << faktoriyel(3) << endl;
	cout << faktoriyel(6) << endl;
	cout << kombinasyon(5,2) << endl;//atamış olduğumuz parametre sayısı kadar değer vermek zorundayız.
	
}
	
	
                   
                                                                                                  