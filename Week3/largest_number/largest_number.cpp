// #include <algorithm>
// #include <sstream>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
// #include <cstdlib>

// using std::vector;
// using std::string;

// string naive(vector<int> vec){
//   std::stringstream ret;
//   if (vec[1]>vec[0]){
//      ret << vec[1]<<vec[0];
//   }
//   else{
//     ret << vec[0]<<vec[1];

//   }


//   string result;
//   ret >> result;
//   return result;
// }

// int ind(int a){
//   int index=1;
//   while(a/10!=0){
//     a=a/10;
//     index+=1;
//   }
//   // std:: cout << index;
//   return index;
// }
// int give(int a){
//   std::stringstream ret;
//   int x= ind(a);
//   ret << a;
//   for (int i=x;i <3;i++){
//     ret<<a%10;
//   }
//    ret >> x;
//   // std::cout << x<< std::endl;
//   return x;
// }

// string largest_number(vector<int> a) {
//   vector <int> b(a.size());
//    for(int i=1;i < a.size();i++){
//     int temp1=a[i],index=i;
//     for(int j=i-1;j>=0;j--){
//       if(temp1>a[j]){
       
//         a[j+1]=a[j];
//         index=j;
//       }
//     }
    
//     a[index]=temp1;
//   }
  

//   for(int i=0;i<a.size();i++){
//     b[i]=give(a[i]);

//   }

//   for(int i=1;i < a.size();i++){
//     int temp=b[i],temp1=a[i],index=i;
//     for(int j=i-1;j>=0;j--){
//       if(temp>b[j]){
//         b[j+1]=b[j];
//         a[j+1]=a[j];
//         index=j;
//       }
//     }
//     b[index]=temp;
//     a[index]=temp1;
//   }
//   for(int i=1;i < a.size();i++){
//     int temp = b[i], temp1=a[i];
    
       
//       if(temp==b[i+1]){
//       std::cout << a[i]/(int)pow(10,ind(a[i])-1)-a[i]%10 ;
//         if(a[i]/(int)pow(10,ind(a[i])-1)-a[i]%10 >0){
//            a[i]=a[i+1];
//            a[i+1]=temp1;
         
//         }
        
        
//       }
//     }
    
    
  
//   // for(int i=0;i<a.size();i++){
//   //  std::cout << a[i]<<" ";

//   // }
  
//   //write your code here
//   std::stringstream ret;
//   for (size_t i = 0; i < a.size(); i++) {
//     ret << a[i];
//   }
//   string result;
//   ret >> result;
//   return result;
// }

// int main() {
// //        while (true){
// //    int a= rand()%10,b= rand()%10;
// //    std::cout << a <<" "<< b<< std::endl;
// //    vector <int> vec;
// //    vec.push_back(a);vec.push_back(b);
// //   string res1= naive(vec);
// //   string res2= largest_number(vec);
// //    if( res1!=res2){
// //      std::cout << "error" <<std::endl<< res1 << " "<< res2<<std:: endl;
// //    break;
// //    }
// //    else {
// //      std::cout << "ok"<<std::endl<< res1 << " "<< res2<<std::endl;
// //    }
// // }

//   int n;
//   std::cin >> n;
//   vector<int> a(n);
//   for (size_t i = 0; i < a.size(); i++) {
//     std::cin >> a[i];
//   }
//   std::cout << largest_number(a)<<std::endl;

// }
#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

bool isgreater(string temp,string temp1){
  string a,b;
  a=temp+temp1;
  b=temp1+temp;
  if(a>b){
    return true;
  }
  else{
    return false;
  }

}

string largest_number(vector<string> a) {
  for (int i =1;i < a.size();i++){
        string temp=a[i];int index=i;
        for(int j=i-1;j>=0;j--){
            if(isgreater(temp,a[j])){
                a[j+1]=a[j];
                
                index=j;
            }
            
        }
     a[index]=temp;
     
       
    }
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
