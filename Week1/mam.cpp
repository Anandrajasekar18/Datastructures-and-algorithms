#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

long Mainproductf(vector <long> &vec,int n){
	long int max[2]={};
	for ( int i =0;i <n ; i++){
  
  // cout << vec[i]<< " ";
  if ( vec[i] > max[1]){
  	if (vec[i]> max[0]){
  		max[1]=max[0];
  	
  		max[0]=vec[i];
  		
  	}
  	else {
  		max[1]=vec[i];
  	}
  } 

}
return max[0]*max[1];
}


int Mainproduct(vector <long> &vec,int n){
   
   
	for ( int i =0;i <n ; i++){
		 
		  cout << vec[i]<< " ";
		  
		}
	long max=0;
	for ( int i =0;i <n ; i++){
	   for ( int j=0;j <n ; j++){
            if (i!=j && vec[i]*vec[j]> max){
            	
            	max = vec[i]*vec[j];
            }


		  }
	   }
	   return max;
	}


int main(){

// while (true){
//    int n= rand()%1000+2;
//    cout << n << endl;
//    vector <long> vec(n);

//    for ( int i =0;i <n ; i++){
	    
//    	    vec[i]= rand()%10000;
//    	    cout << vec[i]<< " ";
// 		}
//    long res1= Mainproductf(vec,n);
//    long res2= Mainproduct(vec,n);
//    if( res1!=res2){
//    	cout << "error" <<endl<< res1 << " "<< res2<< endl;
//    break;
//    }
//    else {
//    	cout << "ok"<<endl<< res1 << " "<< res2<<endl;
//    }


// }




int n;
cin >> n;
vector <long> vec(n);
for ( int i =0;i <n ; i++){
	    
   	    cin>> vec[i];
		}
long  result=Mainproductf(vec,n);


cout << result	<< endl;
return 0;
}