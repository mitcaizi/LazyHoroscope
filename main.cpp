//Authors:Jingwen Ling
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
   string firstname;
   string lastname;

  //get user input
cout<<"what is your first name?";
cin>>firstname;
cout<<"your fist name is:"<< firstname <<endl;
cout <<"what is your last name?";
cin>>lastname;
cout<<"your last name is:"<< lastname <<endl;

string nickname;
nickname.push_back(firstname[0]);
nickname.push_back(',');
nickname.push_back(lastname[0]);
nickname.push_back(',');
cout<<"Welcome,"<<nickname<<"here is your fortune..."<<endl;


  //tell fortune

  return 0;
}
