#include<iostream>
using namespace std;
class rectangle{
private:
int len,br;
public:
int getdata(){
cout<<"Enter length and breadth"<<endl;
cin>>len>>br;
return 0;
}
int calculate(){
int a,p;
a=len*br;
p=2*(len+br);
cout<<"Area is\t"<<a<<"\t Perimeter is\t"<<p<<endl;
return 0;
}
}; //end of class
int main(){
rectangle r;	//r is an object of rectangle class
r.getdata();
r.calculate();
return 0;
}


