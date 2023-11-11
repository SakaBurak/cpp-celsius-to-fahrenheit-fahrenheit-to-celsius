#include<iostream>

using namespace std;

int main(){
	int secim;
	double sicaklik;
	
	cout<<"Celsius-Fahrenheit Donusturucusune Hosgeldiniz!"<<endl;
	cout<<"Lutfen yapacaginiz donusumu secin:"<<endl;
	cout<<"1-Celsius'tan Fahrenheit'a \n2-Fahrenheit'tan Celsius'a"<<endl;
	cin>>secim;
	
	if(secim==1){
		double fah;
		cout<<"Sicakliginizi Celsius cinsinden giriniz:";
		cin>>sicaklik;
		fah = (sicaklik*9/5)+32;
		cout<<sicaklik<<" Celsius = "<<fah<<" Fahrenheit'a esittir."<<endl;
	}
	else if(secim==2){
		double cel;
		cout<<"Sicakliginizi Fahrenheit cinsinden giriniz:";
		cin>>sicaklik;
		cel = (sicaklik-32)*5/9;
		cout<<sicaklik<<" Fahrenheit = "<<cel<<" Celsius'a esittir."<<endl;
	}
	else{
		cout<<"Hatali secim girdiniz!"<<endl;
	}
	return 0;
}
