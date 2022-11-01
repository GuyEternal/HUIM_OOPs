#ifndef tertiary_HPP
#define tertiary_HPP
#include "public.hpp"
class tertiary : public Public
{
public:
    vector<dept> departments;
    timing surgery_timings;
    timing Timing_opd;
    map<pair<string, string>, bool> credentials_admins;

    tertiary()
    {
        pair<string, string> a = {"ankit", "iamankit"};
        credentials_admins[a] = true;
        // creating database for admins which will be present in each hospital separetely
        this->num_doc = 0;
        // use of department class
    }
    void get_details()
    {

        cout << "Name: " << name << endl;
        cout << "Organisation: " << organization_name << endl;
        this->address.address_show();
        // address.show();
        // contact_details.show();
        // opd_timing.show();
        int sum = 0;
        cout << "Available department and no of doctors are \n";
        for (auto i : departments)
        {
            sum += i.num_doc;
            cout << i.department_name << " " << i.num_doc << " "
                 << "\n";
        }

        for (auto i : departments)
        {
            cout << "\n\n";
            cout << "For department " << i.department_name << endl;
            i.timings.view_slots();
        }
        cout << endl;
        this->num_doc = sum;
        cout << "Total doctors in hospital are \n";
        cout << this->num_doc << endl;
        cout << "Contact Details of the hospital are \n";
        this->contact_details.get_contact();
    }

    void get_opd_details(string dept_name)
    {

        bool dept_present = false;
        for (auto i : departments)
        {
            if (i.department_name == dept_name)
            {
                cout << "For department " << dept_name << " OPD time slots are" << endl;
                i.timings.view_slots();
                dept_present = true;
            }
        }
        if (!dept_present)
        {
            cout << "This department is not present in hospital\n";
        }
    }

    void set_avail_doc()
    {
        cout << "Verify if you are admin or not\n";
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

    void get_surgery_avail()
    {
        cout << "Surgery slots in hospital " << this->name << endl;
        surgery_timings.view_slots();
    }

    void set_surgery_avail()
    {
        cout << "Verify if you are admin or not\n";
        cout << "Enter id and password\n ";
        string name, password;
        cin >> name >> password;
        if (!credentials_admins[{name, password}])
        {
            cout << "YOU ARE NOT ALLOWED TO DO CHANGES IN DATABASE\n";
            return;
        }

        surgery_timings.update_slots();
    }
};

#endif