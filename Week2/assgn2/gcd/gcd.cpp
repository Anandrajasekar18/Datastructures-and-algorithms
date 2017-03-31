#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
void swap(int &a,int &b){
 int temp;
 temp= a;
 a=b;
 b=temp;


}
int gcd_fast(int a, int b) {
  
  if(b==0){
    return a;
  }
  else{
    int temp;
    temp= b;
    b=a%b;
    a = temp;
    return gcd_fast(a,b);
  }
}

int main() {
//        while (true){
//    int a= rand()%+20+1,b= rand()%+20+1;
//    std::cout << a <<" "<< b<< std::endl;
   
//   int res1=  gcd_fast(a,b);
//   int res2= gcd_naive(a, b);
//    if( res1!=res2){
//      std::cout << "error" <<std::endl<< res1 << " "<< res2<<std:: endl;
//    break;
//    }
//    else {
//      std::cout << "ok"<<std::endl<< res1 << " "<< res2<<std::endl;
//    }
// }


  int a, b;
  std::cin >> a >> b;
  if ( b>a ){
    swap (a,b);
  }
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
