#include <iostream>
#include <cstdlib>
#include <cmath>
int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}
long long fibonacci_sum_fast(long long n){
	long long prev_1 =0,prev_2,curr=1,sum=1;
	if(n<=1){
       return n;
    }
    for (int i=2;i<=n;i++){
    	prev_2=prev_1;
    	prev_1=curr;
    	curr=(prev_2+prev_1)%10;
    	// std::cout << curr<<std::endl;
        sum+=(curr);
    }
    // for (int i=1;i<=n;i++){
    // 	curr=(1/sqrt(5)*(pow((1+sqrt(5)/2),i)-pow((1-sqrt(5)/2),i)));
    // 	sum+=curr;
    // }
    // curr=(1/sqrt(5)*(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n)));
    // return curr;
    return sum%10;
}

int main() {
	while (true){
	   long long n= rand()%+20;
	   std::cout << n << std::endl;
	   
	   int res1=  fibonacci_sum_naive(n);
	   int res2= fibonacci_sum_fast(n);
	   if( res1!=res2){
	   	std::cout << "error" <<std::endl<< res1 << " "<< res2<<std:: endl;
	   break;
	   }
	   else {
	   	std::cout << "ok"<<std::endl<< res1 << " "<< res2<<std::endl;
	   }
	}




    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
