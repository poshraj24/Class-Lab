//wap to calculate the area of rectangle using scope resolution operator
#include<iostream>
using namespace std;
class details{
private:
int len,br;
public:
int getdata();
int calculate();
}; // end of class
int details::getdata(){
cout<<"Enter the length"<<endl;
cin>>len;
cout<<"Enter the breadth"<<endl;
cin>>br;
return 0;
}
int details::calculate(){
int area,per;
area=len*br;
per=2*(len+br);
cout<<"Area is \t"<<area<<endl;
cout<<"Perimeter is \t"<<per<<endl;
return 0;
}
int main(){
details d;
d.getdata();
d.calculate();
return 0;
}


