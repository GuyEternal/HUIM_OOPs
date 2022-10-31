#ifndef TIME_HPP
#define TIME_HPP

#include<iostream>
using namespace std;
#include<vector>

class timing{
    public:
    vector<string> time_slots;
    vector<string> day_avail;
   
    void view_slots(){
        cout<<"The Time slots are: "<<endl;
        for (int i = 0; i < time_slots.size(); i++)
        {
            cout<<time_slots[i]<<" ";
        }
     cout<<endl;
        cout<<"The available days are: "<<endl;
        for (int i = 0; i < day_avail.size(); i++)
        {
            cout<<day_avail[i]<<" ";
        }
        
    }

    void update_slots(){
        cout<<"If you want to add available day  press u or q to update time slot "<<endl;
        char u;
        cin>>u;
        string new_day;
        while(u=='u'){
            cout<<"The day to be added "<<endl;
            cin>>new_day;
            time_slots.push_back(new_day);
             cout<<"If you want to add available day  press u else q "<<endl;
            cin>>u;
        } 

     
        string new_slot;
        while(u=='q'){
            cout<<"The time slot to be added "<<endl;
            cin>>new_slot;
            time_slots.push_back(new_slot);
            cout<<"If you want to add a time slot press u else q "<<endl;
            cin>>u;
        } 

         
    }
     

};




#endif