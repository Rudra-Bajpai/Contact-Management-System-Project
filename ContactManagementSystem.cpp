#include<iostream>
using namespace std;

class Contacts
{
    private:
    string name;
    string email;

    public:

    /*Contacts()
    {
       
        name = "example name";
        email = "example email";
    }
    */

    void contactcreator(string n,string e)
    {
      name = n;
      email = e;
    }

    void namesetter(string name4)
    {
        name = name4;
    }

    void emailsetter(string email4)
    {
        email = email4;
    }

    string namegetter()
    {
        return name;
    }

    string emailgetter()
    {
        return email;
    }

};

int main()
{
    int n;
    string n1;
    string e1;
    int c;
    int option1=0;
    int v1=0;
    int count=0;
    Contacts objects[100];
     cout<<"**************************"<<endl;
     cout<<"Menu"<<endl;
     cout<<"1) do you want to create a contact(maximum 100 contacts can be created)"<<endl;
     cout<<"2) do you want to delete a contact(for deleting a contact there must be more than two contact)"<<endl;
     cout<<"3) do you want to change details of a contact "<<endl;
     cout<<"4) exit"<<endl;
     cout<<"5) contactlist"<<endl;
     cout<<"enter option number which you want to choose from options given above ";
     cin>>c;
     cout<<endl;
     cout<<"***************************"<<endl;
    while(c<=5)
    {

        if(c==1)
        {
             cout<<endl;
             cout<<"enter how many contacts you want to create ";
             cin>>n;
              for(option1=option1;option1<n+v1;option1++)
              {
              cout<<option1<<")"<<" enter name ";
              cin>>n1;
              cout<<option1<<")"<<" enter email ";
              cin>>e1;
              objects[option1].contactcreator(n1,e1);
              cout<<endl;
              }
              v1=v1+n;
              cout<<"updated contact list "<<endl;
              if(count>=1)
              {
               for(int i=0;i<v1;i++)
               {
                cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
               }
              }
            else
             {
              for(int i=0;i<v1;i++)
              {
                cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
              }
             }
            cout<<endl;
        }

        if(c==2)
        {
            int del;
            string name2;
            string email2;
            cout<<endl;
            cout<<"contactlist "<<endl;
            if(count>=1)
            {
                 for(int i=0;i<v1;i++)
                 {
                  cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                 }
            }
            else
            {
                for(int i=0;i<v1;i++)
                {
                 cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                }
            }
                cout<<"enter index of contact from contactlist which you want to delete ";
                cin>>del;
                for(int v=del;v<v1;v++)
                { 
                  string str;
                  string str1;
                  str = objects[v+1].namegetter();
                  objects[v].namesetter(str);
                  str1 = objects[v+1].emailgetter();
                  objects[v].emailsetter(str1);
                }
                 cout<<"updated contactlist "<<endl;
                 v1=v1-1;
                 for(int t=0;t<v1;t++)
                 {
                  cout<<t<<")"<<" name : "<<objects[t].namegetter()<<" "<<"email : "<<objects[t].emailgetter()<<endl;
                 }
                 cout<<endl;
                 count++;
        }

        if(c==3)
        {
            int g;
            int option;
            cout<<endl;
            cout<<"contactlist "<<endl;
            if(count>=1)
              {
               for(int i=0;i<v1;i++)
               {
                cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
               }
              }
            else
             {
              for(int i=0;i<v1;i++)
              {
                cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
              }
             }
            cout<<"enter option number of contact which you want to change from options given above ";
            cin>>option;
            cout<<"which detail of contact you want to change name or contact "<<endl;
            cout<<"enter 1 for changinng name and enter 2 for changing email of contact "<<endl;
            cin>>g;

            if(g==1)
            {
                string name1;
                cout<<"you have entered 1, so you want to change name of contact "<<endl;
                cout<<"enter new name of contact ";
                cin>>name1;
                objects[option].namesetter(name1);
                cout<<"updated contactlist "<<endl;
                if(count>=1)
                {
                 for(int i=0;i<v1;i++)
                 {
                  cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                 }
                }
              else if(count==0)
              {
               
                for(int i=0;i<v1;i++)
                {
                 cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                }
              }
               cout<<endl;
            }
            if(g==2)
            {
                string email1;
                cout<<"you have entered 2, so you want to change email of contact "<<endl;
                cout<<"enter new email of contact ";
                cin>>email1;
                objects[option].emailsetter(email1);
                cout<<"updated contactlist "<<endl;
                if(count>=1)
                {
                 for(int i=0;i<v1;i++)
                 {
                  cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                 }
                }
                else
                {
                 for(int i=0;i<v1;i++)
                 {
                  cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
                 }
                }
             cout<<endl;
            }

        }
        if(c==4)
        {
            cout<<"exit";
            break;
            
        }
        
        if(c<=0)
        {
          cout<<"invalid choice "<<endl;
          cout<<endl;
        }

        if(c==5)
        {
            if(count>=1)
            {
              cout<<"contactlist"<<endl;
              for(int i=0;i<v1;i++)
              {
               cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
              }
            }
            else
            {
              cout<<"contactlist"<<endl;
              for(int i=0;i<v1;i++)
              {
                cout<<i<<")"<<" name : "<<objects[i].namegetter()<<" email : "<<objects[i].emailgetter()<<endl;
              }
            }
         cout<<endl;
        }

        cout<<"****************************"<<endl;
        cout<<endl;
        cout<<"Menu"<<endl;
        cout<<"1) do you want to create a contact "<<endl;
        cout<<"2) do you want to delete a contact "<<endl;
        cout<<"3) do you want to change details of a contact "<<endl;
        cout<<"4) exit"<<endl;
        cout<<"5) contactlist"<<endl;
        cout<<"enter option number which you want to choose from options given above ";
        cin>>c;
        cout<<endl;
        cout<<"*****************************"<<endl;
    }
  
  return 0;
}