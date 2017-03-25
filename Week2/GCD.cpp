#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


void swap(int &a ,int &b){
   int temp;
    temp= a;
    a = b;
    b= temp;
    
}
int GCD(int a , int b){
  if (b ==0){
  	return a;
  }
  else {
  	int temp;
  	temp = b;
  	b= a%b;
  	a =temp;
  	return GCD (a,b);
  }

 
  

}


int main(){
	int a ,b;
    cin >> a >> b;
    
     if (b>a){
     swap(a,b);
     // cout << a << b;

   }

    int res=GCD(a,b);
    cout << res ;
    return 0;
}
