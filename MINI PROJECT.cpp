#include<iostream>
using namespace std;

class domestic
{
    private:
        int s,d,sts,date,pno,age;
        char name[50],gen,eid[50];
    public:
        int seats()
        {
            return sts;
        }
        void set_domestic()
        {
            cout<<"Enter the date you want to travel (DDMMYYYY)"<<endl;
            cin>>date;
            cout<<"Number of seats required"<<endl;
            cin>>sts;
            cout<<"Pick your destination of departure"<<endl;
            cout<<"Mumbai(1)    Chennai(2)    Kolkata(3)    Delhi(4)    Madhya Pradesh(5)"<<endl;
            cin>>s;
            cout<<"Pick your destination of arrival"<<endl;
            cout<<"Mumbai(1)    Chennai(2)    Kolkata(3)    Delhi(4)    Madhya Pradesh(5)"<<endl;
            cin>>d;
            if((s==1 && d==2)||(s==2 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==3)||(s==3 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==4)||(s==4 && d==1))
            {
                flight_d();
            }
            else if((s==1 && d==5)||(s==5 && d==1))
            {
                flight_d();
            }
            else if((s==2 && d==3)||(s==3 && d==2))
            {
                flight_d();
            }
            else if((s==2 && d==4)||(s==4 && d==2))
            {
                flight_d();
            }
            else if((s==2 && d==5)||(s==5 && d==2))
            {
                flight_d();
            }
            else if((s==3 && d==4)||(s==4 && d==3))
            {
                flight_d();
            }
            else if((s==3 && d==5)||(s==5 && d==3))
            {
                flight_d();
            }
            else if((s==4 && d==5)||(s==5 && d==4))
            {
                flight_d();
            }
            else
            {
                cout<<"Your destination and source are the same"<<endl;
            }
        }
        void set_info()
        {
            cout<<"Enter your full name"<<endl;
            cin>>name;
            cout<<"Enter your gender(M/F)"<<endl;
            cin>>gen;
            cout<<"Phone number:"<<endl;
            cin>>pno;
            cout<<"Email id:"<<endl;
            cin>>eid;
            cout<<"Age:"<<endl;
            cin>>age;

        }
        void get_info()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Gender:"<<gen<<endl;
            cout<<"Phone number:"<<pno<<endl;
            cout<<"Email id:"<<eid<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Number of seats:"<<sts<<endl;
        }
        void flight_d()
        {
            cout<<"Flight\t\t\tDeparture\tArrival\t\tPrice"<<endl;
            cout<<"Go Air(1)\t\t08:00\t\t10:00\t\t1500"<<endl;
            cout<<"Spice Jet(2)\t\t14:00\t\t16:00\t\t1850"<<endl;
            cout<<"Air India(3)\t\t19:45\t\t21:45\t\t2025"<<endl;
            cout<<"Jet Airways(4)\t\t22:35\t\t01:10\t\t3508"<<endl;
            cout<<"Indigo(5)\t\t23:33\t\t02:17\t\t2789"<<endl<<endl<<endl;

        }
};
class intl
{
    protected:
        int a,de,dte,pn,seat;
        char fname[250],ed[30],g,pan[30],na[250],food[100],classt[100];
    public:
                void set_intl()
                {
                    cout<<"Enter the date you want to travel(DDMMYYYY)"<<endl;
                    cin>>dte;
                    cout<<"Number of seats required"<<endl;
                    cin>>seat;
                    cout<<"Pick your destination of departure"<<endl;
                    cout<<"India(1)    New York(2)    London(3)    New Zealand(4)"<<endl;
                    cin>>de;
                    cout<<"Pick your destination of arrival"<<endl;
                    cout<<"India(1)    New York(2)    London(3)    New Zealand(4)"<<endl;
                    cin>>a;

                    if((de==1 && a==2)||(de==2 && a==1))
                    {
                        flight_i();
                    }
                    else if((de==1 && a==3)||(de==3 && a==1))
                    {
                        flight_i();
                    }
                    else if((de==1 && a==4)||(de==4 && a==1))
                    {
                        flight_i();
                    }
                    else if((de==2 && a==3)||(de==3 && a==2))
                    {
                        flight_i();
                    }
                    else if((de==2 && a==4)||(de==4 && a==2))
                    {
                        flight_i();
                    }
                    else if((de==3 && a==4)||(de==4 && a==3))
                    {
                        flight_i();
                    }

                    else
                    {
                        cout<<"Your destination of departure and arrival is the same"<<endl;
                    }
                }
                void set_infoi()
                    {
                        int food;
                        cout<<endl<<"Enter your full name:"<<endl;
                        cin>>fname;
                        cout<<"Enter your gender(M/F):"<<endl;
                        cin>>g;
                        cout<<"Phone number:"<<endl;
                        cin>>pn;
                        cout<<"Enter your email id:"<<endl;
                        cin>>ed;
                        cout<<"Enter your passport number:"<<endl;
                        cin>>pan;
                        cout<<"Enter your nationality:"<<endl;
                        cin>>na;

                        cout<<"Enter your food choice(Veg/non-veg):"<<endl;
                        cin>>food;

                        cout<<"Would you preferring traveling Business or Economy:"<<endl;
                        cin>>classt;
                    }
                    void flight_i()
                    {
                        cout<<"Flight\t\t\t\tDeparture\tArrival\t\tPrice"<<endl;
                        cout<<"Qatar Airways(1)\t\t07:30\t\t21:30\t\t35000"<<endl;
                        cout<<"Etihad Airways(2)\t\t08:15\t\t22:15\t\t45750"<<endl;
                        cout<<"Fly Emirates(3)\t\t\t09:45\t\t23:45\t\t89250"<<endl;
                        cout<<"Lufthansa(4)\t\t\t22:35\t\t01:10\t\t54120"<<endl;
                        cout<<"Cathay Pacific(5)\t\t23:33\t\t02:17\t\t62789"<<endl<<endl<<endl;
                    }
                    void get_infoi()
                    {
                        cout<<endl<<"Name: "<<fname<<endl;
                        cout<<"Gender:"<<g<<endl;
                        cout<<"Phone number:"<<pn<<endl;
                        cout<<"email id:"<<ed<<endl;
                        cout<<"Passport number:"<<pan<<endl;
                        cout<<"Nationality:"<<na<<endl;
                        cout<<"Food choice:"<<food<<endl;
                        cout<<"Class:"<<classt<<endl;
                    }
};
class i_economy : public intl
{
    protected:
            int p,tic;
    public:
            int eco()
            {
                cout<<endl<<"Do you want a window ticket?"<<endl;
                cout<<"Press 1 for yes and 2 for no:"<<endl;
                cin>>tic;
                if(tic==1)
                {
                    p=1500;
                    return p;
                }
                else
                {
                    return 0;
                }
            }
};
class i_business : public intl
{
    protected:
            int a,tcs;
    public:
            int bus()
            {
                cout<<"Would you prefer a window seat?"<<endl;
                cout<<"Press 1 for yes and 2 for no"<<endl;
                cin>>tcs;
                if(tcs==1)
                {
                    a=3500;
                    return a;
                }
                else
                {
                    return 0;
                }
            }
};
int main()
{
    int n,f,in;
    double cost,w,x,costb;
    domestic d1;
    intl i1;
    i_economy e1;
    i_business ei1;

    cout<<"              Welcome to Airline Booking                                    "<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Enter 1 for Domestic Flights and 2 for International Flights"<<endl;
    cin>>f;
    if(f==1)
    {
        d1.set_domestic();
        cout<<"Enter your choice"<<endl;
        cin>>n;

        switch(n)
        {
            case 1:
            {
                cout<<"Flight  : Go Air"<<endl;
                cout<<"Departure  : 08.00"<<endl;
                cout<<"Arrival  : 10.00"<<endl;
                cout<<"Price :1500"<<endl;
                cost=1500+(0.05*1500);
                cout<<"Fare="<<cost<<endl<<endl;
                break;
            }
            case 2:
            {
                cout<<"Flight  :Spice Jet"<<endl;
                cout<<"Departure  : 14.00"<<endl;
                cout<<"Arrival  : 16.00"<<endl;
                cout<<"Price  :1850"<<endl;
                cost=1850+(0.05*1850);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;
            }
            case 3:
            {
                cout<<"Flight  :Air India"<<endl;
                cout<<"Departure  : 19.45"<<endl;
                cout<<"Arrival  : 21.45"<<endl;
                cost=2025+(0.05*2025);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;
            }
            case 4:
            {
                cout<<"Flight  :Jet Airways"<<endl;
                cout<<"Departure  : 22.35"<<endl;
                cout<<"Arrival  : 01.10"<<endl;
                cost=3508+(0.05*3508);
                cout<<"Fare ="<<cost<<endl<<endl;
                break;

            }
            case 5:
            {
                cout<<"Flight  :Indigo"<<endl;
                cout<<"Departure  : 23.33"<<endl;
                cout<<"Arrival  : 02.17"<<endl;
                cost=2789+(0.05*2789);
                cout<<"/Fare ="<<cost<<endl<<endl;
            }
            default:
            {
                cout<<"Either your destination is same or the option selected is inappropriate"<<endl;
                cout<<"                   END OF THE PROGRAM                                    "<<endl;
                cout<<"*****************************************************"<<endl;
                break;
            }
        }


            d1.set_info();
            cout<<endl<<"Details of the passenger are:"<<endl;
            d1.get_info();
    }
    else
    {
        i1.set_intl();
        cout<<"Enter your choice"<<endl;
        cin>>in;

        switch(in)
        {
            case 1:

                {

                    cout<<"Flight: Qatar Airways"<<endl;
                    cout<<"Departure :07:30"<<endl;
                    cout<<"Arrival:21:30"<<endl;
                    cout<<"Price:35000"<<endl;
                    w=e1.eco();
                    w=35000+(0.05*35000);
                    cost=cost+w;
                    cout<<"Fare for economy class:"<<w<<endl;
                    x=ei1.bus();
                    costb=35000+(0.05*35000);
                    cout<<"Fare for business class:"<<x<<endl;
                    break;
                }
            case 2:
                {
                    cout<<"Flight: Etihad Airways"<<endl;
                    cout<<"Departure :08:15"<<endl;
                    cout<<"Arrival:22:15"<<endl;
                    cout<<"Price:45750"<<endl;
                    w=e1.eco();
                    w=45750+(0.05*45750);
                    cost=cost+w;
                    cout<<"Fare for economy class:"<<w<<endl;
                    x=ei1.bus();
                    costb=45750+(0.05*45750);
                    cout<<"Fare for business class:"<<x<<endl;
                    break;
                }
            case 3:
                {
                    cout<<"Flight: Fly Emirates"<<endl;
                    cout<<"Departure :09:45"<<endl;
                    cout<<"Arrival:23:45"<<endl;
                    cout<<"Price:89250"<<endl;
                    w=e1.eco();
                    w=89250+(0.05*89250);
                    cost=cost+w;
                    cout<<"Fare for economy class:"<<w<<endl;
                    x=ei1.bus();
                    costb=89250+(0.05*89250);
                    cout<<"Fare for business class:"<<x<<endl;
                    break;
                }
            case 4:
                {
                    cout<<"Flight: Lufthansa"<<endl;
                    cout<<"Departure : 22.35"<<endl;
                    cout<<"Arrival: 01.10"<<endl;
                    cout<<"Price : 54120"<<endl;
                    w=e1.eco();
                    w=54120+(0.05*54120);
                    cost=cost+w;
                    cout<<"Fare for economy class:"<<w<<endl;
                    x=ei1.bus();
                    costb=54120+(0.05*54120);
                    cout<<"Fare for business class:"<<x<<endl;
                    break;
                }
            case 5:
                {
                    cout<<"Flight: Cathay Pacific"<<endl;
                    cout<<"Departure : 23.33"<<endl;
                    cout<<"Arrival: 02.17"<<endl;
                    cout<<"Price : 62789"<<endl;
                    w=e1.eco();
                    w=62789+(0.05*62789);
                    cost=cost+w;
                    cout<<"Fare for economy class:"<<w<<endl;
                    x=ei1.bus();
                    costb=62789+(0.05*62789);
                    cout<<"Fare for business class:"<<x<<endl;
                    break;
                }
            default:
                {
                    cout<<"Either your destination is same or you have selected an inappropriate option"<<endl;
                    cout<<"                 END OF THE PROGRAM                                    "<<endl;
                    cout<<"*****************************************************"<<endl;
                    break;
                }
        }


        i1.set_infoi();
        cout<<endl<<"Information of the passenger:"<<endl;
        i1.get_infoi();
    }

}
