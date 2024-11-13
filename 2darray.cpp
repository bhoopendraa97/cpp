//   Q 2D Array Question----------------------------->


#include <iostream>
using namespace std;
    int main(){
 /*	int row,column;
	cout<<"enter row and column:";
	cin>>row>>column;  //4    //3
	int marks[row][column];    //marks[4][3]	
	for(int i=0;i<row;i++){   //i=0
		for(int j=0;j<column;j++){  //j=0,j<3
		cout<<"enter data for index"<<i<<j<<" ";
		cin>>marks[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;i<row;i++){
			cout<<"marks at index"<<i<<j<<"="<<marks[i][j]<<endl;
		}	
	}	
}         */    
   // Row wise addition---------------------------->
/*  int Arr[3][3]={1,5,1,2,6,9,1,11,2};
    int sum=0;
    for(int i=0;i<3;i++){
        sum=0;
    	for(int j=0;j<3;j++){
    		cout<<Arr[i][j]<<" ";
    		sum=sum+Arr[i][j];
		}
		cout<<"-------------->"<<sum<<endl;
	}
}      */      
// Given an array named data------------------------->
/*   int Arr[3][3]={1,1,2,5,6,7,5,5,5};
         int add=0;
	   for(int i=0;i<3;i++){
       	for(int j=0;j<3;j++){
       		cout<<Arr[i][j]<<" ";
       		add=add+Arr[i][j];
		   }
		   cout<<"="<<add<<endl;
	     }
    }   */  


//column baise addition------------------------->
       
/*   int Arr[3][3]={1,5,1,2,6,9,1,11,2};       //   1  5  1 
   int columnsum[3]={0,0,0};               //     2  6  9
       int sum;                             //    1  11 2
    	                               //         4  22 12       	
    	for(int i=0;i<3;i++){
    		 sum=0;
    		 for(int j=0;j<3;j++){
    		 	sum=sum+Arr[j][i];
    	}
           columnsum[i]=sum;
		}
		for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
    		 cout<<columnsum[i]<<" ";
}    */
 
 // wap to manupulat all the element to -------------------------------------->            
/*       int Arr[3][3]={1,1,2,5,6,7,5,5,5};	    //1 0 0
             for(int i=0;i<3;i++){             // 0 6 0
 	      	for(int j=0;j<3;j++){              // 0 0 5
	      		if(i!=j){
	      			Arr[i][j]=0;
				  }
			  }
		  }
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;	
     	}	  
	}  */

//Q4) wap to add 2darry of n+n--------------->		  
 /*    int arrA[3][3]={{1,1,2},{5,6,7},{1,2,5}};
     int arrB[3][3]={{5,5,5},{2,4,6},{7,1,3}};
     int arrC[3][3];
     for(int i=0;i<3;i++){
     	for(int j=0;j<3;j++){
     		arrC[i][j]=arrA[i][j]+arrB[i][j];
     		cout<<arrC[i][j]<<" ";
		 }
		 cout<<endl;
	 }
}   */ 
 
 /*   int main(){
   	int arr[5]={0,1,0,3,12};     //{1,3,12,0,0} output
   	int j=0;
   	for(int i=0;i<5;i++){
   		if(arr[i]!=0){
   			arr[j]=arr[i];
   			j++;
		   }
	   }
	   while(j<5){
	   	arr[j]=0;
	   	j++;
	   }
	   for(int i=0;i<5;i++){
	   	cout<<arr[i]<<" ";
	   }
   }      */

/* int arr[2][3]={2,5,1,6,7,8};
 for(int r=0;r<2;r++){
 	for(int c=0;c<3;c++){
 		cout<<arr[r][c]<<"t";
	 }
	 cout<<"\n";
 }
}  */

  
 /*  int arr[2][3];
   cout<<"enter 6 values\n";
 for(int r=0;r<2;r++){
 	for(int c=0;c<3;c++){
 		cin>>arr[r][c];
}
}
cout<<"\n stored data in 2d\n";
for(int r=0;r<2;r++){
	for(int c=0;c<3;c++){
		cout<<arr[r][c];
	}
	cout<<"\n";
}
}  */
// write to display even number in 2d- arry------------------

/* int arr[3][3]={2,6,9,5,8,4,3,7,1};
    for(int r=0;r<3;r++){
    	for(int c=0;c<3;c++){
    		if(arr[r][c]%2==0){
    			cout<<arr[r][c]<<" ";
			}
		}
	}
}   */

/*  int arr[3][3]={2,6,9,5,8,4,3,7,1};
    for(int r=0;r<3;r++){
    	for(int c=0;c<3;c++){
    		if(arr[r][c]%2!=0){
    			cout<<arr[r][c]<<" ";
			}
		}
	}
} */

   
//write to display the sum of the value of 2d array--------
 /*  int arr[3][3]={2,6,9,5,8,4,3,7,1};
     int sum=0;
    for(int r=0;r<3;r++){
    	for(int c=0;c<3;c++){
    		 sum=sum+arr[r][c];
		}
	}
	cout<<"Total sum"<<sum;
}   */

// write to display the count of the value of 2d- array-----












    
	   
	   
