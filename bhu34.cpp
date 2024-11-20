#include <iostream>
using namespace std;
 
 int main(){
 	int amount,note;
 	cout<<"enter amount:";
 	cin>> amount;

 	if(amount/2000>=1){//2450/2000 ==0
 		note=amount/2000;
 		cout<<"2000:"<<note<<endl;//2000:1
 		amount=amount-2000*note;//amount=2450-2000*1=450
	 }
 	if(amount/500>=1){
 		note=amount/500;
 		cout<<"500:"<<note<<endl;
 		amount=amount-500*note; 	
	 }
	 
	 
 }

 	
 	
 
