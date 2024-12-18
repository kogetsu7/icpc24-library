#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

template <class T>
using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

constexpr int INF32 = INT_MAX / 2;
constexpr ll INF64 = 1LL << 60;
const ld PI = acos(-1);

#define rep(i, a, b) for (ll i = (a); i < ll(b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= ll(b); --i)
#define fore(i, a) for (auto& i : (a))

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

template <class T> bool chmin(T& a, const T& b) {
    return (a > b) ? (a = b, true) : false;
}
template <class T> bool chmax(T& a, const T& b) {
    return (a < b) ? (a = b, true) : false;
}

int popcount(ll a) { return __builtin_popcountll(a); }

int countr_zero(ll a) { return __builtin_ctzll(a); }

void set_io() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(16);

    return;
}
