#include<iostream>
using namespace std;
void ticket(float fprice,float price, string& country);
main()
{
	
	string country;
	float fprice,price;
	cout<<"Enter the country's name: ";
	cin>>country;
	cout<<"Enter the ticket price in dollars: $";
	cin >>price;
	ticket(fprice, price, country);
}

void ticket(float fprice,float price, string& country)
{
	if(country=="Pakistan")
	{
		fprice=price/20;
		fprice=price-fprice;
	}
	if(country=="India")
	{
		fprice=price/5;
		fprice=price-fprice;
	}
	if(country=="Ireland")
	{
		fprice=price/10;
		fprice=price-fprice;
	}
	if(country=="England")
	{
		fprice=price*30/100;
		fprice=price-fprice;
	}
	if(country=="Canada")
	{
		fprice=price*45/100;
		fprice=price-fprice;
	}

	cout <<"Final ticket price after discount: $"<<fprice<<endl;
}

	