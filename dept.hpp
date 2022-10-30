#ifndef Dept_HPP
#define Dept_HPP
#include<iostream>
using namespace std;

#include"timing.hpp"

class dept
{   
    public:
    string department_name;
    int num_doc;
    timing timings;
     
    //functions
    int get_avail(){
         cout<<"The department name is: "<<department_name <<endl;
         cout<<"The number of available doctors are: "<<num_doc<<endl;
         cout<<"The available time slots are: "<<endl;
         timings.view_slots(); 
    }
   
    void set_avail(){
        cout<<"Enter the department name: "<<endl;
        cin>>department_name;
        cout<<"The number of doctors available for "<<department_name<<" are "<<num_doc<<endl;
        timings.update_slots();
    }

    
};
#endif