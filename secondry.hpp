#ifndef Secondry_HPP
#define Secondry_HPP
#include"public.hpp"
class Secondry : public Public
{
    vector<dept> departments;

    timing Timing_opd;
    map<pair<string, string>, bool> credentials_admins;

public:
    Secondry()
    {
        
        // creating database for admins which will be present in each hospital separetely

        // use of department class
    }
       void get_details()
    {
        cout << "Available department and no of doctors are \n";
        for (auto i : departments)
        {
            cout << i.department_name << " " << i.num_doc << " "
                 << "\n";
        }

        for (auto i : departments)
        {
            i.timings.view_slots();
        }

        cout << "Total doctors in hospital are \n";
        cout << this->num_doc << endl;
    }

    void get_opd_details(string dept_name)
    {

        bool dept_present = false;
        for (auto i : departments)
        {
            if (i.department_name == dept_name)
            {
                i.timings.view_slots();
                dept_present = true;
            }
        }
        if (!dept_present)
        {
            cout << "This department is not present in hospital\n";
        }
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
        cout << "Enter department \n";
        string dept_name;
        cin >> dept_name;
        bool dept_present = false;
        for (auto i : departments)
        {
            if (i.department_name == dept_name)
            {
                cout << "Update no of doctors in " << i.department_name << "\n";
                int k = i.num_doc;
                cin >> i.num_doc;
                this->num_doc = this->num_doc - k + i.num_doc;
                dept_present = true;
            }
        }
        if (!dept_present)
        {
            cout << "This department is not present in hospital\n";
        }
        else
        {
            cout << "Successfully updated\n";
        }
    }
};
#endif