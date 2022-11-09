#ifndef Secondary_HPP
#define Secondary_HPP
#include "public.hpp"
class Secondary : public Public
{

public:
    vector<dept> departments;
    int num_of_beds;
    Secondary()
    {
        this->num_doc = 0;
        }
    void get_details();

    void get_opd_details(string dept_name);

    void set_num_beds();

    void set_avail_doc();
};

void Secondary ::get_details()
{

    cout << "\t\tOPD timing for all deparments are \n";
    this->opd_timing.view_slots();
    cout << endl;
    cout << "\t\tAvailable department and no of doctors are \n";
    for (auto &i : departments)
    {
        cout <<"\t\t"<< i.department_name << " " << i.num_doc << " "
             << "\n";
    }
    int k = 0;
    for (auto &i : departments)
    {
        cout << "\t\tFor Department " << i.department_name << endl;
        i.timings.view_slots();
        cout << "\t\t\n\n\n\n";
        k += i.num_doc;
    }
    cout << endl;
    cout << "\t\tTotal doctors in hospital are \n";
    this->num_doc = k;
    cout <<"\t\t"<< num_doc << endl;
    cout << "\t\tTotal no of beds are \n";
    cout <<"\t\t"<< this->num_of_beds << endl;
    cout << "\t\tContact Details of the hospital are \n";
    this->contact_details.get_contact();
    this->get_trust_name();
}

void Secondary ::get_opd_details(string dept_name)
{

    bool dept_present = false;
    for (auto &i : departments)
    {
        if (i.department_name == dept_name)
        {

            dept_present = true;
            this->opd_timing.view_slots();
        }
    }
    if (!dept_present)
    {
        cout << "\t\tThis department is not present in hospital\n";
    }
}

void Secondary ::set_avail_doc()
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
                cout << "\t\tEnter no of doctors in " << i.department_name << "\n";
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

void Secondary ::set_num_beds()
{
    if(is_admin() == true)
    {
        cout << "\t\tEnter no of beds\n";
        cin >> this->num_of_beds;
    }
}

#endif