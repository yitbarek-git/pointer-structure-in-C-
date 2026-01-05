
#include <iostream>
using namespace std;

struct smartphone {
    string name;
    int storageSpace;
    string color;
    float price;
};

 int main()
  {
int n = 3;
 smartphone *phones = new smartphone[n];

 phones[0].name = "iphone";
 phones[0].color= "gray";
 phones[0].price= 56000;
 phones[0].storageSpace = 128;
 
 phones[1].name = "sumsung galaxy s12";
 phones[1].color= "white";
 phones[1].price= 56000;
 phones[1].storageSpace = 512;
 
 phones[2].name = "itel";
 phones[2].color = "black";
 phones[2].price= 30000;
 phones[2].storageSpace = 64;

 smartphone *ptr0 = &phones[0];
 smartphone *ptr1 = &phones[1];
 smartphone *ptr2= &phones[2];

 cout<<"phone 1"<<endl;

 cout<<ptr0->name<<endl;
 cout<<ptr0->storageSpace<<endl;
 cout<<ptr0->color<<endl;
 cout<<ptr0->price<<endl;

 cout<<"phone 2"<<endl;

 cout<<ptr1->name<<endl;
 cout<<ptr1->storageSpace<<endl;
 cout<<ptr1->color<<endl;
 cout<<ptr1->price<<endl;

 cout<<"phone 3"<<endl;

 cout<<ptr2->name<<endl;
 cout<<ptr2->storageSpace<<endl;
 cout<<ptr2->color<<endl;
 cout<<ptr2->price<<endl;
 
delete[] phones;
return 0;    
 }
