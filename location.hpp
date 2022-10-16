class location
{
    private:

    public:
    string building;
    int pin_code;
    string state;
    string district;
    string city;

    void get_details()
    {

    }

    void update()
    {
        cout<<"Pls enter u to update building, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter building: ";
            cin>>s;
            this->building = s;
        }

        cout<<"Pls enter u to update pin_code, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            int s;
            cout<<"Enter pin_code: ";
            cin>>s;
            this->pin_code = s;
        }

        cout<<"Pls enter u to update state, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter state: ";
            cin>>s;
            this->state = s;
        }

        cout<<"Pls enter u to update district, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter district: ";
            cin>>s;
            this->district = s;
        }
        
        cout<<"Pls enter u to update city, else enter q: ";
        char c;
        cin>>c;
        if (c == 'u')
        {
            string s;
            cout<<"Enter city: ";
            cin>>s;
            this->city = s;
        }
    }
};