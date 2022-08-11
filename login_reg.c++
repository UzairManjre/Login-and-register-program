#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
class UserData
{
protected:
    string UserName;
    string UserEmail;
    string UserPassword;

public:
    void Register(string UserName, string UserEmail, string UserPassword)
    {
        this->UserName = UserName;
        this->UserEmail = UserEmail;
        this->UserPassword = UserPassword;
        cout<<"register successful"<<endl;
    }
};
class UserLogin : public UserData
{
public:
    void login(string UserName, string UserEmail, string UserPassword)
    {
        int n = 0, m = 4;
        while (n < 4)
        {
            if (this->UserName == UserName && this->UserPassword == UserPassword)
            {
                cout << "Login successful " << UserName << " welcome back" << endl;
                break;
            }
            else { 
                system("CLS");
                cout << "Login failed " <<endl;
                cout <<"attempt left"<<m<<endl;
                n++;
            }
        }
    }
};
int main()
{ char c;
// char l;
    UserLogin user1;
    // cout<<"login or register"<< endl;
    // cout <<"for login enter L and for register enter R "<< endl;
    // cin>>c;
    for(int i = 0; i < 1 ;){
         cout<<"login or register"<< endl;
    cout <<"for login enter L and for register enter R "<< endl;
    cin>>c;
    if (c == 'l' || c == 'L' )
    {
        string UserName, UserEmail, UserPassword;
        cout<<"enter UserName"<< endl;
        cin>> UserName;
        cout<<"enter UserEmail"<< endl;
        cin>> UserEmail;
        cout<<"enter UserPassword"<<endl;
        cin>>UserPassword;
                user1.login(UserName, UserEmail, UserPassword);
    }
    else {
        string UserName, UserEmail, UserPassword;
        cout<<"enter UserName"<< endl;
        cin>> UserName;
        cout<<"enter UserEmail"<< endl;
        cin>> UserEmail;
        cout<<"enter UserPassword"<<endl;
        cin>>UserPassword;

        user1.Register(UserName, UserEmail, UserPassword);
    }
    cout<<"do you wish to continue ? for exit press 1 for continue press 0"<< endl;
    cin>> i;
    }
    return 0;
}