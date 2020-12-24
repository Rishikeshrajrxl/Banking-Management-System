
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

