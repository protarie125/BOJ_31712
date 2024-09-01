#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll cu, du;
ll cd, dd;
ll cp, dp;
ll h;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> cu >> du;
  cin >> cd >> dd;
  cin >> cp >> dp;
  cin >> h;

  h -= du;
  h -= dd;
  h -= dp;

  ll nu = cu;
  ll nd = cd;
  ll np = cp;
  ll ans = 0;
  while (0 < h) {
    nu -= 1;
    if (0 == nu) {
      h -= du;
      nu = cu;
    }

    nd -= 1;
    if (0 == nd) {
      h -= dd;
      nd = cd;
    }

    np -= 1;
    if (0 == np) {
      h -= dp;
      np = cp;
    }

    ++ans;
  }
  cout << ans;

  return 0;
}