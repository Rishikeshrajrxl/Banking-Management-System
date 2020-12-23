#include<iostream>
#include<fstream>
#include<Windows.h>
#include <unistd.h>


using namespace std;

class  login
{
    private:
            string acc_no;
            string pass;
    public:
            int check()
            {
                cout<<"\nAccount number    : ";
                cin>>acc_no;

                cin.ignore();
                cout<<"Password          : ";
                getline(cin,pass);

                ifstream fin;
                fin.open("login.txt");

                string searching="";
                string password="";
                int flag=0;
                while(!fin.eof())
                {
                    getline(fin,searching);
                    if(searching == acc_no)
                    {
                       flag=1;
                       getline(fin,password);
                       if(password==pass)
                       {
                           cout<<"successful";
                           break;
                       }
                       else
                       {
                           system("CLS");
                           cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t password does not match";
                           sleep(3);
                           system("CLS");
                           return 0;
                       }
                    }
                }
                if(fin && flag==0)
                {
                    system("CLS");
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Account Not found";
                    sleep(3);
                    system("CLS");
                }


                return flag;
        }
};



class Home_page
{
    private:int ch;
    public: display()
    {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t...........................................\n";
        cout<<"\t\t\t\t\t\t\t\t       Bank of Dhaka\n";
        cout<<"\t\t\t\t\t\t\t...........................................\n\n";
        cout<<"\t\t\t\t\t\t\t 1. New User\n";
        cout<<"\t\t\t\t\t\t\t 2. Existing User\n";
        cout<<"\t\t\t\t\t\t\t 3. Exit\n";
        cout<<"\n\n\n\n\nEnter your choice (1-3) : ";

        cin>>ch;
        switch(ch)
        {
            case 1:
                {

                }
                break;
            case 2:
                {
                    login l;
                    int i=l.check();
                    if(i==0)
                        display();
                }
                break;
            case 3:
                {
                    exit(0);
                }
                break;
            default:
                {
                    system("CLS");
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tInvalid Choice !  Try agian ";
                    sleep(3);
                    system("CLS");
                    display();
                }
                break;
        }

    };
};

int main()
{
    Home_page h;
    h.display();
    return 0;
}
