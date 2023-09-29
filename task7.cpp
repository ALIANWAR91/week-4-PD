#include<iostream>
#include<windows.h>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip)
{
	float price,discount;
	price=redRose*2+whiteRose*4.1+tulip*2.5;
	discount=price/5;
	discount=price-discount;
	cout<<"Original Price: $"<<price<<endl;
	if(price>200)
	{
		cout<<"Price after Discount: $"<<discount;
	}
	else
	{
		cout<<"No discount applied.";
	}
}

main()
{
	int redRose, whiteRose, tulip;
	cout <<"Red Rose: ";
	cin>> redRose;
	cout <<"White Rose: ";
	cin>> whiteRose;
	cout <<"Tulips: ";
	cin>> tulip;
	flowerShop(redRose, whiteRose, tulip);
}
	
	