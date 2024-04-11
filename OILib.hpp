#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <forward_list>
#include <functional>
#include <stdexcept>
#include <exception>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <cstring>
#include <utility>
#include <random>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <tuple>
#include <cmath>
#include <list>
#include <map>
#include <set>

using namespace std;

using LL = long long;
using ULL = unsigned long long;
using Double = long double;

mt19937 random { random_device().operator()() };

void initProgram(bool useIOStream = true) {
  if (useIOStream) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
  }
}

void openFile(const string &fileName) {
  freopen((fileName + ".in").c_str(), "r", stdin);
  freopen((fileName + ".out").c_str(), "w", stdout);
}

template <class Ty>
ostream &operator<<(ostream &out, vector<Ty> vec) {
  for (int i = 0; i < vec.size(); i++) {
    out << i;
    if (i != vec.size() - 1) {
      out << ' ';
    }
  }
  return out;
}

void debug() {  }

template <class Ty, class... More>
void debug(Ty it, More... more) {
  cout << it << ' ';
  debug(more...);
}

template <class Fun>
void multipleTestCases(Fun solve, bool testNumber = true) {
  if (!testNumber) {
    while (cin) {
      solve();
    }
  } else {
    int test;
    for (cin >> test; test; test--) {
      solve();
    }
  }
}