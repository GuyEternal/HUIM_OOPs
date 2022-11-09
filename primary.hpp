
#ifndef primary_HPP
#define primary_HPP
#include "public.hpp"

class Primary : public Public
{

    int num_of_beds;
public:
    Primary()
    {
        this->num_doc = 0;
    }
    friend void get_details(Primary &T);

    void set_num_beds();

};

// friend function implementation to demonstrate oops concepts
void get_details(Primary &T)
{
    cout << "\t\tName of Hospital is : " << T.name << endl;
    cout << "\t\tNo of Doctors are " << T.num_doc << endl;
    T.opd_timing.view_slots();
    cout << "\t\tNo of beds are: "<<T.num_of_beds <<endl;
    cout << "\t\t\n\n";
    cout << "\t\tContact Details of the hospital are \n";
    T.contact_details.get_contact();
    T.get_trust_name();
}

void Primary ::set_num_beds()
{
    if(is_admin() == true)
    {
        cout << "\t\tEnter no of beds\n";
        cin >> this->num_of_beds;
    }
}

#endif