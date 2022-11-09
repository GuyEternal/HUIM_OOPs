#ifndef PRIVATE_HPP
#define PRIVATE_HPP
#include <bits/stdc++.h>
using namespace std;
#include "dept.hpp"
#include "hospital.hpp"

class Private : public hospital
{

public:
    vector<dept> departments;

    Private()
    {
        this->num_doc = 0;
    }
    void set_surgery_avail();
    void set_num_doc();
    void get_opd_avail();
    void get_surgery_avail();
    void get_details();
};

void Private::set_surgery_avail()
{
    if (is_admin() == true)
    {
        cout << "\t\tEnter department \n";
        string dept_name;
        cin >> dept_name;

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

void Private::get_opd_avail()
{
    this->opd_timing.view_slots();
}

void Private::get_surgery_avail()
{
    cout << "\t\tEnter department: ";
    string dept_name;
    cin >> dept_name;
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
void Private::get_details()
{
    cout << "\t\tName: " << name << endl;
    cout << "\t\tOrganisation: " << organization_name << endl;
    this->address.address_show();
    this->opd_timing.view_slots();
    cout << endl;
    int sum = 0;

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
    cout <<"\t\t"<< this->num_doc << endl;
    cout << "\t\tContact Details of the hospital are \n";
    this->contact_details.get_contact();
}

void Private::set_num_doc()
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

#endif
