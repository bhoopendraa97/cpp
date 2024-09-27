#include <iostream>
using namespace std;
//Q1)  write a recursive function to calculatethe sum of the first number.

 /*  int sum(int n){
	if(n>0)    // head
	return n+sum(n-1);
	
	else    // tell
	return 0;
}
  int main(){
  	int n;
  	cout<<"enter the number";
  	cin>>n;
  	sum(n);
  	cout<<sum(n);
  }     */ 
  

//Q3)  what is recursion and classify its type,wap to display 10 natural number using head
// recursion and tell recursion--------->  
/*  void natural_sum(int n){
  	 if(n==11)
  	 return;
  	 
  	cout<<n<<" ";//head
  	cout<<endl;
  	natural_sum(n+1);
  	cout<<endl;
  	cout<<n<<" ";//tail
	  		
  }
  
  int main(){
  	natural_sum(1);
  	
   }   */

//Q2) write a recursive function to count the number of digit in a positive integer

   int countdigit(int n){
    	if(n<10){
    		return 1;
		}
		else{
			return 1+countdigit(n/10);
			// receive call
		}
	}
		int main(){
			int n;
			cout<<"enter your number";
			cin>>n;
			countdigit(n);
			cout<<countdigit(n);
		}   
		  
//Q3) write a recursive function to check if a string is a palindrome.a palindrome reads the 
// same forwards and backword.
  /*  bool is palindrome(string &str){
    	int start=0;
    	int end=str.length()-1;
    	
          while(start<end)    
	}  */


		
		
