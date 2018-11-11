// Program in C++ -

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int  arr[n];
  int count = 0;
  int page = 1, prob=1;
  for (int i =1; i <= n; i++) {
    cin >> arr[i];}
    for (int i = 1; i <= n; i++)
   {   prob = 1;
      while (prob <= arr[i]) {
      for (int j = 1; j <= k && prob <= arr[i]; j++) 
      {
        if (prob == page)
          count++;

          prob++;
      }

      page = page + 1;
    }
  }
  cout << count;
  return 0;
}
