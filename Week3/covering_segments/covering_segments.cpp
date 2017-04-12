#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;


struct Segment {
  int start, end;
};

vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  struct Segment temp;
  for ( int i=1;i < segments.size();i++){
  	int index=i;
    temp.start=segments[i].start;
    temp.end=segments[i].end;
    for(int j=i-1;j>=0;j--){
    		if(temp.end<segments[j].end ){
    		segments[j+1].end=segments[j].end ;
            segments[j+1].start=segments[j].start;
    		index=j;
    	}
    }
    segments[index].start=temp.start; 
    segments[index].end=temp.end ;
  }
  
  
  int b,count=0;
  for(int i=0;i < segments.size();i++){
  	 // std:: cout << i;
     b=segments[i].end ;
     // std:: cout <<b;
     points.push_back(b);
     
     while(segments[i].start<=b && segments[i].end >=b){
       i++;
       
     } 
     i=i-1;

  }
  
  // for (size_t i = 0; i < segments.size(); ++i) {
  //   points.push_back(segments[i].start);
  //   points.push_back(segments[i].end);
  // }
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] <<" ";
  }
}
