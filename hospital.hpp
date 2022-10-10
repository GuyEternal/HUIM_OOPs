#include<iostream>
using namespace std;

#include <location.hpp>
#include <contact.hpp>
#include <timing.hpp>


class hospital
{
    private:
    
    hospital()
    {
        int num_doc = 0;
    }

    public:
    string name;
    string organization_name;
    location address;
    contact contact_details;
    timing opd_timing;
    int num_doc;

    protected:

};