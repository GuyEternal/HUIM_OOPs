#include<iostream>
using namespace std;

//Including all header files needed
#include "hospital.hpp"
#include "location.hpp"
#include "user.hpp"
#include "timing.hpp"
#include "contact.hpp"
#include "dept.hpp"
#include"public.hpp"
#include"primary.hpp"
#include"secondry.hpp"
#include"tertiary.hpp"
int main()
{
    Primary a;
      a.name = "Primary health center Nasik\n";
    a.opd_timing.day_avail.push_back("Thursday");
    a.opd_timing.day_avail.push_back("monday");
    a.opd_timing.day_avail.push_back("tuesday");
    a.opd_timing.day_avail.push_back("Wednesday");
    a.opd_timing.day_avail.push_back("Friday");
 a.opd_timing.time_slots.push_back("9 to 12 ");
    a.opd_timing.time_slots.push_back("13 to 15 ");
    a.opd_timing.time_slots.push_back("15 to 17 ");
    a.opd_timing.time_slots.push_back("18 to 20 ");
   

  
    
 a.get_details();
   

    
}