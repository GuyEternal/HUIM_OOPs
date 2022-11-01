#ifndef Location_HPP
#define Location_HPP
#include<bits/stdc++.h>
using namespace std;
class location
{
  

    public:
    string building;
    string pin_code;
    string state;
    string district;
    string city;

   void address_show(){
    cout<<"Address is \n";
    cout<<this->state<<" "<<this->district<<" "<<this->city<<" "<<this->building<<" "<<this->pin_code<<endl;
    cout<<endl;
   }

    void update()
    {
        cout<<"Pls enter u to update building, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter building: ";
            cin>>s;
            this->building = s;
        }

        cout<<"Pls enter u to update pin_code, else enter q: ";
       
        cin>>c;
        if (c == 'u')
        {
            int s;
            cout<<"Enter pin_code: ";
            cin>>s;
            this->pin_code = s;
        }

        cout<<"Pls enter u to update state, else enter q: ";
       
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter state: ";
            cin>>s;
            this->state = s;
        }

        cout<<"Pls enter u to update district, else enter q: ";
       
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter district: ";
            cin>>s;
            this->district = s;
        }
        
        cout<<"Pls enter u to update city, else enter q: ";
       
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter city: ";
            cin>>s;
            this->city = s;
        }
    }
};

#endif