#include <iostream>

using namespace std;

int main() {
    int sayi,bir,on,yuz,bin;
    
    string birler[]={"0","1","2","3","4","5","6","7","8","9"};
    string onlar[]={"0","1","2","3","4","5","6","7","8","9"};
    string yuzler[]={"0","1","2","3","4","5","6","7","8","9"};
    string binler[]={"0","1","2","3","4","5","6","7","8","9"};
    baslat:
       cout << "Rakamlarini kontrol etmek istediginiz sayiyi giriniz : ";
       cin >> sayi;
    
    bir = (sayi%100)%10;
    on = (sayi%100)/10;
    yuz = (sayi/100)%10;
    bin = sayi/1000;
    
    if(sayi>0 && sayi<10000) {   	
      cout << sayi << " sayisinin rakamlarina ayrilmis hali : " << binler[bin] << " , " << yuzler[yuz] << " , " << onlar[on] << " , " << birler[bir] << endl;
      
      if(birler[bir] == onlar[on] && yuzler[yuz] == binler[bin] && birler[bir] == yuzler[yuz]) {
      	cout << "Bu sayinin tum basamaklarindaki rakamlar esittir." << endl;  }
	  
	  else if(birler[bir] == onlar[on] && birler[bir] == yuzler[yuz]) {
      	cout << "Bu sayinin birler (" << birler[bir] << "), onlar (" << onlar[on] << ") ve yuzler (" << yuzler[yuz] <<") basamagindaki rakamlar esittir." << endl;  } 
	  
	   else if(binler[bin] == onlar[on] && binler[bin] == yuzler[yuz]) {
      	cout << "Bu sayinin birler (" << birler[bir] << "), onlar (" << onlar[on] << ") ve yuzler (" << yuzler[yuz] << ") basamagindaki rakamlar esittir." << endl;  }
      
      else if(birler[bir] == onlar[on]) {
      	cout << "Bu sayinin birler (" << birler[bir] << ") ve onlar (" << onlar[on] << ") basamagindaki rakam esittir." << endl;  }
	  
	  else if(birler[bir] == yuzler[yuz]) {
      	cout << "Bu sayinin birler (" << birler[bir] << ") ve yuzler (" << yuzler[yuz] << ") basamagindaki rakam esittir." << endl;  }
	  
	  else if(birler[bir] == binler[bin]) {
      	cout << "Bu sayinin birler (" << birler[bir] << ") ve binler (" << binler[bin] << ") basamagindaki rakam esittir." << endl;  }
	  
	  else if(onlar[on] == yuzler[yuz]) {
      	cout << "Bu sayinin onlar (" << onlar[on] << ") ve yuzler (" << yuzler[yuz] << ") basamagindaki rakam esittir." << endl;  }
	  
	  else if(onlar[on] == binler[bin]) {
      	cout << "Bu sayinin onlar (" << onlar[on] << ") ve binler (" << binler[bin] << ") basamagindaki rakam esittir." << endl;  }
	  
	  else if(yuzler[yuz] == binler[bin]) {
      	cout << "Bu sayinin yuzler (" << yuzler[yuz] << ") ve binler (" << binler[bin] << ") basamagindaki rakam esittir." << endl; }
	  
	  else {
	  	cout << "Bu sayinin tum rakamlari farklidir." << "Tekrar deneyiniz..." << endl;  }  }
    
    else {
       cout << "Lutfen 0'dan 10.000'e kadar olan sayilari giriniz." << endl << "Tekrar deneyiniz..." << endl; goto baslat; }
	
system("pause");	
return 0; }
