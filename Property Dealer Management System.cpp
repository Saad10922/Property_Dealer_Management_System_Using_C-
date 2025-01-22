#include<iostream>
#include<cstring>
#include<exception>
#include<iomanip>
using namespace std;
class Property
{
public:
    char type[50];
    float price;
    char Add[50];
    int id;

    Property():type("NONE"),price(0),Add("None"),id(0){}
    Property(char T[50],float pr,char Ad[50],int i):price(pr),id(i)
    {
        strcpy(type,T);
        strcpy(Add,Ad);
    }
    void Add_Property_detail()
    {
        cout<<"PROPERTY TYPE : ";
        cin.ignore();
        cin.getline(type,50);
        cout<<"PROPERTY PRICE : ";
        cin>>price;
        cout<<"PROPERTY ID : ";
        cin>>id;
        cout<<"PROPERTY ADDRESS : ";
        cin.ignore();
        cin.getline(Add,50);
        cout<<"==================================="<<endl;
    }
    void Display_Property()
    {
         cout<<setw(20)<<type<<setw(10)<<price<<setw(30)<<Add<<endl;
    }

};
class Agent
{
public:
      char name[50];
      int id;
      string phone;
      char address[50];

     Agent():name("None"),id(0),phone("None"),address("None"){}
     Agent(char n[50],int i,string p,char a[50]):id(i),phone(p)
     {
         strcpy(name,n);
         strcpy(address,a);
     }
 virtual void Add_detail()
    {
     cout<<"ENTER OWNER INFORMATION"<<endl;
     cout<<"NAME : ";
     cin.getline(name,50);

     cout<<"ID   : ";
     cin>>id;

     cout<<"PHONE : ";
     cin>>phone;
     cout<<"ADDRESS : ";

     cin.getline(address,50);
    cout<<"==================================="<<endl;

    }
     virtual void Display_detail()
    {

        cout <<setw(20)<<name<<setw(10)<<id<<setw(30)<<address<<setw(15)<<phone;

    }
};
class Owner: public Agent
{
public:
    char Bname[50];
    int pro;
    Property P[10];

      Owner() : pro(0), P() {
    strcpy(Bname, "None");
    strcpy(P[0].type, "None");
    strcpy(P[0].Add, "None");
}


    void Add_detail()
    {
     cout<<"ENTER OWNER INFORMATION"<<endl;
     cout<<"NAME : ";
     cin.ignore();
     cin.getline(name,50);

     cout<<"ID   : ";
     cin>>id;

     cout<<"PHONE : ";
     cin>>phone;

     cout<<"ADDRESS : ";
     cin.ignore();
     cin.getline(address,50);

     cout<<"BUISNESS NAME : ";
     cin.ignore();
     cin.getline(Bname,50);
     cout<<"PROPERTIES : ";
     cin>>pro;
     cout<<"PROPERTY DETAILS"<<endl;
     cout<<"==================================="<<endl;
     for(int i=0;i<pro;i++){

     P[i].Add_Property_detail();
     }
    cout<<"==================================="<<endl;

    }

    void Display_detail()
    {

        Agent::Display_detail();
         cout<<setw(20)<<Bname<<setw(15)<<pro;
        for(int i=0;i<pro;i++)
        {

             P[i].Display_Property();

        }


        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;


    }
};
class Dealer : public Agent
{
public:
    char spec[50];
    int score;

    Dealer():spec("NONE"),score(0){}
    Dealer(char S[50],int sc):score(sc)
    {
        strcpy(spec,S);
    }
     void Add_detail()
    {
     cout<<"ENTER DEALER INFORMATION"<<endl;
     cout<<"NAME : ";
     cin.ignore();
     cin.getline(name,50);
     cout<<"ID   : ";
     cin>>id;
     cout<<"PHONE : ";
     cin>>phone;
     cout<<"ADDRESS : ";
     cin.ignore();
     cin.getline(address,50);
     cout<<"SPECILIZATION : ";
     cin.ignore();
     cin.getline(spec,50);
     cout<<"REPUTATION SCORE: ";
     cin>>score;
cout<<"==================================="<<endl;

     }
     void Display_detail()
    {

        Agent::Display_detail();
         cout<<setw(20)<<spec<<setw(10)<<score<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    }

};
class Buyer : public Agent
{
public:
    float budget;
    char pref[50];

    Buyer():pref("None"),budget(0){}
    Buyer(char P[50],float B):budget(B)
    {
        strcpy(pref,P);
    }
     void Add_detail()
    {
     cout<<"ENTER BUYER INFORMATION"<<endl;
     cout<<"NAME : ";
     cin.ignore();
     cin.getline(name,50);
     cout<<"ID   : ";
     cin>>id;
     cout<<"PHONE : ";
     cin>>phone;
     cout<<"ADDRESS : ";
     cin.ignore();
     cin.getline(address,50);
     cout<<"BUDGET : ";
     cin>>budget;
     cout<<"PROPERTY PREFRENCE : ";
     cin.ignore();
     cin.getline(pref,50);
    cout<<"==================================="<<endl;
    }
     void Display_detail()
    {

        Agent::Display_detail();
        cout<<setw(20)<<budget<<setw(10)<<pref<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    }
};
int main()
{
    try{
    char N[50];
    int check;
    string s1;

    Agent *A1[100];
    Agent *A2[100];
    Agent *A3[100];
    int i=0;
    int j=0;
    int k=0;
    Property p1[100];
    int l=0;





    char choice1;
    char choice2;
    char choice3;
    char choice4;
    char choice5;
    char choice6;
    char choice7;
    char choice8;
    char choice9;
    char choice10;
    char choice11;
    char choice12;
    char choice13;
    char choice14;
    char choice15;
    char choice16;
    char choice17;
    char choice18;
    char choice19;
    char choice20;
    char choice21;
    char choice22;
    char choice23;
    char choice24;
    cout<<"================================================="<<endl;
    cout<<"========PROPERTY DEALER MANAGEMENT SYSTEM========"<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"NAME  : M SAAD MASOOD"<<endl;
    cout<<"ROLL  : BSIT51F22R022"<<endl;
    cout<<"CLASS : BSIT (2nd) Regular"<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"PRESS Y TO START"<<endl;
    cin>>choice1;
    cout<<"================================================="<<endl;
    while(choice1=='Y'){

    cout<<"CHOOSE AN OPTION"<<endl;
    cout<<"1) MANAGE DATA"<<endl;
    cout<<"2) SEARCH "<<endl;
    cout<<"3) REPORTS"<<endl;
    cout<<"4) EXIT"<<endl;
    cin>>choice2;
    cout<<"================================================="<<endl;

    switch(choice2)
    {
    case '1':
        {
            choice3='Y';
             while(choice3=='Y')
       {
            cout<<"1) MANAGE OWNER DATA"<<endl;
            cout<<"2) MANAGE DEALER DATA"<<endl;
            cout<<"3) MANAGE BUYER DATA"<<endl;
            cout<<"4) MANAGE PROPERTY DATA"<<endl;
            cout<<"5) BACK"<<endl;
            cin>>choice4;
                cout<<"================================================="<<endl;

            switch(choice4)
            {
            case '1':

                {     choice5='Y';
                      while(choice5=='Y'){
                    cout<<"1) ADD OWNER DATA"<<endl;
                    cout<<"2) UPDATE OWNER DATA"<<endl;
                    cout<<"3) DELETE OWNER DATA"<<endl;
                    cout<<"4) DISPLAY OWNER DATA"<<endl;
                    cout<<"5) BACK"<<endl;
                    cin>>choice6;
                        cout<<"================================================="<<endl;

                    switch(choice6)
                    {
                    case '1':
                        {
                            if(i>=2)
                            {
                                throw "NO SPACE AVALIABLE";
                            }
                            else{
                            A1[i]=new Owner;
                            A1[i]->Add_detail();
                            i++;}
                            break;
                        }
                    case '2':
                        {
                            if(i==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO UPDATE"<<endl;
                            cin>>check;
                            for(int i1=0;i1<i;i1++)
                            {
                                if(A1[i1]->id==check)
                                {
                                    A1[i1]->Add_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                    case '3':
                        {
                            if(i==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO DELETE"<<endl;
                            cin>>check;
                            for(int i1=0;i1<i;i1++)
                            {
                                if(A1[i1]->id==check)
                                {
                                    for(int j=i1;j<i-1;j++)
                                    {
                                        A1[j]=A1[j+1];
                                    }
                                    check=-1;
                                    i--;

                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                    case '4':
                        {
                   if(i==0)
                    {
                    cout<<"NO INFORMATION AVALIABLE"<<endl;
                    cout<<"------------------------------------------------"<<endl;
                   }
                   else{
         cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Business Name"
             <<setw(15)<<"Properties"
             <<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                            for(int i1=0;i1<i;i1++)
                            {

                                A1[i1]->Display_detail();
                            }
                   }
                            break;
                        }
                    case '5':
                        {
                           choice5='N';
                           break;
                        }
                    }
                    }
                    break;
                }
            case '2':
                {
                    choice7='Y';
                      while(choice7=='Y'){
                    cout<<"1) ADD DEALER DATA"<<endl;
                    cout<<"2) UPDATE DEALER DATA"<<endl;
                    cout<<"3) DELETE DEALER DATA"<<endl;
                    cout<<"4) DISPLAY DEALER DATA"<<endl;
                    cout<<"5) BACK"<<endl;
                    cin>>choice8;
                    cout<<"================================================="<<endl;

                    switch(choice8)
                    {
                    case '1':
                        {
                            if(j>=100)
                            {
                                throw "NO SPACE AVALIABLE";
                                }
                                else{
                            A2[j]=new Dealer;
                            A2[j]->Add_detail();
                            j++;}
                            break;
                        }
                    case '2':
                        {
                             cout<<"ENTER ID TO UPDATE"<<endl;
                            cin>>check;
                            if(j==0)
                            {
                                cout<<"NO DATA AVALIABLE"<<endl;
                            }
                            else{
                            for(int i1=0;i1<j;i1++)
                            {
                                if(A2[i1]->id==check)
                                {
                                    A2[i1]->Add_detail();
                                    check=-1;
                                }}
                                if(check!=-1)
                                {
                                    cout<<"VALUE NOT FOUND"<<endl;
                                }


                            }
                            break;
                        }
                    case '3':
                        {
                             cout<<"ENTER ID TO DELETE"<<endl;
                            cin>>check;
                            if(j==0)
                            {
                                cout<<"NO DATA AVALIABLE"<<endl;
                            }
                            else{
                            for(int i1=0;i1<j;i1++)
                            {
                                if(A2[i1]->id==check)
                                {
                                    for(int j1=i1;j1<j-1;j1++)
                                    {
                                        A2[j1]=A2[j1+1];
                                    }
                                    check=-1;
                                    j--;
                                }}
                                if(check!=-1)
                                {
                                    cout<<"VALUE NOT FOUND"<<endl;
                                }


                            }
                            break;
                        }
                    case '4':
                        {
                            if(j==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
         cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Specialization"
             <<setw(10)<<"Reputation Score"<<endl;
         cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                            for(int i=0;i<j;i++)
                            {

                                A2[i]->Display_detail();
                            }
                            }
                            break;

                        }
                    case '5':
                        {
                           choice7='N';
                           break;
                        }
                    }
                }
                break;
                }
            case '3':
                {
                    choice9='Y';
                       while(choice9=='Y'){
                    cout<<"1) ADD BUYER DATA"<<endl;
                    cout<<"2) UPDATE BUYER DATA"<<endl;
                    cout<<"3) DELETE BUYER DATA"<<endl;
                    cout<<"4) DISPLAY BUYER DATA"<<endl;
                    cout<<"5) BACK"<<endl;
                    cin>>choice10;
                    cout<<"================================================="<<endl;
                     switch(choice10)
                    {
                    case '1':
                        {
                            if(k>=100)
                            {
                                throw "NO SPACE AVALIABLE";
                            }
                            else
                                {
                            A3[k]=new Buyer;
                            A3[k]->Add_detail();
                            k++;
                                }
                            break;
                        }
                    case '2':
                        {
                             cout<<"ENTER ID TO UPDATE"<<endl;
                            cin>>check;
                            if(k==0)
                            {cout<<"NO DATA AVALIABLE"<<endl;}
                            else{
                            for(int i1=0;i1<k;i1++)
                            {
                                if(A3[i]->id==check)
                                {
                                    A3[i]->Add_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"VALUE NOT FOUND"<<endl;
                            }
                            }
                            break;
                        }
                    case '3':
                        {
                              cout<<"ENTER ID TO DELETE"<<endl;
                            cin>>check;
                            if(k==0)
                            {cout<<"NO DATA AVALIABLE"<<endl;}
                            else{
                            for(int i1=0;i1<k;i++)
                            {
                                if(A3[i]->id==check)
                                {
                                   for(int j=i1;j<k-1;j++)
                                   {
                                       A3[j]=A3[j+1];
                                   }
                                    check=-1;
                                    k--;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"VALUE NOT FOUND"<<endl;
                            }
                            }
                            break;
                        }
                    case '4':
                        {
                            if(k==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{

         cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Budget"
             <<setw(10)<<"Property Preference"<< endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
             for(int i=0;i<k;i++)
             {
               A3[i]->Display_detail();
             }
                            break;
                        }
                    case '5':
                        {
                           choice9='N';
                           break;
                        }
                    }
                }
                }
                break;
                }
            case '4':
                {
                    choice11='Y';
                       while(choice11=='Y'){
                    cout<<"1) ADD PROPERTY DATA"<<endl;
                    cout<<"2) UPDATE PROPERTY DATA"<<endl;
                    cout<<"3) DELETE PROPERTY DATA"<<endl;
                    cout<<"4) DISPLAY PROPERTY DATA"<<endl;
                    cout<<"5) BACK"<<endl;
                    cin>>choice12;
                    cout<<"================================================="<<endl;
                     switch(choice12)
                    {
                    case '1':
                        {
                            if(l>=100)
                            {
                              throw "NO SPACE AVALIABLE";
                              }
                            else
                            {
                            p1[l].Add_Property_detail();
                          l++;
                            }


                            break;
                        }
                    case '2':
                        {
                             cout<<"ENTER ID TO UPDATE"<<endl;
                            cin>>check;
                            if(l==0)
                            {
                                cout<<"NO DATA AVALIABLE"<<endl;
                            }
                            else{
                            for(int i1=0;i1<l;i1++)
                            {
                                if(p1[i1].id==check)
                                {

                                    p1[i1].Add_Property_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"VALUE NOT FOUND"<<endl;
                            }
                            }
                            break;
                        }
                    case '3':
                        {
                                cout<<"ENTER ID TO DELETE"<<endl;
                            cin>>check;
                            if(l==0)
                            {
                                cout<<"NO DATA AVALIABLE"<<endl;
                            }
                            else{
                            for(int i1=0;i1<l;i1++)
                            {
                                if(p1[i1].id==check)
                                {
                                for(int j=i1;j<l-1;j++)
                                    {p1[j]=p1[j+1];}
                                    check=-1;
                                    l--;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"VALUE NOT FOUND"<<endl;
                            }
                            }
                            break;
                        }
                    case '4':
                        {
                            if(l==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else
                                {
         cout<<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                            for(int i=0;i<l;i++)
                            {
                                p1[i].Display_Property();
                            }
                                }

                            break;
                        }
                    case '5':
                        {
                           choice11='N';
                           break;
                        }
                    }
                }
                break;
                }
            case '5':
                {
                  choice3='N';
                  break;
                }

            }

        }
        break;
    }
    case '2':
        {   choice13='Y';
            while(choice13=='Y') {
            cout<<"1) SEARCH OWNER DATA"<<endl;
            cout<<"2) SEARCH DEALER DATA"<<endl;
            cout<<"3) SEARCH BUYER DATA"<<endl;
            cout<<"4) SEARCH PROPERTY DATA"<<endl;
            cout<<"5) BACK"<<endl;
            cin>>choice14;
            cout<<"================================================="<<endl;
            switch(choice14)
            {
            case '1':
                {choice15='Y';
                  while(choice15=='Y'){
                    cout<<"1)SEARCH OWNER THROUGH NAME"<<endl;
                    cout<<"2)SEARCH OWNER THROUGH ID"<<endl;
                    cout<<"3)SEARCH OWNER THROUGH PHONE NUMBER"<<endl;
                    cout<<"4)BACK"<<endl;
                    cin>>choice16;
                    cout<<"================================================="<<endl;
                    switch(choice16)
                    {
                    case '1':
                        {
                            if(i==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER NAME TO CHECK"<<endl;
                           cin.ignore();
                           cin.getline(N,50);
                            for(int i1=0;i1<i;i1++)
                            {
                                int c1=strcmp(A1[i1]->name,N);
                                if(c1==0)
                                {
                                    cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Business Name"
             <<setw(15)<<"Properties"
             <<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A1[i1]->Display_detail();
                                    check=-2;
                                }
                            }
                            if(check!=-2)
                            {
                                cout<<"NAME NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '2':
                        {
                           if(i==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO CHECK"<<endl;
                            cin>>check;
                            for(int i1=0;i1<i;i1++)
                            {
                                if(A1[i1]->id==check)
                                {
                                    cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Business Name"
             <<setw(15)<<"Properties"
             <<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A1[i1]->Display_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '3':
                        {
                            if(i==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER PHONE NUMBER TO CHECK"<<endl;
                            cin>>s1;
                            for(int i1=0;i1<i;i1++)
                            {
                                if(A1[i1]->phone==s1)
                                {
                                    cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Business Name"
             <<setw(15)<<"Properties"
             <<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A1[i1]->Display_detail();
                                    check=-3;
                                }
                            }
                            if(check!=-3)
                            {
                                cout<<"PHONE NUMBER NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '4':
                        {
                            choice15='N';
                            break;
                        }
                    }
                    }
                    break;
                }
            case '2':
                {

                    {choice17='Y';
                  while(choice17=='Y'){
                    cout<<"1)SEARCH DEALER THROUGH NAME"<<endl;
                    cout<<"2)SEARCH DEALER THROUGH ID"<<endl;
                    cout<<"3)SEARCH DEALER THROUGH PHONE NUMBER"<<endl;
                    cout<<"4)BACK"<<endl;
                    cin>>choice18;
                    cout<<"================================================="<<endl;
                    switch(choice18)
                    {
                    case '1':
                        {
                            if(j==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER NAME TO CHECK"<<endl;
                            cin.ignore();
                           cin.getline(N,50);
                            for(int i1=0;i1<j;i1++)
                            {
                                int c1=strcmp(A2[i1]->name,N);
                                if(c1==0)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Specialization"
             <<setw(10)<<"Reputation Score"<<endl;
         cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A2[i1]->Display_detail();
                                    check=-2;
                                }
                            }
                            if(check!=-2)
                            {
                                cout<<"NAME NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '2':
                        {
                            if(j==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO CHECK"<<endl;
                            cin>>check;
                            for(int i1=0;i1<j;i1++)
                            {
                                if(A2[i1]->id==check)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Specialization"
             <<setw(10)<<"Reputation Score"<<endl;
         cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A2[i1]->Display_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '3':
                        {
                            if(j==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER PHONE NUMBER TO CHECK"<<endl;
                            cin>>s1;
                            for(int i1=0;i1<j;i1++)
                            {
                                if(A2[i1]->phone==s1)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Specialization"
             <<setw(10)<<"Reputation Score"<<endl;
         cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

                                    A2[i1]->Display_detail();
                                    check=-3;
                                }
                            }
                            if(check!=-3)
                            {
                                cout<<"PHONE NUMBER NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '4':
                        {
                            choice17='N';
                            break;
                        }
                    }
                    }

                    break;
                }
                 case '3':
                {
                    {choice19='Y';
                  while(choice19=='Y'){
                    cout<<"1)SEARCH BUYER THROUGH NAME"<<endl;
                    cout<<"2)SEARCH BUYER THROUGH ID"<<endl;
                    cout<<"3)SEARCH BUYER THROUGH PHONE NUMBER"<<endl;
                    cout<<"4)BACK"<<endl;
                    cin>>choice20;
                    cout<<"================================================="<<endl;
                    switch(choice20)
                    {
                    case '1':
                        {
                            if(k==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER NAME TO CHECK"<<endl;
                            cin.ignore();
                           cin.getline(N,50);
                            for(int i1=0;i1<k;i1++)
                            {
                                int c1=strcmp(A3[i1]->name,N);
                                if(c1==0)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Budget"
             <<setw(10)<<"Property Preference"<< endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                                    A3[i1]->Display_detail();
                                    check=-2;
                                }
                            }
                            if(check!=-2)
                            {
                                cout<<"NAME NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '2':
                        {
                            if(k==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO CHECK"<<endl;
                            cin>>check;
                            for(int i1=0;i1<k;i1++)
                            {
                                if(A3[i1]->id==check)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Budget"
             <<setw(10)<<"Property Preference"<< endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                                    A3[i1]->Display_detail();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '3':
                        {
                             if(k==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER PHONE NUMBER TO CHECK"<<endl;
                            cin>>s1;
                            for(int i1=0;i1<k;i1++)
                            {
                                if(A3[i1]->phone==s1)
                                {
                                     cout<<setw(20)<<"Name"
             <<setw(10)<<"ID"
             <<setw(30)<<"Address"
             <<setw(15)<<"Phone"
             <<setw(20)<<"Budget"
             <<setw(10)<<"Property Preference"<< endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                                    A3[i1]->Display_detail();
                                    check=-3;
                                }
                            }
                            if(check!=-3)
                            {
                                cout<<"PHONE NUMBER NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '4':
                        {
                            choice19='N';
                            break;
                        }
                    }
                    }
                    break;
                }
                 case '4':
                {

                    {choice21='Y';
                  while(choice21=='Y'){
                    cout<<"1)SEARCH PROPERTY THROUGH ID"<<endl;
                    cout<<"2)BACK"<<endl;
                    cin>>choice22;
                    cout<<"================================================="<<endl;
                    switch(choice22)
                    {
                    case '1':
                        {
                            if(l==0)
                            {
                                cout<<"NO INFORMATION AVALIABLE"<<endl;
                            }
                            else{
                            cout<<"ENTER ID TO CHECK"<<endl;
                            cin>>check;
                            for(int i1=0;i1<l;i1++)
                            {
                                if(p1[i1].id==check)
                                {
        cout<<setw(20)<<"Type"
             <<setw(10)<<"Price"
             <<setw(30)<<"Address"<<endl;
             cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
                                    p1[i].Display_Property();
                                    check=-1;
                                }
                            }
                            if(check!=-1)
                            {
                                cout<<"ID NOT FOUND"<<endl;
                            }

                            }
                            break;
                        }
                        case '2':
                        {
                            choice21='N';
                            break;
                        }

                    }
                    }

                    break;
                }
                case '5':
                {
                    choice13='N';
                    break;

                }

            }
        }
        break;
        }
}
}
break;
}
    case '3':
        {choice23='Y';
            while(choice23=='Y')
                {
            cout<<"1) REPORT OWNER DATA"<<endl;
            cout<<"2) REPORT DEALER DATA"<<endl;
            cout<<"3) REPORT BUYER DATA"<<endl;
            cout<<"4) REPORT PROPERTY DATA"<<endl;
            cout<<"5) BACK"<<endl;
            cin>>choice24;
            cout<<"================================================="<<endl;
            switch(choice24)
            {
            case '1':
                {
                   cout<<"TOTAL OWNERS IN RECOERD = "<<i<<endl;
                   cout<<"================================================="<<endl;

                   break;
                }
            case '2':
                {
                    cout<<"TOTAL DEALERS IN RECOERD = "<<j<<endl;
                    cout<<"================================================="<<endl;

                    break;

                }
            case '3':
                {
                    cout<<"TOTAL BUYERS IN RECOERD = "<<k<<endl;
                    cout<<"================================================="<<endl;

                    break;

                }
            case '4':
                {
                    cout<<"TOTAL PROPERTIES IN RECOERD = "<<l<<endl;
                    cout<<"================================================="<<endl;

                    break;
                }
            case '5':
                {
                    choice23='N';
                    break;

                }
            }
                }
                break;
        }
    case '4':
        {
        choice1='N';

            break;}
}
}
}
catch(const char*d)
{
    cout<<d<<endl;
}
cout<<"================================================="<<endl;
cout<<"==================!!!THANKYOU!!!================="<<endl;
cout<<"================================================="<<endl;

}




