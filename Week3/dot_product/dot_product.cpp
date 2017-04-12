#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
// void swap(int &a ,int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

long long max_dot_product(vector<int> a, vector<int> b) {

    
    for (int i =1;i < a.size();i++){
        int temp=a[i],index=i;
        for(int j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
                
                index=j;
            }
            
        }
     a[index]=temp;
     
       
    }
     for (int i =1;i < b.size();i++){
        int temp=b[i],index=i;
        for(int j=i-1;j>=0;j--){
            if(temp<b[j]){
                b[j+1]=b[j];
                
                index=j;
            }
            
        }
     b[index]=temp;
     
       
    }
   
    
	// int max;
	// for(int i =0;i< a.size()-1;i++){
 //       max=i;
 //       for(int j=i+1;j<a.size();j++){
 //       if (a[j]>a[max]){
 //       	max=j;
 //       }

 //      }
 //      swap(a[i],a[max]);
       

 //      for(int j=i+1;j<a.size();j++){
 //       if (b[j]>b[max]){
 //       	max=j;
 //       }
       
 //      }
 //      swap(b[i],b[max]);



	// }
	
  

  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
