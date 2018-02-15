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
//cout<<"your fist name is:"<< firstname <<endl;
cout <<"what is your last name?";
cin>>lastname;
//cout<<"your last name is:"<< lastname <<endl;

string nickname;
nickname.push_back(firstname[0]);
nickname.push_back('.');
nickname.push_back(lastname[0]);
nickname.push_back('.');
nickname.push_back(',');
cout<<"Welcome, "<<nickname<<" here is your fortune..."<<endl;


  //tell fortune
string vowel;
cout<<"your lucky number is "<<firstname.length()<<endl;
int len=lastname.length();
if (firstname[0]=='a'||firstname[0]=='e'||firstname[0]=='i'||firstname[0]=='o'||firstname[0]=='u'||firstname[0]=='A'||
firstname[0]=='E'||firstname[0]=='I'||firstname[0]=='O'||firstname[0]=='U')
{
cout<<"you are destined to be famous";
}
else
{
cout<<"you should keep a low profile."<<endl;
}
if (lastname[len-1]=='a'||lastname[len-1]=='e'||lastname[len-1]=='i'||lastname[len-1]=='o'||lastname[0]=='u')
{
cout<<"you already met your true love";
}
else
{
}

cout<<"have a good day!"<<endl;

  return 0;
}
