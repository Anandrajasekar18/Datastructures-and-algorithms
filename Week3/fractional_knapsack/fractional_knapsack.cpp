#include <iostream>
#include <vector>

using std::vector;
int min( int a ,int b){
  if (a>b){
    return b;
  }
  else{
    return a;
  }
}
   


double get_optimal_value(int n,int capacity, vector<int> weights, vector<int> values) {
  
  

  double value = 0.0;int val;int index;
  vector<int> vec1(n, 0);
  while(capacity >0 && weights!=vec1){
     
    double max=0.0;
     for (int i = 0; i < n;i++){
      if (weights[i]>0 && (double)values[i]/weights[i]>max){
        max= (double)values[i]/weights[i];
        index=i;
     }
   }
    val = min(weights[index],capacity);
   
    value+=val *max;
    capacity -=val;
    weights[index]-=val;
    // std::cout << value << " "<< max<<std::endl;
 

  }
  

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(n,capacity, weights, values);

  std::cout.precision(9);
  std::cout << optimal_value << std::endl;
  return 0;
}
