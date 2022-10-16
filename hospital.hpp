#include<iostream>
using namespace std;

#include <location.hpp>
#include <contact.hpp>
#include <timing.hpp>


class hospital
{
    private:
    
    hospital()
    {
        int num_doc = 0;
    }

    public:
    //Fields
    string name;
    string organization_name;
    location address;
    contact contact_details;
    timing opd_timing;
    int num_doc;

    //Member Functions or Methods
    void get_contact()
    {
        contact_details.show();
    }

    void get_details()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Organisation: "<<organization_name<<endl;
        // address.show();
        // contact_details.show();
        // opd_timing.show();
        cout<<"No, of doctors: "<<num_doc<<endl;
    }

    void set_name(string s)
    {
        this->name = s;
    }

    void set_org(string s)
    {
        this->organization_name = s;
    }

    void set_num_doc()
    {
        cout<<"Enter number of doctors: ";
        cin>>this->num_doc;
    }

    protected:

};