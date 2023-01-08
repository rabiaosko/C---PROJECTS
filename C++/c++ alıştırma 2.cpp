#include <iostream>
using namespace std;
/*
struct student{
	int id;
	char letter;
	
};

int main() {
	
	   cout<<"integer:"<< sizeof(int) <<endl;
	   cout<<"float:"<< sizeof (float)<< endl;
	   cout<<"student:"<< sizeof(student)<< endl;
	  	
	return 0;
}
*/
/*
int main(){ 
int *ptr;
int size;
cout << "kac deger saklayacaksiniz:";
cin>> size;
ptr=new int[size];
for(int i=0;i<size;i++){
	 cout<<"Deger:";
	 cin>>ptr[i];
}	
for(int i=0;i<size;i++){
	cout<<"Eleman:"<< ptr[i]<< endl; 
}
delete[] ptr;
}
*/
/*
class student{
	public:
	 string name;
	}; 
	int main() {
		student student1;
		student student2;
		student1.name="Rabia Osko";
		student2.name="Bora Çiçek";
		cout<<"Ogrenci 1 ismi:"<<student1.name<< endl;
		cout<< "Ogrenci 2 ismi:"<<student2.name<< endl;
		
	return 0;
}
 */

 class student {
 	public:
 		string name;
 		void tellname(){
 			cout<<"Benim adim:"<< name <<endl;
		 }
 };
int main (){
	student student1;
	student student2;
	student1.name="Rabia Osko";
	student2.name="Asli Gulben Guntay";
	student1.tellname();
	student2.tellname();
}


