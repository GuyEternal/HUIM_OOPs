#include "hospital.hpp"
#include <bits/stdc++.h>
#include "dept.hpp"
#include "timing.hpp"
using namespace std;

class Public : public hospital
{
    string trust_name;

public:

  void get_details()
    {
        cout << "trust name is " << this->trust_name << " ";
    }
};

class tertiary : public Public
{
    vector<dept> departments;
    timing Timing_surgeries;
    timing Timing_opd;
    map<pair<string, string>, bool> credentials_admins;


public:
     
    tertiary(){
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;
         // creating database for admins which will be present in each hospital separetely

        // use of department class 
    }
    void get_details()
    {
        // use of timing class and num_data
    }

    void get_opd_details()
    {
            // use of timing class
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

    void get_surgery_avail()
    { 
        // i have to use timing class
    }

    void set_surgery_avail()
    {
        cout << "Enter id and password\n ";
        string name, password;
        cin >> name >> password;
        if (!credentials_admins[{name, password}])
        {
            cout << "YOU ARE NOT ALLOWED TO DO CHANGES IN DATABASE\n";
            return;
        }
        // use of timing class
    }
};