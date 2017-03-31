#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    if (to <= 1)
        return to;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < from - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    long long sum = current;

    for (long long i = 0; i < to - from; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}


int calcperiod(long long m){
  int prev_1=1,prev_2,curr=1;
for(int i =3;i<=6*m;i++){
   prev_2= prev_1;
   prev_1=curr;
   curr=(prev_1+prev_2)%m;
   if(curr==1 && prev_1==0){  return i-1; }
}
 
}
long long get_fibonacci_partial_sum_fast(long long m,long long n){
    long long prev_1 =0,prev_2,curr=1,sum=1;
    
    const int k=1000000;
    int len=calcperiod(k);

    for (int i=2;i<=len;i++){
        prev_2=prev_1;
        prev_1=curr;
        curr=(prev_2+prev_1)%10;
        // std::cout << curr<<std::endl;
        sum+=(curr);
    }
    sum*=((n/len)-(m/len));
     prev_1 =0,prev_2,curr=1;
    for (int i=2;i<=n%len;i++){
        prev_2=prev_1;
        prev_1=curr;
        curr=(prev_2+prev_1)%10;
        // std::cout << curr<<std::endl;
        sum+=(curr);
    }
    sum+=1;
    prev_1 =0,prev_2,curr=1;
    for (int i=2;i<m%len;i++){
        prev_2=prev_1;
        prev_1=curr;
        curr=(prev_2+prev_1)%10;
        // std::cout << curr<<std::endl;
        sum-=(curr);}
    if (m!=1){
        sum-=1;
    }
    // for (int i=1;i<=n;i++){
    //  curr=(1/sqrt(5)*(pow((1+sqrt(5)/2),i)-pow((1-sqrt(5)/2),i)));
    //  sum+=curr;
    // }
    // curr=(1/sqrt(5)*(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n)));
    // return curr;
    return (sum)%10;
}
int main() {
//     while (true){
//    int a= rand()%+10+1,b= rand()%+20+1;
//    std::cout << a <<" "<< b<< std::endl;
   
//    int res1=  get_fibonacci_partial_sum_fast(a,b);
//    int res2= get_fibonacci_partial_sum_naive(a, b);
//    if( res1!=res2){
//      std::cout << "error" <<std::endl<< res1 << " "<< res2<<std:: endl;
//    break;
//    }
//    else {
//      std::cout << "ok"<<std::endl<< res1 << " "<< res2<<std::endl;
//    }
// }


    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
