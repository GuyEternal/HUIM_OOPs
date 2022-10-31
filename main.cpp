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

    {
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
        h3.trust_name = "AIIMS";

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
        h4.trust_name = "AIIMS";
        //Tertiary hospital initialization ends

        //Secondary hospital initialization begins
        secondary h5;

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

        secondary h6;

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
        //Secondary hospital initialization ends
        // Primary hospitals initialization begins
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
    }


}