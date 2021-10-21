#include "Address.h"

Address::Address()
{
    street1="";
    street2="";
    city="";
    district="";
    state="";
    country="";
    pin="";
}

Address::Address(string street1,string street2,string city,string district,string state,string country,string pin)
{
    this->street1=street1;
    this->street2=street2;
    this->city=city;
    this->district=district;
    this->state=state;
    this->country=country;
    this->pin=pin;
}

Address::Address(Address &a)
{
    this->street1=a.street1;
    this->street2=a.street2;
    this->city=a.city;
    this->district=a.district;
    this->state=a.state;
    this->country=a.country;
    this->pin=a.pin;
}

void Address::displayA()
{
    cout<<"\nAddress:\n"<<street1<<", "<<street2<<", "<<pin<<"\nCity: "<<city<<"\nDistrict: "<<district<<"\nState: "<<state<<"\nCountry: "<<country<<endl;
}

void Address::insertA()
{
    cout<<"\nEnter street 1: ";
    getline(cin,street1);
    cout<<"Enter street 2: ";
    getline(cin,street2);
    cout<<"Enter city: ";
    getline(cin,city);
    cout<<"Enter district: ";
    getline(cin,district);
    cout<<"Enter state: ";
    getline(cin,state);
    cout<<"Enter country: ";
    getline(cin,country);
    cout<<"Enter pin code: ";
    getline(cin,pin);
}
