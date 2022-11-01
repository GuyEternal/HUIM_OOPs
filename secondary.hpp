#ifndef Secondary_HPP
#define Secondary_HPP
#include "public.hpp"
class Secondary : public Public
{
   
    private:
    map<pair<string, string>, bool> credentials_admins;

    public:
    vector<dept> departments;
    int num_of_beds;
    Secondary()
    {
        this->num_doc = 0;
        // creating database for admins which will be present in each hospital separetely

        // use of department class
    }
       void get_details()
    {


        cout<<"OPD timing for all deparments are \n";
        this->opd_timing.view_slots();
        cout<<endl;
        cout << "Available department and no of doctors are \n";
        for (auto i : departments)
        {
            cout << i.department_name << " " << i.num_doc << " "
                 << "\n";
        }
      int k = 0;
        for (auto i : departments)
        {  
            cout<<"For Department "<<i.department_name<<endl;
            i.timings.view_slots();
            cout<<"\n\n\n\n";
            k += i.num_doc;
        }
          cout<<endl;
        cout << "Total doctors in hospital are \n";
        this->num_doc = k;
        cout<<num_doc<<endl;
          cout<<"Contact Details of the hospital are \n";
          this->contact_details.get_contact();
    }

    void get_opd_details(string dept_name)
    {

        bool dept_present = false;
        for (auto i : departments)
        {
            if (i.department_name == dept_name)
            {
                 
                dept_present = true;
              this->opd_timing.view_slots();
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