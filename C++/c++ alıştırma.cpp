#include <iostream>
using namespace std;
/*
void printArray(const int *ptr1,const int *ptr2){
  for(;ptr1 !=ptr2;ptr1++){
  	cout<<"Eleman:"<< *ptr1 << endl;
  }	
		
}
int main() {
	int array[]={10,20,30,40,50,60,70,80,90,100};
	printArray(array+2,array+7);
	return 0;
}
*/
/*
struct bilibili {
	int id;
	string name;
	string department;
};
int main(){
	bilibili bilibili1={27,"Rabia Osko","eem"};
	cout<<bilibili1.name<<endl;
	return 0;
}
*/
/*
struct employee {
	int id;
	string name;
	string surname;
	
};
int main(){
	employee employee2={36,"Rabia","Osko"};
	employee *ptr =&employee2;
	cout<<ptr->surname<< endl;
	return 0;	
}
*/
struct lili {
	int id;
	string name;
	string city;
};
void showlili(lili lili){
	cout<<"id:"<<lili.id<<endl;
	cout<<"name:"<<lili.name<<endl;
	cout<<"city:"<<lili.city<<endl;
}
 int main() {
	lili lili3={65,"Rabia","Karabuk"};
	showlili(lili3);
	
	return 0;
} 
 




