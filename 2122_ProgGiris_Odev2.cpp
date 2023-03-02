/* Gelistirici:Meltem jülide ergül
 * Ögrenci No:B211200303
 * Odev No:2
 * Odev Aciklama:Matris Olusturma,matris islemleri ve sifreleme */
 
#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
 
using namespace std; 

int main()
{
	setlocale(LC_ALL, "turkish"); 
	srand(time(0));
	const int satir=5,sutun=5;
	int islem,toplam;
	char devam;
	int matrisA[satir][sutun];
	int matrisB[satir][sutun];
	int C[satir][sutun]; 
do
{
	
	cout<<"A Matrisinin elemanlarini giriniz:(0-10 arasi)"<<endl;
	//A  Matrisi
	for(int i=0; i<satir; i++)
	{
		for(int j=0; j<sutun; j++)
		{   
			cout <<"A["<< i <<"]"<< "[" << j << "]:";
			cin >> matrisA[i][j];
		}
	}
	cout << endl;
	
	// Girilen matrisin ekranda gösterilmesi
	cout << "A Matrisi:" << endl;
	for(int i=0; i<satir; i++)
	{
		for(int j=0; j<sutun; j++)
		{
			cout<<setw(5)<<matrisA[i][j];
		}
		cout << endl;
	}
	cout << "B Matrisi";
	cout << endl;
   //B Matrisi
   	for(int i=0;i<satir;i++)
	{
		for(int j=0; j<sutun; j++)
		{
			matrisB[i][j]=rand()%10 + 1;
		}
	}
		for(int i=0;i<satir;i++)
	{
		for(int j=0; j<sutun; j++)
		{
			cout<<setw(5)<<matrisB[i][j];
		
		}
		cout<<endl;
	}
 //islemler
   cout<<"\nISLEMLER:1-Toplama 2-Çarpma: ";
   cin>>islem;
   cout<<"SONUÇ MATRISI:"<<endl;
   if(islem==1)
   {
   //toplama
   	for(int i=0; i<satir; i++)
	{
		for(int j=0; j<sutun; j++)
		{
			C[i][j]=matrisA[i][j]+matrisB[i][j];
		cout<<setw(5)<<C[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}
else if(islem==2)  //carpma
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sutun; j++)
		{ toplam=0;
			for (int k = 0; k < satir; k++)
			{
				 toplam += matrisA[i][k] * matrisB[k][j];
			}
			C[i][j]=toplam;
	cout<<setw(5)<<C[i][j];
	}
	cout<<endl;
}

}
else
{
	cout<<"Yanlis Secim :(";
}
//sifreleme
int sat,sut;
cout<<"Sifrelenecek satir ve sutun numarasini giriniz(1-5 arasinda):";
cin>>sat>>sut;
	for(int i=0; i<satir; i++)
	{
		for(int j=0; j<sutun; j++)
		{ 
		if(i==sat || j==sut)
		{   
			cout<<setw(5)<<"*";
			  continue;
		}
			cout<<setw(5)<<C[i][j];
		
		}
		cout<<endl;
	}
	
cout<<"Devam Etmek Istiyor Musunuz?(E/H)";
cin>>devam;
}
while(devam=='e' || devam=='E');
cout<<"Hosca Kalin...";
}


