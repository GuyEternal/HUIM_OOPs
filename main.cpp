#include <iostream>
using namespace std;
#include <fstream>
// Including all header files needed
#include "hospital.hpp"
#include "location.hpp"
#include "user.hpp"
#include "timing.hpp"
#include "contact.hpp"
#include "dept.hpp"
#include "public.hpp"
#include "primary.hpp"
#include "secondry.hpp"
#include "tertiary.hpp"
#include "private.hpp"

int main()
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

    // Initialize all the hospitals
    // Atleast 2 each of private hospitals, tertiary, primary, and secondary health centres should be made
    //Private
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

    tertiary h4;

    h4.name = "AIIMS Delhi";
    h4.organization_name = "Government";
    h4.address.building = "AIIMS Campus";
    h4.address.city = "Delhi";
    h4.address.state = "Delhi";
    h4.address.pin_code = "231156";
    h4.opd_timing.time_slots.push_back("10-12");
    h4.opd_timing.time_slots.push_back("14-18");
    h4.opd_timing.day_avail.push_back("Monday");
    h4.opd_timing.day_avail.push_back("Tuesday");
    h4.opd_timing.day_avail.push_back("Wednesday");
    h4.opd_timing.day_avail.push_back("Thursday");
    h4.opd_timing.day_avail.push_back("Friday");
    h4.contact_details.email = "aiimsdelhi@aiims.com";
    h4.contact_details.phone.push_back("6846545664");
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


        // Initialize all the locations, departments, contacts, timings of the hospitals
    

    // Initialize all the users
    // Each hospital should contain atleast 3 users.



   // vector<Secondry> list1;
   // Secondry a;
   // dept b;

   // ifstream read("try.txt");

   // while (true)
   // {   cout<<"Running\n";
   //    string name, organisation, locate;

   //    getline(read, name);

   //    a.name = name;
   //    getline(read, organisation);

   //    a.organization_name = organisation;
   //    getline(read, locate);

   //    location address;
   //    vector<string> address_component;
   //    string extra = "";
   //    for (int i = 0; i < locate.size(); i++)
   //    {

   //       if (locate[i] == ',')
   //       {
   //          address_component.push_back(extra);
   //          extra = "";
   //       }
   //       extra.push_back(locate[i]);
   //    }

   //    address.building = address_component[0];
   //    address.pin_code = address_component[1];
   //    address.state = address_component[2];
   //    address.district = address_component[3];
   //    address.city = address_component[4];
   //    string num_beds;
   //    getline(read, num_beds);
   //    a.num_of_beds = stoi(num_beds);
      
      
   //    while(true){
       
   //    dept b;
   //    string dept_name;
   //    getline(read, dept_name);
    
   //    b.department_name = dept_name;

   //    string num_doctor;
   //    getline(read, num_doctor);
   //    b.num_doc = stoi(num_doctor);

   //    string s;
   //    getline(read, s);
   //    string temp = "";
   //    for (int i = 0; i < s.size(); i++)
   //    {

   //       if (s[i] == ',')
   //       {
   //          b.timings.time_slots.push_back(temp);
   //          temp = "";
   //          continue;
   //       }
   //       temp.push_back(s[i]);
   //    }

   //    string s2;
   //    getline(read, s2);

   //    for (int i = 0; i < s2.size(); i++)
   //    {

   //       if (s2[i] == ',')
   //       {
   //          b.timings.day_avail.push_back(temp);
   //          temp = "";
   //          continue;
   //       }
   //       temp.push_back(s2[i]);
   //    }

   //    a.departments.push_back(b);
          
   //          char c = read.get();
           
   //         if(c != '|'){
   //            break;
   //         }
   //         char(read.get());
   //       // just reading newline character
   //    }
           

   //    if (read.eof() == 0)
   //    {
   //       break;
   //    }

   // }

   
   // read.close();
   // a.get_details();
   // for(int i = 0; i < list1.size(); i++){
   //        list1[i].get_details();
   // }
}