#include <iostream>
/*
using namespace std;
 void selam(){
 	cout << "Naber ?" << endl;
 	cout <<"Iyidir senden naber ?" << endl;
 
 }

int main() {
	
	selam();
	

	return 0;
}
*/
 using namespace std;
int factorial (int sayi){
 	int faktoriyel=1;
 	for (int i=2;i<=sayi;i++){
 		faktoriyel *=i;
	 }
	 cout<< "Faktoriyel:"<< faktoriyel << endl;
 } 
 
 
 
 int main(){
 	int j;
 	cout<<"sayiyi giriniz:";
 	cin>>j;
 	factorial(j);
 }
