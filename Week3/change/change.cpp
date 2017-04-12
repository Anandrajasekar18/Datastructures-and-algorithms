#include <iostream>

int get_change(int m) {
  int arr[3]={10,5,1};int n=0,temp;
  for ( int i =0;i<3;i++){

      // return n;
     
     temp=m/arr[i];
     m-=arr[i]*temp;
     n+=temp;
     // std::cout<< m << " " << n<< std::endl;
     if ( m==0){
      return n;
    }
  }
  
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
