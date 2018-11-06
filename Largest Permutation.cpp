// Program in C++ -

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    umap.insert(make_pair(v[i], i));
  }
  int s = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] != n - i) {
      if (s == k)
        break;
      s++;
      unordered_map<int, int>::iterator it;
      it = umap.find(n - i);
      int index = it->second;
      umap[v[index]] = i;
      umap[v[i]] = index;
      swap(v[index], v[i]);
    }
    if (s == k)
      break;
  }
  for (auto x = v.begin(); x < v.end(); x++)
    cout << *x <<" ";

  return 0;
}
