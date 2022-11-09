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

    cout << "\t\t1. Search in Primary Hospitals\n";
    cout << "\t\t2. Search in Secondary Hospitals\n";
    cout << "\t\t3. Search in Tertiary Hospitals\n";
    cout << "\t\t4. Search in Private Hospitals\n";

    cout << "\t\t-1. Exit \n";
    cout << "\t\tEnter : ";
}

void menu2()
{

    cout << "\t\t\n\n";
    cout << "\t\tc. search by city\n";
    cout << "\t\tn. search by name\n";
    cout << "\t\ts. stop searching\n";
    cout << "\t\tu. user Profile\n";
    cout << "\t\td. Get application data\n";
    cout << "\t\tEnter : ";
}

void menu3()
{
    cout << "\t\t\n";
    cout << "\t\tEnter an option:\n";
    cout << "\t\t1. Update name\n";
    cout << "\t\t2. Update organisation name\n";
    cout << "\t\t3. Update contact details\n";
    cout << "\t\t4. Update address\n";
    cout << "\t\t5. Update O.P.D. timing\n";
}

void search_name(vector<Primary> &list1, vector<Secondary> &list2, vector<tertiary> &list3, vector<Private> &list4)
{
    menu();
    int option;
    cin >> option;

    string name_hospital;

    if (option != -1)
    {
        cout << "\t\tEnter name of hospital\n";
        cout << "\t\tEnter: ";
        cin.ignore();
        getline(cin, name_hospital);
    }

    bool present = false;
    int result_index;
    switch (option)
    {
        // For a primary hospital
    case 1:

        // Searching for a primary hospital with the 'name_hospital' name in database
        for (int i = 0; i < list1.size(); i++)
        {

            if (list1[i].name == name_hospital)
            {
                present = true;
                result_index = i;
            }
        }

        // If found: ask user to either display or update details
        if (present)
        {

            cout << "\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";

            char z;
            cin >> z;
            if (z == 'D')
            {
                get_details(list1[result_index]);
            }
            if (z == 'U')
            {
                menu3();
                cout << "\t\t6. Update total no of doctors \n";
                cout << "\t\t7. Update trust name\n";
                cout << "\t\t8. Update number of beds\n";
                cout << "\t\tEnter option: ";
                int _option;
                cin >> _option;
                //
                if (_option == 1)
                {
                    string temp;
                    cout << "\t\tEnter the new name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list1[result_index].set_name(temp);
                }
                if (_option == 2)
                {
                    string temp;
                    cout << "\t\tEnter new organisation name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list1[result_index].set_org_name(temp);
                }
                if (_option == 3)
                {
                    list1[result_index].set_contact_details();
                }
                if (_option == 4)
                {
                    list1[result_index].set_address();
                }
                if (_option == 5)
                {
                    list1[result_index].set_opd_timings();
                }
                if (_option == 6)
                {
                    list1[result_index].set_avail_doc();
                }
                if (_option == 7)
                {
                    list1[result_index].set_trust_name();
                }
                if (_option == 8)
                {
                    list1[result_index].set_num_beds();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;

        // Secondary Hospitals
    case 2:

        for (int i = 0; i < list2.size(); i++)
        {

            if (list2[i].name == name_hospital)
            {
                present = true;
                result_index = i;
            }
        }

        if (present)
        {

            cout << "\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                list2[result_index].get_details();
            }
            if (z == 'U')
            {
                menu3();
                cout << "\t\t6 Update number of beds \n";
                cout << "\t\t7. Update trust name\n";
                cout << "\t\tEnter option: ";
                int _option;
                cin >> _option;
                //
                if (_option == 1)
                {
                    string temp;
                    cout << "\t\tEnter the new name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list2[result_index].set_name(temp);
                }
                if (_option == 2)
                {
                    string temp;
                    cout << "\t\tEnter new organisation name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list2[result_index].set_org_name(temp);
                }
                if (_option == 3)
                {
                    list2[result_index].set_contact_details();
                }
                if (_option == 4)
                {
                    list2[result_index].set_address();
                }
                if (_option == 5)
                {
                    list2[result_index].set_opd_timings();
                }
                if (_option == 6)
                {
                    list2[result_index].set_num_beds();
                }
                if (_option == 7)
                {
                    list2[result_index].set_trust_name();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;
        // For tertiary hospitals
    case 3:

        for (int i = 0; i < list3.size(); i++)
        {

            if (list3[i].name == name_hospital)
            {
                present = true;
                result_index = i;
            }
        }

        if (present)
        {

            cout << "\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                list3[result_index].get_details();
            }
            if (z == 'U')
            {
                menu3();
                cout << "\t\t6 Update no of doctors in each department\n";
                cout << "\t\t7 Update surgery availability in each department\n";
                cout << "\t\t8. Update trust name\n";
                cout << "\t\tEnter option: ";
                int _option;
                cin >> _option;
                //
                if (_option == 1)
                {
                    string temp;
                    cout << "\t\tEnter the new name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list3[result_index].set_name(temp);
                }
                if (_option == 2)
                {
                    string temp;
                    cout << "\t\tEnter new organisation name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list3[result_index].set_org_name(temp);
                }
                if (_option == 3)
                {
                    list3[result_index].set_contact_details();
                }
                if (_option == 4)
                {
                    list3[result_index].set_address();
                }
                if (_option == 5)
                {
                    list3[result_index].set_opd_timings();
                }
                if (_option == 6)
                {
                    list3[result_index].set_avail_doc();
                }
                if (_option == 7)
                {
                    list3[result_index].set_surgery_avail();
                }
                if (_option == 8)
                {
                    list3[result_index].set_trust_name();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;
        // For private hospitals
    case 4:

        for (int i = 0; i < list4.size(); i++)
        {

            if (list4[i].name == name_hospital)
            {
                present = true;
                result_index = i;
            }
        }

        if (present)
        {

            cout << "\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                list4[result_index].get_details();
            }
            if (z == 'U')
            {
                menu3();
                cout << "\t\t6 Update no of doctors in each department\n";
                cout << "\t\t7 Update surgery availability in each department\n";
                int _option;
                cin >> _option;
                //
                if (_option == 1)
                {
                    string temp;
                    cout << "\t\tEnter the new name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list4[result_index].set_name(temp);
                }
                if (_option == 2)
                {
                    string temp;
                    cout << "\t\tEnter new organisation name: ";
                    cin.ignore();
                    getline(cin, temp);
                    list4[result_index].set_org_name(temp);
                }
                if (_option == 3)
                {
                    list4[result_index].set_contact_details();
                }
                if (_option == 4)
                {
                    list4[result_index].set_address();
                }
                if (_option == 5)
                {
                    list4[result_index].set_opd_timings();
                }
                if (_option == 6)
                {
                    list4[result_index].set_num_doc();
                }
                if (_option == 7)
                {
                    list4[result_index].set_surgery_avail();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;

    case -1:
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
    if (option != -1)
    {

        cout << "\t\tEnter name of city\n";
        cout << "\t\tEnter: ";
        cin.ignore();
        getline(cin, name_hospital);
    }
    bool present = false;
    int index = 1;
    vector<tertiary *> res3;
    vector<Secondary *> res2;
    vector<Primary *> res1;
    vector<Private *> res4;
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
                    cout << "\t\tAvailable Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();
                Primary *temp = &list1[i];
                res1.push_back(temp);
                cout << "\t\t " << index << ". " << list1[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "\t\tEnter serial number of hospital on which you want to do operations : ";
            cin >> serial_index;
            cout << "\n\t\tD. Details of Hospital\n";
            cout << "\t\tU. Update no of doctors in Hospital\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                Primary sample = *res1[serial_index - 1];

                get_details(sample);
            }
            if (z == 'U')
            {
                res1[serial_index - 1]->set_avail_doc();
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;

    case 2:

        for (int i = 0; i < list2.size(); i++)
        {
            if (list2[i].address.city == name_hospital)
            {
                if (present == false)
                {
                    cout << "\t\tAvailable Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();
                Secondary *temp = &list2[i];
                res2.push_back(temp);
                cout << "\t\t " << index << ". " << list2[i].name << endl;
                index++;
            }
        }
        if (present)
        {

            cout << "\t\tEnter serial number of hospital on which you want to do operations : ";

            cin >> serial_index;
            cout << "\n\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                res2[serial_index - 1]->get_details();
            }
            if (z == 'U')
            {
                cout << "\t\tEnter 1 to update total no of doctors \n";
                cout << "\t\tEnter 2 to update total no of beds \n";
                cout << "\t\tEnter 3 to update opd details\n";
                cout << "\t\tEnter: ";
                int _option;
                cin >> _option;

                if (_option == 1)
                {
                    res2[serial_index - 1]->set_avail_doc();
                }
                if (_option == 2)
                {
                    res2[serial_index - 1]->set_num_beds();
                }

                if (_option == 3)
                {
                    cout << "\t\tRunning\n";
                    res2[serial_index - 1]->set_opd_timings();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
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
                    cout << "\t\tAvailable Hospitals are\n";
                }

                present = true;

                tertiary *temp1 = &list3[i];
                res3.push_back(temp1);
                cout << "\t\t " << index << ". " << list3[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "\t\tEnter serial number of hospital on which you want to do operations : ";
            cin >> serial_index;
            cout << "\t\t\n\nEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                res3[serial_index - 1]->get_details();
            }

            if (z == 'U')
            {

                cout << "\t\t\n\nEnter 1 to update no of doctors present in Hospital\n";
                cout << "\t\tEnter 2 to update surgery slots in Hospital\n";
                cout << "\t\tEnter 3 to update opd slots in Hospital\n";
                cout << "\t\tEnter option: ";
                int update;
                cin >> update;
                if (update == 1)
                {
                    res3[serial_index - 1]->set_avail_doc();
                }
                if (update == 2)
                {
                    res3[serial_index - 1]->set_surgery_avail();
                }
                if (update == 3)
                {
                    res3[serial_index - 1]->set_opd_timings();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;
    case 4:

        for (int i = 0; i < list4.size(); i++)
        {

            if (list4[i].address.city == name_hospital)
            {
                if (present == false)
                {
                    cout << "\t\tAvailable Hospitals are\n";
                }

                present = true;
                // list3[i].get_details();
                Private *temp = &list4[i];
                res4.push_back(temp);
                cout << "\t\t " << index << ". " << list4[i].name << endl;
                index++;
            }
        }
        if (present)
        {
            cout << "\t\tEnter serial number of hospital on which you want to do operations : ";
            cin >> serial_index;
            cout << "\n\n\t\tEnter D to get the details of Hospital\n";
            cout << "\t\tEnter U to do updates in Hospital data\n";
            cout << "\t\tEnter option: ";
            char z;
            cin >> z;
            if (z == 'D')
            {
                res4[serial_index - 1]->get_details();
            }

            if (z == 'U')
            {

                cout << "\t\t\n\nEnter 1 to update no of doctors present in Hospital\n";
                cout << "\t\tEnter 2 to update surgery slots in Hospital\n";
                cout << "\t\tEnter 3 to update opd slots in Hospital\n";
                cout << "\t\tEnter option: ";
                int update;
                cin >> update;
                if (update == 1)
                {
                    res4[serial_index - 1]->set_num_doc();
                }
                if (update == 2)
                {
                    res4[serial_index - 1]->set_surgery_avail();
                }
                if (update == 3)
                {
                    res4[serial_index - 1]->set_opd_timings();
                }
            }
        }

        if (!present)
        {
            cout << "\t\tHospital not found\n";
        }
        break;
    default:
        break;
    }
}

int main()
{
    system("Color 0A");

    map<string, string> credentials_users;
    user A("ankit", "iamankit", "854828373", "ankit", "ankitsankhyan04@gmail.com", credentials_users);
    user B("deep", "iamdeep", "8544758373", "deep", "deep04@gmail.com", credentials_users);
    user C("manav", "iammanav", "85782528373", "manav", "manav04@gmail.com", credentials_users);
    user D("rahul", "iamrahul", "88524728373", "rahul", "rahul04@gmail.com", credentials_users);
    user E("raj", "iamraj", "894568373", "raj", "raj04@gmail.com", credentials_users);
    vector<user *> user_list;
    user_list.push_back(&A);
    user_list.push_back(&B);
    user_list.push_back(&C);
    user_list.push_back(&D);
    user_list.push_back(&E);
    string login_user_name;
    cout << "\t************************\n";
    cout << "\t#####################       Welcome        ####################\n";
    cout << "\t***********************\n";
    cout << "\t\t1. Login\n";
    cout << "\t\t2. Sign-up\n";
    cout << "\t\tEnter: ";
    int n;
    cin >> n;

    if (n == 1)
    {

        while (n)
        {
            cout << "\t\tEnter User Name : ";

            string user_name;
            cin >> user_name;
            cout << endl;
            cout << "\t\tEnter Password : ";
            string password;
            cin >> password;
            cout << endl;
            if (A.login(user_name, password, credentials_users))
            {
                login_user_name = user_name;
                cout << "\t\tSuccess\n\n\n\n";
                break;
            }
            else
            {
                user z;
                cout << "\t\tTo retry press 1 \n\t\tTo Sign-up press 0\n\t\tTo exit press -1\n";
                cout << "\t\tEnter: ";
                cin >> n;
                if (n == -1)
                {
                    exit(2);
                }
                if (n == 0)
                {
                    z.sign_up(credentials_users, login_user_name);
                    user_list.push_back(&z);
                    break;
                }
            }
        }
    }
    else
    {
        user z;
        z.sign_up(credentials_users, login_user_name);
        user_list.push_back(&z);
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

    h1.departments.push_back(temp1);
    h1.departments.push_back(temp2);
    h1.departments.push_back(temp3);

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

    h2.departments.push_back(temp1);
    h2.departments.push_back(temp2);
    h2.departments.push_back(temp3);

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

    h6.name = "KEM Mumbai";
    h6.organization_name = "Government";
    h6.address.building = "KEM Campus";
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
    h8.trust_name = "Bharatiya Seva Trust";

    temp1.timings.time_slots.clear();
    temp2.timings.time_slots.clear();
    temp3.timings.time_slots.clear();
    temp1.timings.day_avail.clear();
    temp2.timings.day_avail.clear();
    temp3.timings.day_avail.clear();

    Primary h9;
    h9.name = "PMH Sevagram";
    h9.organization_name = "Government";
    h9.address.building = "PMH Campus";
    h9.address.city = "Sevagram";
    h9.address.state = "Maharashtra";
    h9.address.pin_code = "94908";
    h9.opd_timing.time_slots.push_back("10-12");
    h9.opd_timing.time_slots.push_back("14-18");
    h9.opd_timing.day_avail.push_back("Monday");
    h9.opd_timing.day_avail.push_back("Tuesday");
    h9.opd_timing.day_avail.push_back("Wednesday");
    h9.opd_timing.day_avail.push_back("Thursday");
    h9.opd_timing.day_avail.push_back("Friday");
    h9.opd_timing.day_avail.push_back("Saturday");
    h9.contact_details.email = "pmhsevagram@pmc.com";
    h9.contact_details.phone.push_back("975833646");
    h9.num_doc = 2;
    // Primary hospital initialization completes
    // Hospital initialization completed
    vector<Primary> list1;
    list1.push_back(h9);
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
    // getting data of total hospital registered  and total user registered
    int p_h, s_h, t_h, pvt, u_n;
    p_h = list1.size();
    s_h = list2.size();
    t_h = list3.size();
    pvt = list4.size();
    u_n = user_list.size();

    menu2();
    char a;
    cin.ignore();
    cin >> a;
    while (a == 'c' || a == 'n' || a == 'u' || a == 'd')
    {
        if (a == 'c')
        {
            search_city(list1, list2, list3, list4);
        }
        if (a == 'n')
        {
            search_name(list1, list2, list3, list4);
        }
        if (a == 'u')
        {
            bool ispresent = false;

            for (auto &i : user_list)
            {
                if (i->user_name == login_user_name)
                {
                    ispresent = true;
                    i->user_detail();
                }
            }
        }

        if (a == 'd')
        {
            cout << "\t\tTotal users: " << u_n << endl;
            cout << "\t\tTotal  hospital registered: " << (t_h + p_h + s_h + pvt) << endl;

            cout << "\t\tEnter Y to see more info\n";
            cout << "\t\tElse Enter N\n";
            cout << "\t\tEnter option: ";

            char k;
            cin >> k;
            if (k == 'Y')
            {
                cout << "\t\tPrimary Hospitals : " << p_h << endl;
                cout << "\t\tSecondary Hospitals : " << s_h << endl;
                cout << "\t\tTertiary Hospitals : " << t_h << endl;
                cout << "\t\tPrivate Hospitals :" << pvt << endl;
            }
        }
        if (a != 'c' && a != 'n' && a != 'u' & a != 'd')
        {

            cout << "\t\t#############    Thanks for using this program   ###############\n";
            exit(3);
        }

        cout << "\n\t\t ******* Welcome back *******\n\n";
        menu2();
        cin >> a;
    }

    cout << "\t\t#############    Thanks for using this program   ###############.\n";
}