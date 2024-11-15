#include <iostream>
using namespace std;
int main(){
/*	 int Arr [8]; //decleartion
   
   	Arr[0]=56;  //
 	Arr[6]=67;
 	Arr[2]=56;
 	cout<<Arr[0];// 	
    int Array[5]={12,34,56.78,34,22}; //data loss index -->2(type int)

    cout<<Array [2]; }  

  int Array[5]={12,34,"apple",34,22}; //error
   cout<<Aarray[2];
} */

//  int main(){
//	int latest compiler
//	computer can typecast data as
	
//	bigger to smaller
//	double-->int-->char
	//  8       4     1
	  
	// double to, doible to char ,int to char, possible
	 // but
	  
	 // Smaller to bigger
	 // int to double // error thow)
	//double Array[5]={12,34,'A',34,22};  //display ASCII value (typecast into int)
//	cout<<Array[2];//
	
	//int Array [5]={12,34,56.78,34,22}; //
//	cout<<Array[2];

   /*    int Array[5]={12,34,56,34,22};
       cout<<Array[500909]; //undefinend vi
}    */


// one dimentional Array--------------------->

// datatype var[size];
// static array;
// dynamic array
/* int cybrom[5];
 cout<<sizeof(cybrom); */	
 
/* int arr[5]={12,4,5,7,8};
 cout<<arr[4];
 int aar2[5];
 cout<<arr[0]<<"\n"<<arr[1];  */
 
/* int arr[]={10,2,3,4,5,6,7,8};
 int len=sizeof(arr)/sizeof(arr[0]);  // 
 cout<<len;
 
  double arr[]={10,2,3,4,5,6,7,8};
 double len=sizeof(arr)/sizeof(arr[0]);
 cout<<len; */
 
/*  char ch[]="welcome";
 char len=sizeof(ch)/sizeof(ch[0]); // char mein nill reserve hota hai +1 size leta ahi
 cout<<len2<<"\n";  */
 
/* float arr[]={10,3,5,1,2,3,4,5,9};
 int len =sizeof(arr)/sizeof(arr[0]);
 cout<<len<<"\n";
 char ch[]="welcome";
 int len2=sizeof(ch)/sizeof(ch[0]);
 cout<<len2<<"\n";
 char s[1]='g'; // error
 int s[3]={10,20,30};
 cout<<s[0]<<"\n";
 cout<<s[1]<<"\n";
 cout<<s[2]<<"\n";
 cout<<s[3]; // drawback
 int sp[3]={100,900,800};
 int (int i=0;i<len;i++){
 	cout<<sp[i]<<"\n";
 }
 char s[]="welcome";
 for(int i=0;s[i]!='\0';i++){
 	cout<<s[i];
 }
 int arr[]={890,35,-46,78};
 cout<<*arr<<"\n";
 cout<<*(arr+3)<<"\n";
 cout<<arr[2]<<"\n";
 cout<<-2[arr]<<"\n";
 cout<<arr[-2]; // garbage */
/*	int n;
	cout<<"enter n:";
	cin>>n;
	int marks[n]; // declartion of Array, uninitalized
 	for(int i=0;i<n;i++){
		cout<<"enter marks of student at index"<<i<<":";
	cin>>marks[i];
	}
	for(int i=0;i<n;i++){
		cout<<"marks of student at index"<<i<<":"<<marks[i]<<endl;
	} 
}  */ 

/*
     
     int n;
	cout<<"enter n:";
	cin>>n;
	int marks[n];
   for(int i=n-1;i>=0;i--){     //n-1 ,0
     	cout<<"enter marks of student at index"<<i<<":";
   cin>>marks[i];
	 }
	 for(int i=n-1;i>=0;i--){
	 cout<<"marks of student at index"<<i<<":"<<marks[i]<<endl;
    }
}       */   

/*        int n,sum=0;
       cout<<"enter n:";
         cin>>n; //3
         int marks[n];
	 for (int i=0;i<n;i++){   //0 1 2 3
	 	cout<<"enter marks:";  // 20 25 48 78
	 	cin>>marks[i]; 	
 }
	 for(int i=0;i<n;i++){
	 	cout<<marks[i]<<" ";
	 	sum=sum+marks[i];       //sum=0+20=20
	 	                         // sum=20+marks[i]	                         
								  //sum=20+25=45
	 }
	 cout<<"add:"<<sum<<endl;
//	 cout<<"average:"<<sum/(float)n;
}     */
   
//  W.A.P. to shift all zero at the end but relative order should be maintained?
   //     Ex: arr={1,0,2,0,12}
    //    Output: {1,2,12,0,0}
    
   int arr[5]={1,0,2,0,12};
       for(int i=0;i<5;i++){
       	   cout<<arr[i]<<" ";
	   }
	  int   j=0;
	     for(int i=0;i<5;i++){
	     		if(arr[i]!=0){
	     	  arr[j]=arr[i];
	     	  j++;
	     	  cout<<endl;
		 }
			 }
		 while(j<5){
		 arr[j]=0;
		 j++;
	} 
		 for(int i=0;i<5;i++){
		 	cout<<arr[i]<<" ";
		 }
}  





  

   










	   
    
