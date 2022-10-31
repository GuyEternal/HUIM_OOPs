

#include"location.hpp"
#include<map>

class user
{ 
    string user_name;
    string password;
    string mobile_no;
    public :
    string name;
    string email_id;
    location Address;
    
    map<string, string> credentials_users;
   user(){
    // sample database which will be increased
       credentials_users["manav"] = "69_is_my_luv";
       credentials_users["deep"] = "i_luv_69";
   }
 

};