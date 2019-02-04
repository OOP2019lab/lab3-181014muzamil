#include"Class.h";


int main(){
	Rectangle A;
	int lenght=0,width=0;
	A.setwidth(width);
	A.setlenght(lenght);
	int m=A.getwidth();
	int n=A.getlenght();
	cout<<A.getarea()<<endl;
	A.drawRectangle();
	A.rotateRectangle();
	cout<<A.getarea()<<endl;
	A.drawRectangle();
}