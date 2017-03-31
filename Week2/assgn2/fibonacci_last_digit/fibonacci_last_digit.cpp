#include <iostream>
#include <cstdlib>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
int get_fibonacci_last_digit_fast(int n) {
    
    int sum[n];
    sum[1]=1;sum[0]=0;
    

    for (int i = 2; i <= n ; ++i) {
        sum[i]=0;
        sum[i]=(sum[i-1]+sum[i-2])%10;
    }

    return sum[n];
}


int main() {
//      while (true){
//    int n= rand()%+20;
//    std::cout << n << std::endl;
   
//   int res1=  get_fibonacci_last_digit_naive(n);
//   int res2= get_fibonacci_last_digit_fast(n);
//    if( res1!=res2){
//      std::cout << "error" <<std::endl<< res1 << " "<< res2<<std:: endl;
//    break;
//    }
//    else {
//      std::cout << "ok"<<std::endl<< res1 << " "<< res2<<std::endl;
//    }
// }



    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }
