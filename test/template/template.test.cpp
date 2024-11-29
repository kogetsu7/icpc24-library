#define PROBLEM \
    "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A"

#include "../../template/template.hpp"

int main() {
    ll a = 0;
    assert(!chmin(a, INF64));
    assert(!chmin(a, ll(INF32)));
    assert(chmax(a, ll(INF32)));
    assert(chmax(a, ll(INF64)));

    cout << "Hello World\n";

    return 0;
}
