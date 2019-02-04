#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct gitHubUser{  //struct of github users

	string firstName;
	string userName;
	string password;
	string email;
	string * gitHubFolders;
        int    folderCount; 
        string * nameofins;
	string * qualification;  
};

void deepcopy(gitHubUser A,gitHubUser B)
{
	A.firstName=B.firstName;
	A.userName=B.userName;
	A.password=B.password;
	A.email=B.email;
	A.folderCount=B.folderCount;
	A.nameofins=B.nameofins;
	A.qualification=B.qualification;
}
void output(gitHubUser * arr, int userCount)
{ 
	//for output the githubusers
	for(int i=0;i<userCount;i++)
	{
    cout<<endl;
    cout<<"the elements of Structs are"<<endl;
	cout<<"UserName :"<<arr[i].userName<<endl;
	cout<<"FirstName :"<<arr[i].firstName<<endl;
	cout<<"Password :"<<arr[i].password<<endl;
	cout<<"Email :"<<arr[i].email<<endl;
	cout<<"Folders :"<<arr[i].folderCount<<endl;
	cout<<endl;
	}
}

//fucntion to read data
void readDataFromFile( gitHubUser * users)
{
	users=new gitHubUser[2];
	ifstream fin;
	fin.open("c:\\temp\\m.txt");
	if(!fin)
	{
		cout<<"Could not load File"<<endl;
	
	}
	else
	{
		int size=0;
		int folder;
		fin >> size;
		for(int i=0;i<size;i++)
		{
			fin>>users[i].firstName;
			fin>>users[i].userName;
			fin>>users[i].email;
			fin>>users[i].folderCount;
			folder=users[i].folderCount;
			users[i].gitHubFolders=new string[folder];
			fin.ignore();
			for(int j=0;j<folder;j++)
			{
				getline(fin, users[i].gitHubFolders[j]);
			}
		
		}
		output(users,size);
	}
}

void setEduBckGrnd(gitHubUser & user)
{
	int size=10;
	cout<<user.firstName<<" Enter Your Institute Name :"<<endl;
	user.nameofins=new string;
	cin>>*user.nameofins;
	cout<<user.firstName<<" Enter Your Qualification level :"<<endl;
	user.qualification=new string;
	cin>>*user.qualification;
}

void printEduBckGrnd(gitHubUser & user)
{
	cout<<user.firstName<<"'s Institute :";
	cout<<*user.nameofins<<endl;
	cout<<user.firstName<<"'s Qualification level :";
	cout<<*user.qualification<<endl;
}

void removeEduBckGrnd(gitHubUser &user)
{
	delete [] user.nameofins;
	delete [] user.qualification;
}

void backup(gitHubUser *originalArry, gitHubUser *&backupArry, int userCount)
{

	for(int i=0;i<userCount;i++)
	{
	//	backupArry[i]=originalArry[i];
	backupArry[i].firstName=originalArry[i].firstName;
	backupArry[i].userName=originalArry[i].userName;
	backupArry[i].password=originalArry[i].password;
	backupArry[i].email=originalArry[i].email;
	backupArry[i].folderCount=originalArry[i].folderCount;
	backupArry[i].nameofins=originalArry[i].nameofins;
	backupArry[i].qualification=originalArry[i].qualification;
	}
}

void menu()
{
int press;
int userCount=2;
gitHubUser user1;
gitHubUser * usersarr=new gitHubUser [2];
gitHubUser * backuparr=new gitHubUser [2];
readDataFromFile(usersarr);
cout<<"Press 1 for Function 1 & 2"<<endl;
cout<<"Press 2 for Function 3"<<endl;
cout<<"Press 3 for Function 4"<<endl;

cin>>press;
if(press==1)
{	
	setEduBckGrnd(user1);
	printEduBckGrnd(user1);
}
if(press==2)
{   
	
	cout<<"The Data is removes so it will not be printed"<<endl;
	removeEduBckGrnd(user1);
	printEduBckGrnd(user1);
}
if(press==3)
{
	cout<<endl<<"The Data is copied "<<endl;
	readDataFromFile(usersarr);
	backup(usersarr,backuparr,userCount);
	//output(backuparr,2);
}
delete[] usersarr;
delete[] backuparr;
}

int main(){
	menu();
	return 0;
}
