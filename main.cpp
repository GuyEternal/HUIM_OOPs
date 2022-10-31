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
int main()
{
   vector<Secondry> list1;
   Secondry a;
   dept b;

   ifstream read("try.txt");

   while (true)
   {   cout<<"Running\n";
      string name, organisation, locate;

      getline(read, name);

      a.name = name;
      getline(read, organisation);

      a.organization_name = organisation;
      getline(read, locate);

      location address;
      vector<string> address_component;
      string extra = "";
      for (int i = 0; i < locate.size(); i++)
      {

         if (locate[i] == ',')
         {
            address_component.push_back(extra);
            extra = "";
         }
         extra.push_back(locate[i]);
      }

      address.building = address_component[0];
      address.pin_code = address_component[1];
      address.state = address_component[2];
      address.district = address_component[3];
      address.city = address_component[4];
      string num_beds;
      getline(read, num_beds);
      a.num_of_beds = stoi(num_beds);
      
      
      while(true){
       
      dept b;
      string dept_name;
      getline(read, dept_name);
    
      b.department_name = dept_name;

      string num_doctor;
      getline(read, num_doctor);
      b.num_doc = stoi(num_doctor);

      string s;
      getline(read, s);
      string temp = "";
      for (int i = 0; i < s.size(); i++)
      {

         if (s[i] == ',')
         {
            b.timings.time_slots.push_back(temp);
            temp = "";
            continue;
         }
         temp.push_back(s[i]);
      }

      string s2;
      getline(read, s2);

      for (int i = 0; i < s2.size(); i++)
      {

         if (s2[i] == ',')
         {
            b.timings.day_avail.push_back(temp);
            temp = "";
            continue;
         }
         temp.push_back(s2[i]);
      }

      a.departments.push_back(b);
          
            char c = read.get();
           
           if(c != '|'){
              break;
           }
           char(read.get());
         // just reading newline character
      }
           

      if (read.eof() == 0)
      {
         break;
      }

   }

   
   read.close();
   a.get_details();
   // for(int i = 0; i < list1.size(); i++){
   //        list1[i].get_details();
   // }
}