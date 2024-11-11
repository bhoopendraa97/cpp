#include <iostream>
using namespace std;

//void multi(int a,int b){
//	cout<<"result="<<a*b;
//}
 
/* void sqre(int a){
 	 cout<<"result="<<a*a<<"\n";
 } */
/*      int f=1;
 void fact( int a)
    for( int a;a>0;a--){
    	 f=f*a;
	}

  void display(){
  	cout<<"factorial="<<f;
  }  */
  
 /* int dealer(int petrol){
  	   return 80*petrol;
  	
  	
  }  */
// call by value using function by swapping marthod-----------------> 
/*  void swp (int a, int b) 
  {
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	
  	cout<<"value of a="<<a<<"\n";
  	cout<<"value of b="<<b<<"\n";
  } 
  
  int main(){
  	 int x,y;
cout<<"enter 2 no\n";
cin>>x>>y;
swp(x,y);
cout<<"value of x="<<x<<"\n";
cout<<"value of y="<<y<<"\n";	
  }  */
  
// call by value using function by swapping marthod--------------------------------> 
   //swapping  call by refrence---------->mrmory shere hotee hai
/*  void swp (int &a, int &b) 
  {
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	
  	cout<<"value of a="<<a<<"\n";
  	cout<<"value of b="<<b<<"\n";
  } 
  
  int main(){
  	int x,y;
  	cout<<"enter 2 value:";
  	cin>>x>>y;
  	swp(x,y);
  	cout<<"value of x="<<x<<"\n";
  	cout<<"value of y="<<y<<"\n";	
  }  */
  
// Array as parameter in a function----------- 
/* void arr(int [] ,int s)
  {
  	for(int i=0;i<s;i++){	
  		cout<<a[i]<<"\n";
	 }
 }
 
int main(){
int x[]={2,1,3,4,5};
int s=sizeof(x)/sizeof(x[0]);
arr(x,s);
}  */

// void sum (int a ,int b)
// void sum (int , int)---function pointer mein use karte hai

 /*  void arr(int a[],int s){
	for(int i=0;i<s;i++){
		a[i]=a[i]+10;
		cout<<a[i]<<"\t";
	}
}
int main(){
	int x[]={2,1,3,4,5};
	int s=sizeof(x)/sizeof(x[0]);
	arr(x,s);
	cout<<"\n";
	for(int i=0;i<s;i++){
		cout<<x[i]<<"\t";
	}
}   */

// void sum (int a ,int b)
// void sum (int , int)---function pointer mein use karte hai
 /*    void show(int arr[],int size){
     	  for(int i=0;i<size;i++){
     	  	arr[i]=arr[i]+10;
     	  	cout<<arr[i]<<"\n";
		   }
	 }
  int main(){
  	int arr[]={20,13,43,2,5};
  	int size=sizeof(arr)/sizeof(arr[0]);
  	show(arr,size);
  	cout<<"original array\n";
  	for(int i=0;i<size;i++){     // (int,int)  function opinter
	   		cout<<arr[i]<<"\n";   // (int a, int b) normal function
	  }
  }   */
  
  
  int sbi (int code, int pwd){
  	  return 1000;
  }
  int axis (int code, int pwd){
  	 return 2000;
  }
  int main(){
  int (*atm) (int,int);
  atm=sbi;
  cout<<"min balance of sbi="<<atm(1001,1234)<<"\n";
  atm=axis;
  cout<<"min balance of axis="<<atm(1001,1245)<<"\n";	
  }
  
  
  
  
  
  
  

































	
	 
 
  
  
  
  
  
  
  
  
   
/* int main(){
 //	multi(3,4);
/* sum(3);
 sum(3,5);
 sum();
 sum(2,4) */
 /* int a;
  cout<<"enter any number\n";
  cin>>a;
  sqre(a);
 	
 } */
 //  int a;
  // cout<<"enter any number\n"';
 //  cin>>a;
// fact();  
 
  // wrte a programm to find the gretest number between 2 using function
  //write a programme to swapping using function
  // write a find the srurq root of any number using function---------->
 
 
 

/*void sum(int a=9,int b=0, int c=9){
	cout<<"result="<<a+b+c;
} */

//cout<<"enter liters\n";
//cin>>cdemand;
//cout<<deler(demond)<<"rs";
 /* int cdemand;
cout<<"how much petrol\n";
cin>>cdemand; //2
cout<<"customer bill="<<dealer(cdemand)+(cdemand*5)<<"rs"; */

   



















