#include "Class.h"



void Rectangle::setlenght(int len){
	cout<<"Enter The lenght Of Rectangle"<<endl;
	cin>>len;
		if(len>0)
		lenght=len;
		else
        lenght =0;
}

void Rectangle::setwidth(int wid){
	cout<<"Enter The width Of Rectangle"<<endl;
	cin>>wid;
		if(wid>0)
		width=wid;
		else
        width=0;

}

int Rectangle::getwidth()
{
	return width;
}

int Rectangle::getlenght()
{
return lenght;
}

int Rectangle::getarea()
{
	cout<<"Area :"<<endl;
int area=lenght*width;
return area;
}

void Rectangle::rotateRectangle()
{
cout<<"after Rotating"<<endl;
int temp=lenght;
lenght=width;
width=temp;
}

void Rectangle::drawRectangle()
{
cout<<"Your Rectangle"<<endl;
for(int i=0;i<lenght;i++)
{
	for(int j=0;j<width;j++)
	{
	cout<<"*";
	}
	cout<<endl;
}
}