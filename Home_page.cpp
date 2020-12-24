
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

