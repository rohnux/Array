/* You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left.
At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. 
When all the remaining sticks are the same length, they cannot be shortened so discard them.

Given the lengths of n sticks, print the number of sticks that are left before each iteration until there are none left.

For example, there are n=3 sticks of lengths arr=[1,2,3] . The shortest stick length is 1 , so we cut that length from the longer two and discard the pieces of length 1 . Now our lengths are arr=[1,2] .
Again, the shortest stick is of length , so we cut that amount from the longer stick and discard those pieces. There is only one stick left,arr=[1] , so we discard that stick. Our lengths are arr[3,2,1].

Input Format :

The first line contains a single integer n , the size of arr . 
The next line contains n space-separated integers, each an arr[i]  where each value represents the length of the ith stick.

Output Format :

For each operation, print the number of sticks that are present before the operation on separate lines.

Constraints
1<=n<=1000
1<=arr[i]<=1000
Sample Input -

6
5 4 4 2 2 8
Sample Output -

6
4
2
1


Program in C++ -

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  int i;
  for (i = 0; i < n; i++) {
    int count = 0;
    while (arr[i] == 0) {
      i++;
    }
    int val = arr[i];
    for (int j = i; j < n; j++) {
      arr[j] = arr[j] - val;
      count++;
    }
 if(count!=0)
    cout << count << "\n";
  }

  return 0;
}
