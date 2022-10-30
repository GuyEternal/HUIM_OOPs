#include "public.hpp"

class Primary : public Public
{
    int num_doc;

    timing Timing_opd;
    map<pair<string, string>, bool> credentials_admins;

public:
    Primary()
    {
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;

    }
    void get_details()
    {
       cout<<"No of Doctors are "<<num_doc<<endl;
       Timing_opd.view_slots();
    }

    void get_opd_details()
    {
       Timing_opd.view_slots();
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