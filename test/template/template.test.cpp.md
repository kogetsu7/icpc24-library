---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/template/template.test.cpp\"\n#define PROBLEM \\\n\
    \    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n\
    #line 1 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \nusing uint = unsigned int;\nusing ll = long long;\nusing ull = unsigned long\
    \ long;\nusing ld = long double;\n\ntemplate <class T>\nusing min_priority_queue\
    \ = priority_queue<T, vector<T>, greater<T>>;\n\nconstexpr int INF32 = INT_MAX\
    \ / 2;\nconstexpr ll INF64 = 1LL << 60;\nconst ld PI = acos(-1);\n\n#define rep(i,\
    \ a, b) for (ll i = (a); i < ll(b); ++i)\n#define rrep(i, a, b) for (ll i = (a);\
    \ i >= ll(b); --i)\n#define fore(i, a) for (auto& i : (a))\n\n#define all(a) (a).begin(),\
    \ (a).end()\n#define rall(a) (a).rbegin(), (a).rend()\n\ntemplate <class T> bool\
    \ chmin(T& a, const T& b) {\n    return (a > b) ? (a = b, true) : false;\n}\n\
    template <class T> bool chmax(T& a, const T& b) {\n    return (a < b) ? (a = b,\
    \ true) : false;\n}\n\nint popcount(ll a) { return __builtin_popcountll(a); }\n\
    \nint countr_zero(ll a) { return __builtin_ctzll(a); }\n\nvoid set_io() {\n  \
    \  cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n    cout << fixed << setprecision(16);\n\
    \n    return;\n}\n#line 5 \"test/template/template.test.cpp\"\n\nint main() {\n\
    \    ll a = 0;\n    assert(!chmin(a, INF64));\n    assert(!chmin(a, ll(INF32)));\n\
    \    assert(chmax(a, ll(INF32)));\n    assert(chmax(a, INF64));\n\n    cout <<\
    \ \"Hello World\\n\";\n\n    return 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../template/template.hpp\"\n\nint main() {\n    ll a = 0;\n\
    \    assert(!chmin(a, INF64));\n    assert(!chmin(a, ll(INF32)));\n    assert(chmax(a,\
    \ ll(INF32)));\n    assert(chmax(a, INF64));\n\n    cout << \"Hello World\\n\"\
    ;\n\n    return 0;\n}\n"
  dependsOn:
  - template/template.hpp
  isVerificationFile: true
  path: test/template/template.test.cpp
  requiredBy: []
  timestamp: '2024-12-18 21:55:59+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/template/template.test.cpp
layout: document
redirect_from:
- /verify/test/template/template.test.cpp
- /verify/test/template/template.test.cpp.html
title: test/template/template.test.cpp
---
