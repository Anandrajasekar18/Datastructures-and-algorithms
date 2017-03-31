#include <iostream>
#include <cstdlib>

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


long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
 long long lcm_fast(int a,int b) {
  
  if ( b>a ){
    swap (a,b);
  }
  

  
  return (long long)a*b/gcd_fast(a,b);
}

int main() {
// while (true){
//    int a= rand()%+20+1,b= rand()%+20+1;
//    std::cout << a <<" "<< b<< std::endl;
   
//    int res1=  lcm_fast(a,b);
//    int res2= lcm_naive(a, b);
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
  // std::cout<< (long long)a*b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
