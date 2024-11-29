#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
template <class T>
using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
constexpr int INF32 = INT_MAX / 2;
constexpr ll INF64 = 1LL << 60;
#define rep(i, a, b) for (ll i = (a); i < ll(b); i++)
#define rrep(i, a, b) for (ll i = (a); i >= ll(b); i--)
#define fore(i, a) for (auto& i : (a))
#define all(a) begin(a), end(a)
template <class T> bool chmin(T& a, const T& b) {
    return (a > b) ? (a = b, true), false;
}
template <class T> bool chmax(T& a, const T& b) {
    return (a < b) ? (a = b, true), false;
}
