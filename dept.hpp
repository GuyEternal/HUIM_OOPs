#ifndef Dept_HPP
#define Dept_HPP
#include <iostream>
using namespace std;

#include "timing.hpp"

class dept
{
public:
    string department_name;
    int num_doc;
    timing timings;

    // functions
    int get_avail();

    void set_avail();
};

int dept::get_avail()
{
    cout << "\t\tThe department name is: " << department_name << endl;
    cout << "\t\tThe number of available doctors are: " << num_doc << endl;
    cout << "\t\tThe available time slots are: " << endl;
    timings.view_slots();
    return 0;
}

void dept::set_avail()
{
    cout << "\t\tEnter the department name: " << endl;
    cin >> department_name;
    cout << "\t\tThe number of doctors available for " << department_name << " are " << num_doc << endl;
    timings.update_slots();
}

#endif