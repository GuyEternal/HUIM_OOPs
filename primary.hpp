
#ifndef primary_HPP
#define primary_HPP
#include "public.hpp"

class Primary : public Public
{
  

    
    map<pair<string, string>, bool> credentials_admins;

public:
    Primary()
    {
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;
           this->num_doc = 0;
    }
    void get_details()
    {
      cout<<"Name of Hospital is : "<<this->name;
       cout<<"No of Doctors are "<<num_doc<<endl;
       this->opd_timing.view_slots();
    }

    void get_opd_details()
    {
       this->opd_timing.view_slots();
    }

    void set_avail_doc(int num_doc)
    {

        cout << "Enter id and password ";
        string name, password;
        cin >> name >> password;
        if (!credentials_admins[{name, password}])
        {
            cout << "YOU ARE NOT ALLOWED TO DO CHANGES IN DATABASE\n";
            return;
        }

        this->num_doc = num_doc;
    }
};

#endif