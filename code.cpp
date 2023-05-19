
 
#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
	int  Amalzeme[5]={20,58,70,63,80};
	int  rastgeledepoA[5];
    int  Asure[5]={2,5,7,6,8};
	int Aihtiyac[5];
	int gereklisureA[5];
	int rastgeleDepoDoldurA(int A);
	int  Bmalzeme[7]={10,30,45,58,70,10,12};
	int  Bsure[7]={1,3,4,5,7,10,12};
	int  Bihtiyac[7];
	int  rastgeledepoB[7];
	int gereklisureB[7];
	int rastgeleDepoDoldurB(int B);
	int  Cmalzeme[3]={20,82,40};
	int  Csure[3]={2,8,4};
	int  Cihtiyac[3];
	int  rastgeledepoC[3];
	int gereklisureC[3];
	int rastgeleDepoDoldurC(int C);
int Adepo(int toplamA);
int Bdepo(int toplamB);
int Cdepo(int toplamC);
int AdepoYaz();
int BdepoYaz();
int CdepoYaz();
int toplamsure();
int dosya();

int main()
{  	
	setlocale(LC_ALL,"Turkish");
	srand(time(0));
    AdepoYaz();
    BdepoYaz();
    CdepoYaz();
    toplamsure();
    dosya();
}

     int rastgeleDepoDoldurA(int A)
   {	
	for(int i=0;i<7;i++)
    {
    rastgeledepoA[i]=rand()%101;	
	}
return A;
   }

//ADEPO
int Adepo(int toplamA)
{   
 
	
    for(int i=0;i<5;i++)
	{
			if(Amalzeme[i]<=rastgeledepoA[i])
		{
			Aihtiyac[i]=0;
		}
		else
		{
			Aihtiyac[i]=Amalzeme[i]-rastgeledepoA[i];
		}
	
    }
    for(int i=0;i<5;i++)
	{if(Aihtiyac[i]>0)
   {
		gereklisureA[i]=Aihtiyac[i]*Asure[i];
		toplamA+=gereklisureA[i];
   }
   }   
		return toplamA;
   }
   
   //yazma
   int AdepoYaz()
   {
   	int toplamA=0;
   	
	cout<<"A parçasi bilgiler"<<endl;
	cout<<"Gerekli Malzeme:"<<endl;
	for(int i=0;i<5;i++)
	{
    cout<<"A"<<i+1<<"="<<Amalzeme[i]<<"br"<<setw(11);
    }   
    cout<<endl;
    cout<<"Depo Durumu:"<<endl;
	rastgeleDepoDoldurA(0);
	  for(int i=0;i<5;i++)
	{
    cout<<"A"<<i+1<<"="<<rastgeledepoA[i]<<"br"<<setw(11);
}
  cout<<endl;
   cout<<"ihtiyac duyulan malzeme:"<<endl;
   for(int i=0;i<5;i++)
	{
		if(Amalzeme[i]<=rastgeledepoA[i])
		{
			Aihtiyac[i]=0;
		}
		else
		{
			Aihtiyac[i]=Amalzeme[i]-rastgeledepoA[i];
			
		}
		
   cout<<"A"<<i+1<<"="<<Aihtiyac[i]<<"br"<<setw(11);

    }
    cout<<endl;
    	cout<<"Birim Basi Üretim Zamani:"<<endl;
	for(int i=0;i<5;i++)
	{
    cout<<"A"<<i+1<<"="<<Asure[i]<<"gün"<<setw(11);
}
  cout<<endl;
   cout<<"Toplam Gerekli Zaman:"<<endl;
   cout<<"A parçasi için gerekli zaman=";
   
    for(int i=0;i<5;i++)
	{if(Aihtiyac[i]>0)
   {
		gereklisureA[i]=Aihtiyac[i]*Asure[i];
		toplamA+=gereklisureA[i];
   }
   }   
		cout<<toplamA<<"gün"<<endl<<endl;  
   }
   
      int rastgeleDepoDoldurB(int B)
   {
	for(int i=0;i<7;i++)
    {
    rastgeledepoB[i]=rand()%101;	
	}
return B;
   }
//B DEPO
int Bdepo(int toplamB)
{  
    for(int i=0;i<7;i++)
	{
		
	if(Bmalzeme[i]<=rastgeledepoB[i])
		{
			Bihtiyac[i]=0;
		}
		else
		{
			Bihtiyac[i]=Bmalzeme[i]-rastgeledepoB[i];
		}
	
    }
    for(int i=0;i<7;i++)
	{if(Bihtiyac[i]>0)
   {
		gereklisureB[i]=Bihtiyac[i]*Bsure[i];
		toplamB+=gereklisureB[i];
   }
   }   
		return toplamB;
   }
   
   
   
   
//BdepoYazma
int BdepoYaz()
{
	int toplamB=0;
	cout<<"B parçasi bilgiler"<<endl;
	cout<<"Gerekli Malzeme:"<<endl;
	for(int i=0;i<7;i++)
	{
    cout<<"B"<<i+1<<"="<<Bmalzeme[i]<<"br"<<setw(6);
    }   
    cout<<endl;
    cout<<"Depo Durumu:"<<endl;
  rastgeleDepoDoldurB(0);
    for(int i=0;i<7;i++)
	{
    cout<<"B"<<i+1<<"="<<rastgeledepoB[i]<<"br"<<setw(6);
}
cout<<endl;

   cout<<"ihtiyac duyulan malzeme:"<<endl;
    for(int i=0;i<7;i++)
	{
		if(Bmalzeme[i]<=rastgeledepoB[i])
		{
			Bihtiyac[i]=0;
		}
		else
		{
			Bihtiyac[i]=Bmalzeme[i]-rastgeledepoB[i];
			
		}
		
   cout<<"B"<<i+1<<"="<<Bihtiyac[i]<<"br"<<setw(6);

    }
    cout<<endl;
    cout<<"Birim Basi Üretim Zamani:"<<endl;
	for(int i=0;i<7;i++)
	{
    cout<<"B"<<i+1<<"="<<Bsure[i]<<"gün"<<setw(6);
}
  cout<<endl;
   cout<<"Toplam Gerekli Zaman:"<<endl;
   cout<<"B parçasi için gerekli zaman=";
   
    for(int i=0;i<7;i++)
	{if(Bihtiyac[i]>0)
   {
		gereklisureB[i]=Bihtiyac[i]*Bsure[i];
		toplamB+=gereklisureB[i];
   }
   }   
		cout<<toplamB<<" gün"<<endl<<endl;
}

//c depo
 int rastgeleDepoDoldurC(int C)
   {
	for(int i=0;i<3;i++)
    {
    rastgeledepoC[i]=rand()%101;	
	}
return C;
   }

int Cdepo(int toplamC)
{   
    for(int i=0;i<3;i++)
	{
		if(Cmalzeme[i]<=rastgeledepoC[i])
		{
			Cihtiyac[i]=0;
		}
		else
		{
			Cihtiyac[i]=Cmalzeme[i]-rastgeledepoC[i];
		}
	
    }

   
    for(int i=0;i<3;i++)
	{if(Cihtiyac[i]>0)
   {
		gereklisureC[i]=Cihtiyac[i]*Csure[i];
		toplamC+=gereklisureC[i];
   }
   }   
	return toplamC;
	
}
//CdepoYazma
int CdepoYaz()
{
int toplamC=0;
	cout<<"C parçasi bilgiler"<<endl;
	cout<<"Gerekli Malzeme:"<<endl;
	for(int i=0;i<3;i++)
	{
    cout<<"C"<<i+1<<"="<<Cmalzeme[i]<<"br"<<setw(11);
    }   
    cout<<endl;
    cout<<"Depo Durumu:"<<endl;
	rastgeleDepoDoldurC(0);
	  for(int i=0;i<3;i++)
	{
    cout<<"C"<<i+1<<"="<<rastgeledepoC[i]<<"br"<<setw(11);
}
  cout<<endl;
   cout<<"ihtiyac duyulan malzeme:"<<endl;
    for(int i=0;i<3;i++)
	{
		if(Cmalzeme[i]<=rastgeledepoC[i])
		{
			Cihtiyac[i]=0;
		}
		else
		{
			Cihtiyac[i]=Cmalzeme[i]-rastgeledepoC[i];
			
		}
	
   cout<<"C"<<i+1<<"="<<Cihtiyac[i]<<"br"<<setw(11);
 
    }
    cout<<endl;
    cout<<"Birim Basi Üretim Zamani:"<<endl;
	for(int i=0;i<3;i++)
	{
    cout<<"C"<<i+1<<"="<<Csure[i]<<"gün"<<setw(11);
}
  cout<<endl;
   cout<<"Toplam Gerekli Zaman:"<<endl;
   cout<<"C parçasi için gerekli zaman= ";
   
    for(int i=0;i<3;i++)
	{if(Cihtiyac[i]>0)
   {
		gereklisureC[i]=Cihtiyac[i]*Csure[i];
		toplamC+=gereklisureC[i];
   }
   }   
		cout<<toplamC<<" gün"<<endl<<endl;
}

//Toplam süre hesaplama
int toplamsure()
{ 
int Amontaj=3,Bmontaj=7,Cmontaj=8,urunmontaj=12;
cout<<"Üretim için Toplam Gerekli Süre:"<<endl;
cout<<setw(5)<<"A parçasi:"<<setw(10)<<Adepo(0)<<" gün"<<endl;
cout<<setw(5)<<"A montaj:"<<setw(11)<<Amontaj<<" gün"<<endl;
cout<<setw(5)<<"B parcasi:"<<setw(10)<<Bdepo(0)<<" gün"<<endl;
cout<<setw(5)<<"B montaj:"<<setw(11)<<Bmontaj<<" gün"<<endl;
cout<<setw(5)<<"C parcasi:"<<setw(10)<<Cdepo(0)<<" gün"<<endl;
cout<<setw(5)<<"C montaj:"<<setw(11)<<Cmontaj<<" gün"<<endl;
cout<<setw(5)<<"Ürün montaj:"<<setw(8)<<urunmontaj<<" gün"<<endl;
int toplamlar=Adepo(0)+Bdepo(0)+Cdepo(0)+Amontaj+Bmontaj+Cmontaj+urunmontaj;
cout<<"------------------------------"<<endl;
cout<<setw(5)<<"Toplam="<<setw(13)<<toplamlar<<" gün";

}

//dosyaya Yazdirma
int dosya()
{
ofstream dosyaYaz;
dosyaYaz.open("B211200303.txt");
int Amontaj=3,Bmontaj=7,Cmontaj=8,urunmontaj=12;
dosyaYaz<<"Üretim için Toplam Gerekli Süre:"<<endl;
dosyaYaz<<setw(5)<<"A parçasi:"<<setw(10)<<Adepo(0)<<" gün"<<endl;
dosyaYaz<<setw(5)<<"A montaj:"<<setw(11)<<Amontaj<<" gün"<<endl;
dosyaYaz<<setw(5)<<"B parcasi:"<<setw(10)<<Bdepo(0)<<" gün"<<endl;
dosyaYaz<<setw(5)<<"B montaj:"<<setw(11)<<Bmontaj<<" gün"<<endl;
dosyaYaz<<setw(5)<<"C parcasi:"<<setw(10)<<Cdepo(0)<<" gün"<<endl;
dosyaYaz<<setw(5)<<"C montaj:"<<setw(11)<<Cmontaj<<" gün"<<endl;
dosyaYaz<<setw(5)<<"Ürün montaj:"<<setw(8)<<urunmontaj<<" gün"<<endl;
int toplamlar=Adepo(0)+Bdepo(0)+Cdepo(0)+Amontaj+Bmontaj+Cmontaj;
dosyaYaz<<"--------------------------------"<<endl;
dosyaYaz<<setw(5)<<"Toplam:"<<setw(13)<<toplamlar<<" gün";
dosyaYaz.close();
 
}
