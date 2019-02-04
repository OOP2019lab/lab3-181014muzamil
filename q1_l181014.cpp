#include<iostream>
#include<string>
using namespace std;

struct gitHubUser{  //struct of github users

	string firstName;
	string userName;
	string password;
	string email;
    int folderCount; 
    string * nameofins;
	string * qualification;  
};


void setEduBckGrng(gitHubUser & user)
{
	int size=10;
	cout<<user.firstName<<" Enter Your Institute Name :"<<endl;
	user.nameofins=new string [10];
	cin>>user.nameofins[20];
	cout<<user.firstName<<" Enter Your Qualification level :"<<endl;
	user.qualification=new string [10];
	cin>>user.qualification[20];
}

void printEduBckGrng(gitHubUser & user)
{
	cout<<user.firstName<<"'s Institute :";
	cout<<user.nameofins<<endl;
	cout<<user.firstName<<"'s Qualification level :";
	cout<<user.qualification<<endl;
}

int main(){
	gitHubUser user1;
	user1.firstName="Ali";
	setEduBckGrng(user1);
	printEduBckGrng(user1);

}