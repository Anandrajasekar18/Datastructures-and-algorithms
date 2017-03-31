#include <iostream>
#include <cstdlib>
long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}
long long calcperiod(long long m){

   //  long long sum[n],mod[n],t1[n],t2[n];int len;
   //  sum[0]=0;sum[1]=1;mod[0]=0;mod[1]=1;
   //  for(long long i =2;i<=n;i++){
   //      sum[i]=sum[i-1]+sum[i-2];
   //      mod[i]=sum[i]%m;
   //  }
   //  for (long long j= 2; j<=n;j++){
   //      if(mod[j]==0){
   //          for (long long k=0;k<j;j++){
   //              t1[k]=mod[k];
   //              std::cout<<t1[k];
   //              t2[k]=mod[j+k];
   //      }
   //      if(t1==t2){
   //        len=j;
   //      }}
   // }
   //  std::cout << len;
    // return sum[n%len]%10;
    int prev_1=1,prev_2,curr=1;
    for (long long i=3;i<=6*m;i++){
        prev_2=prev_1;
        prev_1=curr;
        curr=(prev_1+prev_2)%m;
        if (prev_1==0 && curr==1){
            return i-1;
        }
        

    }
   
}


long long get_fibonacci_huge_fast(long long n,long long m){
   
    if (n <= 1)
        return n;
    long long prev_1=0,prev_2,curr=1,len;
    len= calcperiod(m);
    if(n%len==0){
        return prev_1;
    }
    
    
    for (long long i=2;i<=(n%len);i++){
        prev_2=prev_1;
        prev_1=curr;
        curr=(prev_1+prev_2);
       
        

    }
    return (long)curr%m;
    

}
int main() {
//    while (true){
//    int a= rand()%30+1,b= rand()%20+1;
//    std::cout << a <<" "<< b<< std::endl;
   
//    int res1=  get_fibonacci_huge_fast(a,b);
//    int res2= get_fibonacci_huge_naive(a, b);
//    std::cout<< res1 << " "<< res2<<std:: endl;
//    if( res1!=res2){
//      std::cout << "error" <<std::endl;
//    break;
//    }
//    else {
//      std::cout << "ok"<<std::endl;
//    }
// }



    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
