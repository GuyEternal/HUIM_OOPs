#ifndef tertiary_HPP
#define tertiary_HPP
#include "public.hpp"
class tertiary : public Public
{
public:
    vector<dept> departments;

    tertiary()
    {
        this->num_doc = 0;
    }
    void get_details();

    void get_opd_details(string dept_name);

    void get_surgery_avail();

    void set_avail_doc();

    void set_surgery_avail();
};

void tertiary::get_details()
{

    cout << "\t\tName: " << name << endl;
    cout << "\t\tOrganisation: " << organization_name << endl;
    cout << "\t\tTrust name :" << this->trust_name << endl;
    this->address.address_show();

    int sum = 0;
    cout << "\t\tOPD details for hospitals are as follows\n";
    this->opd_timing.view_slots();
    cout << "\t\t\n\n\n";
    cout << "\t\tAvailable department and no of doctors are \n";
    for (auto &i : departments)
    {
        sum += i.num_doc;
        cout <<"\t\t"<< i.department_name << " " << i.num_doc << " "
             << "\n";
    }

    for (auto &i : departments)
    {
        cout << "\t\t\n\n";
        cout << "\t\tFor department " << i.department_name << endl;
        i.timings.view_slots();
    }
    cout << endl;
    this->num_doc = sum;
    cout << "\t\tTotal doctors in hospital are \n";
    cout << this->num_doc << endl;
    cout << "\t\tContact Details of the hospital are \n";
    this->contact_details.get_contact();
    this->get_trust_name();
}

void tertiary::get_opd_details(string dept_name)
{

    bool dept_present = false;
    for (auto &i : departments)
    {
        if (i.department_name == dept_name)
        {
            cout << "\t\tFor department " << dept_name << " OPD time slots are" << endl;
            i.timings.view_slots();
            dept_present = true;
        }
    }
    if (!dept_present)
    {
        cout << "\t\tThis department is not present in hospital\n";
    }
}

void tertiary::set_avail_doc()
{
    if (is_admin() == true)
    {
        cout << "\t\tEnter department \n";
        string dept_name;
        cin >> dept_name;
        cout << dept_name << endl;
        bool dept_present = false;
        for (auto &i : departments)
        {
            if (i.department_name == dept_name)
            {
                cout << "\t\tUpdate no of doctors in " << i.department_name << "\n";
                int k = i.num_doc;
                cin >> i.num_doc;
                this->num_doc = this->num_doc - k + i.num_doc;
                dept_present = true;
            }
        }

        if (!dept_present)
        {
            cout << "\t\tThis department is not present in hospital\n";
        }
        else
        {
            cout << "\t\tSuccessfully updated\n";
        }
    }
}

void tertiary::get_surgery_avail()
{
    cout << "\t\tEnter department \n";
    string dept_name;
    cin >> dept_name;
    cout << dept_name << endl;
    bool dept_present = false;
    for (auto &i : departments)
    {
        if (i.department_name == dept_name)
        {
            i.timings.view_slots();
            dept_present = true;
        }
    }

    if (!dept_present)
    {
        cout << "\t\tThis department is not present in hospital\n";
    }
}

void tertiary::set_surgery_avail()
{
    if (is_admin() == true)
    {
        cout << "\t\tEnter department \n";
        string dept_name;
        cin >> dept_name;
        cout << dept_name << endl;
        bool dept_present = false;
        for (auto &i : departments)
        {
            if (i.department_name == dept_name)
            {
                i.timings.update_slots();
                dept_present = true;
            }
        }

        if (!dept_present)
        {
            cout << "\t\tThis department is not present in hospital\n";
        }
        else
        {
            cout << "\t\tSuccessfully updated\n";
        }
    }
}

#endif