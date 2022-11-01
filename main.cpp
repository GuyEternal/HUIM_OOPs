#include <iostream>
using namespace std;
// Including all header files needed
#include "hospital.hpp"
#include "location.hpp"
#include "user.hpp"
#include "timing.hpp"
#include "contact.hpp"
#include "dept.hpp"
#include "public.hpp"
#include "primary.hpp"
#include "secondary.hpp"
#include "tertiary.hpp"
#include "private.hpp"
void menu()
{
    cout << "Enter 1 to Search in Primary Hospitals\n";
    cout << "Enter 2 to Search in Secodary Hospitals\n";
    cout << "Enter 3 to Search in Tertiary Hospitals\n";
    cout << "Enter 4 to Search in Private Hospitals\n";
    cout << "Enter -1 to leave \n";
}
void menu2()
{
    cout << "Enter c to search by city\n";
    cout << "Enter n to search by name\n";
    cout << "Enter s to stop searching\n";
}

void search_name(vector<Primary> &list1, vector<Secondary> &list2, vector<tertiary> &list3, vector<Private> &list4)
{
    menu();
    int option;
    cin >> option;
    string name_hospital;
    cout << "Enter name of hospital\n";
    cin.ignore();
    getline(cin, name_hospital);
    bool present = false;

    switch (option)
    {
    case 1:

        for (int i = 0; i < list1.size(); i++)
        {

            if (list1[i].name == name_hospital)
            {
                present = true;
                list1[i].get_details();
            }
        }
        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;

    case 2:

        for (int i = 0; i < list2.size(); i++)
        {

            if (list2[i].name == name_hospital)
            {
                present = true;
                list2[i].get_details();
            }
        }
        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    case 3:

        for (int i = 0; i < list3.size(); i++)
        {

            if (list3[i].name == name_hospital)
            {
                cout << "Present Hospitals are\n";
                present = true;
                cout << "Detail of this hospital are as follows\n";
                list3[i].get_details();
            }
        }
        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    case 4:

        for (int i = 0; i < list4.size(); i++)
        {

            if (list4[i].name == name_hospital)
            {
                present = true;
                list4[i].get_details();
            }
        }
        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    default:
        break;
    }
}

void search_city(vector<Primary> &list1, vector<Secondary> &list2, vector<tertiary> &list3, vector<Private> &list4)
{
    menu();
    int option;
    cin >> option;
    string name_hospital;
    cout << "Enter name of city\n";
    cin.ignore();
    getline(cin, name_hospital);
    bool present = false;
    int index = 1;
    vector<tertiary> res3;
    vector<Secondary> res2;
    vector<Primary> res1;
    vector<Private> res4;
    int serial_index;
    switch (option)
    {
    case 1:

        for (int i = 0; i < list1.size(); i++)
        {
            if (list1[i].address.city == name_hospital)
            {
                if (present == false)
                {
                    cout << "Available Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();

                res1.push_back(list1[i]);
                cout << index << ". " << list1[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "Enter serial no of hospital you want to get details\n";
            cin >> serial_index;
            res1[serial_index - 1].get_details();
        }

        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;

    case 2:

        for (int i = 0; i < list2.size(); i++)
        {
            if (list2[i].address.city == name_hospital)
            {
                if (present == false)
                {
                    cout << "Available Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();

                res2.push_back(list2[i]);
                cout << index << ". " << list2[i].name << endl;
                index++;
            }
        }
        if (present)
        {

            cout << "Enter serial no of hospital you want to get details\n";

            cin >> serial_index;
            res2[serial_index - 1].get_details();
        }

        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    case 3:

        for (int i = 0; i < list3.size(); i++)
        {
            // will print all hospitals having city name

            if (list3[i].address.city == name_hospital)
            {

                if (present == false)
                {
                    cout << "Available Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();

                res3.push_back(list3[i]);
                cout << index << ". " << list3[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "Enter serial no of hospital you want to get details\n";
            cin >> serial_index;
            res3[serial_index - 1].get_details();
        }

        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    case 4:

        for (int i = 0; i < list4.size(); i++)
        {

            if (list4[i].address.city == name_hospital)
            {
                if (present == false)
                {
                    cout << "Available Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();

                res4.push_back(list4[i]);
                cout << index << ". " << list3[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "Enter serial no of hospital you want to get details\n";
            cin >> serial_index;
            res4[serial_index - 1].get_details();
        }

        if (!present)
        {
            cout << "Hospital not found\n";
        }
        break;
    default:
        break;
    }
}
int main()
{

    {
        user A;
        cout << "Enter 1 to login or 2 to sign-up\n";
        int n;
        cin >> n;
        if (n == 1)
        {

            while (n)
            {
                cout << "Enter User name and password\n";
                string user_name;
                string password;
                cin >> user_name >> password;
                if (A.login(user_name, password))
                {
                    cout << "Success\n";
                    break;
                }
                else
                {
                    cout << "Retry or press 0 to sign-up or -1 to exit\n";
                    cin >> n;
                    if (n == -1)
                    {
                        exit(2);
                    }
                    if (n == 0)
                    {
                        A.sign_up();
                        break;
                    }
                }
            }
        }
        else
        {
            A.sign_up();
        }
    }

    // Dummy data

    // Initialize all the hospitals
    // Atleast 2 each of private hospitals, tertiary, primary, and secondary health centres should be made
    // Private
    Private h1;

    h1.name = "BIRLA Hospital Gwalior";
    h1.organization_name = "BIRLA Group of hospitals";
    h1.address.building = "BIRLA Building";
    h1.address.city = "Gwalior";
    h1.address.state = "Madha Pradesh";
    h1.address.pin_code = "471562";
    h1.opd_timing.time_slots.push_back("10-12");
    h1.opd_timing.time_slots.push_back("14-18");
    h1.opd_timing.day_avail.push_back("Monday");
    h1.opd_timing.day_avail.push_back("Tuesday");
    h1.opd_timing.day_avail.push_back("Wednesday");
    h1.opd_timing.day_avail.push_back("Thursday");
    h1.opd_timing.day_avail.push_back("Friday");
    h1.contact_details.email = "birlahospgwl@gmail.com";
    h1.contact_details.phone.push_back("6846845664");
    dept temp1, temp2, temp3;
    temp1.department_name = "ENT";
    temp1.num_doc = 67;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 75;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 67;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h1.department_list.push_back(temp1);
    h1.department_list.push_back(temp2);
    h1.department_list.push_back(temp3);

    h1.surgery_timings.time_slots.push_back("10-12");
    h1.surgery_timings.time_slots.push_back("14-18");
    h1.surgery_timings.day_avail.push_back("Monday");
    h1.surgery_timings.day_avail.push_back("Tuesday");
    h1.surgery_timings.day_avail.push_back("Wednesday");
    h1.surgery_timings.day_avail.push_back("Thursday");
    h1.surgery_timings.day_avail.push_back("Friday");
    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    Private h2;

    h2.name = "BIRLA Hospital Delhi";
    h2.organization_name = "BIRLA Group of hospitals";
    h2.address.building = "BIRLA Building";
    h2.address.city = "Delhi";
    h2.address.state = "Delhi";
    h2.address.pin_code = "021253";
    h2.opd_timing.time_slots.push_back("10-12");
    h2.opd_timing.time_slots.push_back("14-18");
    h2.opd_timing.day_avail.push_back("Monday");
    h2.opd_timing.day_avail.push_back("Tuesday");
    h2.opd_timing.day_avail.push_back("Wednesday");
    h2.opd_timing.day_avail.push_back("Thursday");
    h2.opd_timing.day_avail.push_back("Friday");
    h2.contact_details.email = "birlahospgwl@gmail.com";
    h2.contact_details.phone.push_back("6846845664");

    temp1.department_name = "ENT";
    temp1.num_doc = 90;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 83;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 78;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h2.department_list.push_back(temp1);
    h2.department_list.push_back(temp2);
    h2.department_list.push_back(temp3);

    h2.surgery_timings.time_slots.push_back("10-12");
    h2.surgery_timings.time_slots.push_back("14-18");
    h2.surgery_timings.day_avail.push_back("Monday");
    h2.surgery_timings.day_avail.push_back("Tuesday");
    h2.surgery_timings.day_avail.push_back("Wednesday");
    h2.surgery_timings.day_avail.push_back("Thursday");
    h2.surgery_timings.day_avail.push_back("Friday");

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();
    // 2 Private hospitals initialized

    // 2 Tertiary Health Centres Initializing
    tertiary h3;

    h3.name = "AIIMS Bhopal";
    h3.organization_name = "Government";
    h3.address.building = "AIIMS Campus";
    h3.address.city = "Bhopal";
    h3.address.state = "Madhya Pradesh";
    h3.address.pin_code = "458156";
    h3.opd_timing.time_slots.push_back("10-12");
    h3.opd_timing.time_slots.push_back("14-18");
    h3.opd_timing.day_avail.push_back("Monday");
    h3.opd_timing.day_avail.push_back("Tuesday");
    h3.opd_timing.day_avail.push_back("Wednesday");
    h3.opd_timing.day_avail.push_back("Thursday");
    h3.opd_timing.day_avail.push_back("Friday");
    h3.contact_details.email = "aiimsbhopal@aiims.com";
    h3.contact_details.phone.push_back("6846545664");
    temp1.department_name = "ENT";
    temp1.num_doc = 67;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 75;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 67;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h3.departments.push_back(temp1);
    h3.departments.push_back(temp2);
    h3.departments.push_back(temp3);

    h3.surgery_timings.time_slots.push_back("10-12");
    h3.surgery_timings.time_slots.push_back("14-18");
    h3.surgery_timings.day_avail.push_back("Monday");
    h3.surgery_timings.day_avail.push_back("Tuesday");
    h3.surgery_timings.day_avail.push_back("Wednesday");
    h3.surgery_timings.day_avail.push_back("Thursday");
    h3.surgery_timings.day_avail.push_back("Friday");
    h3.trust_name = "AIIMS";

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    tertiary h01;

    h01.name = "COAP Bhopal";
    h01.organization_name = "Government";
    h01.address.building = "COAP Campus";
    h01.address.city = "Bhopal";
    h01.address.state = "Madhya Pradesh";
    h01.address.pin_code = "458876";
    h01.opd_timing.time_slots.push_back("10-12");
    h01.opd_timing.time_slots.push_back("14-18");
    h01.opd_timing.day_avail.push_back("Monday");
    h01.opd_timing.day_avail.push_back("Tuesday");
    h01.opd_timing.day_avail.push_back("Wednesday");
    h01.opd_timing.day_avail.push_back("Thursday");
    h01.opd_timing.day_avail.push_back("Friday");
    h01.contact_details.email = "coapbhopal@coap.com";
    h01.contact_details.phone.push_back("687894564");
    temp1.department_name = "ENT";
    temp1.num_doc = 81;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 91;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 71;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h01.departments.push_back(temp1);
    h01.departments.push_back(temp2);
    h01.departments.push_back(temp3);

    h01.surgery_timings.time_slots.push_back("10-12");
    h01.surgery_timings.time_slots.push_back("14-18");
    h01.surgery_timings.day_avail.push_back("Monday");
    h01.surgery_timings.day_avail.push_back("Tuesday");
    h01.surgery_timings.day_avail.push_back("Wednesday");
    h01.surgery_timings.day_avail.push_back("Thursday");
    h01.surgery_timings.day_avail.push_back("Friday");
    h01.trust_name = "Central Government";

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    tertiary h4;

    h4.name = "SMIIA Bhopal";
    h4.organization_name = "Government";
    h4.address.building = "SMIIA Campus";
    h4.address.city = "Bhopal";
    h4.address.state = "Madhya Pradesh";
    h4.address.pin_code = "862156";
    h4.opd_timing.time_slots.push_back("10-12");
    h4.opd_timing.time_slots.push_back("14-18");
    h4.opd_timing.day_avail.push_back("Monday");
    h4.opd_timing.day_avail.push_back("Tuesday");
    h4.opd_timing.day_avail.push_back("Wednesday");
    h4.opd_timing.day_avail.push_back("Thursday");
    h4.opd_timing.day_avail.push_back("Friday");
    h4.contact_details.email = "smiiabhopal@smiia.com";
    h4.contact_details.phone.push_back("6879545664");
    temp1.department_name = "ENT";
    temp1.num_doc = 50;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 79;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 69;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h4.departments.push_back(temp1);
    h4.departments.push_back(temp2);
    h4.departments.push_back(temp3);

    h4.surgery_timings.time_slots.push_back("10-12");
    h4.surgery_timings.time_slots.push_back("14-18");
    h4.surgery_timings.day_avail.push_back("Monday");
    h4.surgery_timings.day_avail.push_back("Tuesday");
    h4.surgery_timings.day_avail.push_back("Wednesday");
    h4.surgery_timings.day_avail.push_back("Thursday");
    h4.surgery_timings.day_avail.push_back("Friday");
    h4.trust_name = "Central Government";

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    // Tertiary hospital initialization ends

    // Secondary hospital initialization begins
    Secondary h5;

    h5.name = "IMC Mumbai";
    h5.organization_name = "Government";
    h5.address.building = "IMC Campus";
    h5.address.city = "Mumbai";
    h5.address.state = "Maharashtra";
    h5.address.pin_code = "756912";
    h5.opd_timing.time_slots.push_back("10-12");
    h5.opd_timing.time_slots.push_back("14-18");
    h5.opd_timing.day_avail.push_back("Monday");
    h5.opd_timing.day_avail.push_back("Tuesday");
    h5.opd_timing.day_avail.push_back("Wednesday");
    h5.opd_timing.day_avail.push_back("Thursday");
    h5.opd_timing.day_avail.push_back("Friday");
    h5.contact_details.email = "imcmum@imc.com";
    h5.contact_details.phone.push_back("6846545664");
    temp1.department_name = "ENT";
    temp1.num_doc = 54;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 94;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 67;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h5.departments.push_back(temp1);
    h5.departments.push_back(temp2);
    h5.departments.push_back(temp3);

    h5.num_of_beds = 395;
    h5.trust_name = "Bharatiya Janta Trust";

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    Secondary h6;

    h6.name = "IMC Mumbai";
    h6.organization_name = "Government";
    h6.address.building = "IMC Campus";
    h6.address.city = "Mumbai";
    h6.address.state = "Maharashtra";
    h6.address.pin_code = "756912";
    h6.opd_timing.time_slots.push_back("10-12");
    h6.opd_timing.time_slots.push_back("14-18");
    h6.opd_timing.day_avail.push_back("Monday");
    h6.opd_timing.day_avail.push_back("Tuesday");
    h6.opd_timing.day_avail.push_back("Wednesday");
    h6.opd_timing.day_avail.push_back("Thursday");
    h6.opd_timing.day_avail.push_back("Friday");
    h6.contact_details.email = "imcmum@imc.com";
    h6.contact_details.phone.push_back("6846545664");
    temp1.department_name = "ENT";
    temp1.num_doc = 83;
    temp1.timings.time_slots.push_back("10-12");
    temp1.timings.time_slots.push_back("14-18");
    temp1.timings.day_avail.push_back("Monday");
    temp1.timings.day_avail.push_back("Tuesday");
    temp1.timings.day_avail.push_back("Wednesday");
    temp1.timings.day_avail.push_back("Thursday");
    temp1.timings.day_avail.push_back("Friday");

    temp2.department_name = "Pediatrics";
    temp2.num_doc = 94;
    temp2.timings.time_slots.push_back("10-12");
    temp2.timings.time_slots.push_back("14-18");
    temp2.timings.day_avail.push_back("Monday");
    temp2.timings.day_avail.push_back("Tuesday");
    temp2.timings.day_avail.push_back("Wednesday");
    temp2.timings.day_avail.push_back("Thursday");
    temp2.timings.day_avail.push_back("Friday");

    temp3.department_name = "Orthopedics";
    temp3.num_doc = 97;
    temp3.timings.time_slots.push_back("10-12");
    temp3.timings.time_slots.push_back("14-18");
    temp3.timings.day_avail.push_back("Monday");
    temp3.timings.day_avail.push_back("Tuesday");
    temp3.timings.day_avail.push_back("Wednesday");
    temp3.timings.day_avail.push_back("Thursday");
    temp3.timings.day_avail.push_back("Friday");

    h6.departments.push_back(temp1);
    h6.departments.push_back(temp2);
    h6.departments.push_back(temp3);

    h6.num_of_beds = 512;
    h6.trust_name = "Bharatiya Janta Trust";
    // Secondary hospital initialization ends
    //  Primary hospitals initialization begins

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();
    Primary h7;

    h7.name = "PMH Chakmoh";
    h7.organization_name = "Government";
    h7.address.building = "PMC Campus";
    h7.address.city = "Chakmoh";
    h7.address.state = "Himachal Pradesh";
    h7.address.pin_code = "658942";
    h7.opd_timing.time_slots.push_back("10-12");
    h7.opd_timing.time_slots.push_back("14-18");
    h7.opd_timing.day_avail.push_back("Monday");
    h7.opd_timing.day_avail.push_back("Tuesday");
    h7.opd_timing.day_avail.push_back("Wednesday");
    h7.opd_timing.day_avail.push_back("Thursday");
    h7.opd_timing.day_avail.push_back("Friday");
    h7.opd_timing.day_avail.push_back("Saturday");
    h7.contact_details.email = "pmhchakmoh@pmc.com";
    h7.contact_details.phone.push_back("9465138646");
    h7.num_doc = 2;
    h7.trust_name = "Bharatiya Janta Trust";
    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();
    Primary h8;

    h8.name = "PMH Jalgaon";
    h8.organization_name = "Government";
    h8.address.building = "PMH Campus";
    h8.address.city = "Jalgaon";
    h8.address.state = "Maharashtra";
    h8.address.pin_code = "946548";
    h8.opd_timing.time_slots.push_back("10-12");
    h8.opd_timing.time_slots.push_back("14-18");
    h8.opd_timing.day_avail.push_back("Monday");
    h8.opd_timing.day_avail.push_back("Tuesday");
    h8.opd_timing.day_avail.push_back("Wednesday");
    h8.opd_timing.day_avail.push_back("Thursday");
    h8.opd_timing.day_avail.push_back("Friday");
    h8.opd_timing.day_avail.push_back("Saturday");
    h8.contact_details.email = "pmhjalgaon@pmc.com";
    h8.contact_details.phone.push_back("9465194646");
    h8.num_doc = 2;
    h7.trust_name = "Bharatiya Seva Trust";
    // Primary hospital initialization completes
    // Hospital initialization completed

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    h8.name = "PMH Jalgaon";
    h8.organization_name = "Government";
    h8.address.building = "PMH Campus";
    h8.address.city = "Jalgaon";
    h8.address.state = "Maharashtra";
    h8.address.pin_code = "946548";
    h8.opd_timing.time_slots.push_back("10-12");
    h8.opd_timing.time_slots.push_back("14-18");
    h8.opd_timing.day_avail.push_back("Monday");
    h8.opd_timing.day_avail.push_back("Tuesday");
    h8.opd_timing.day_avail.push_back("Wednesday");
    h8.opd_timing.day_avail.push_back("Thursday");
    h8.opd_timing.day_avail.push_back("Friday");
    h8.opd_timing.day_avail.push_back("Saturday");
    h8.contact_details.email = "pmhjalgaon@pmc.com";
    h8.contact_details.phone.push_back("9465194646");
    h8.num_doc = 2;
    // Primary hospital initialization completes
    // Hospital initialization completed
    vector<Primary> list1;
    list1.push_back(h8);
    list1.push_back(h7);
    vector<Secondary> list2;
    list2.push_back(h5);
    list2.push_back(h6);
    vector<tertiary> list3;
    list3.push_back(h3);
    list3.push_back(h4);
    vector<Private> list4;
    list4.push_back(h1);
    list4.push_back(h2);
    cout << "Welcome to our Application\n";

    menu2();
    char a;
    cin >> a;
    if (a == 'c')
    {
        search_city(list1, list2, list3, list4);
    }
    if (a == 'n')
    {
        search_name(list1, list2, list3, list4);
    }

    if (a == 's')
    {
        cout << "good bye....\n";
        exit(3);
    }
}