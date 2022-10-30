#include"public.hpp"
class Secondry : public Public
{
    vector<dept> departments;

    timing Timing_opd;
    map<pair<string, string>, bool> credentials_admins;

public:
    Secondry()
    {
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;
        // creating database for admins which will be present in each hospital separetely

        // use of department class
    }
    void get_details()
    {
       
    }

    void get_opd_details()
    {
        
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