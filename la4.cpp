#include<iostream>
using namespace std;
class details{
public:
int roll;
char name[10],section;
int get_details(){
cout<<"Enter student's name"<<endl;
cin>>name;
cout<<"Enter the section"<<endl;
cin>>section;
cout<<"Enter the roll number"<<endl;
cin>>roll;
return 0;
}
int display(){
cout<<"Name is"<<name<<endl;
cout<<"Section is"<<sec<<endl;
cout<<"Roll number is"<<roll<<endl;
return 0;
}
}; //end of class
int main(){
details d;
d.get_details();
d.display();
return 0;
}

