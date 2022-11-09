#ifndef Hospital_HPP
#define Hospital_HPP
#include <iostream>
using namespace std;

#include "location.hpp"
#include "contact.hpp"
#include "timing.hpp"

class hospital
{
protected:
    map<pair<string, string>, bool> credentials_admins;

public:
    string name;
    string organization_name;
    location address;
    contact contact_details;
    timing opd_timing;
    int num_doc;

    hospital()
    {
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;
        pair<string, string> b = {"deep", "iamdeep"};
        credentials_admins[b] = true;
        pair<string, string> c = {"manav", "iammanav"};
        credentials_admins[c] = true;

        int num_doc = 0;
    }

    hospital(int num)
    {
        num_doc = num;
    }

    void virtual get_details() = 0;

    void get_contact();

    void get_opd_details();
    void set_avail_doc();
    void set_name(string t);
    void set_org_name(string t);
    void set_opd_timings();
    void set_address();
    void set_contact_details();

    bool is_admin();
};

void hospital ::set_avail_doc()
{

    if (is_admin() == true)
    {
        cout << "\t\tEnter no of doctors\n";
        cin >> this->num_doc;
    }
}

void hospital ::set_name(string t)
{
    if (is_admin() == true)
        this->name = t;
}

void hospital ::set_org_name(string t)
{
    if (is_admin() == true)
        this->organization_name = t;
}

void hospital::set_opd_timings()
{
    if (is_admin() == true)
    {
        this->opd_timing.update_slots();
    }
}

void hospital ::set_address()
{
    if (is_admin() == true)
    {
        this->address.update();
    }
}

void hospital ::set_contact_details()
{
    if (is_admin() == true)
    {
        this->contact_details.add_email();
        this->contact_details.add_phone();
    }
}

bool hospital ::is_admin()
{
    cout << "\t\tEnter id and password ";
    string name, password;
    cin >> name >> password;
    if (!credentials_admins[{name, password}])
    {
        cout << "\t\tYOU ARE NOT ALLOWED TO DO CHANGES IN DATABASE\n";
        return false;
    }
    else
        return true;
}
#endif