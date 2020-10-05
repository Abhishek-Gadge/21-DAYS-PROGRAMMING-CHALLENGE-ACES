/*Given an array of integers, find the sum of its elements.*/
#include <iostream>
using namespace std;

int main() {
  int t, a, output = 0;
  cin >> t;
  while(t--){
    cin >> a;
    output += a;
  }
  cout << output << endl;
  return 0;
}
