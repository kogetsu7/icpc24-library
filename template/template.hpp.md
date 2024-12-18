---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/template/template.test.cpp
    title: test/template/template.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\nusing uint = unsigned int;\nusing ll = long long;\nusing ull\
    \ = unsigned long long;\nusing ld = long double;\n\ntemplate <class T>\nusing\
    \ min_priority_queue = priority_queue<T, vector<T>, greater<T>>;\n\nconstexpr\
    \ int INF32 = INT_MAX / 2;\nconstexpr ll INF64 = 1LL << 60;\nconst ld PI = acos(-1);\n\
    \n#define rep(i, a, b) for (ll i = (a); i < ll(b); ++i)\n#define rrep(i, a, b)\
    \ for (ll i = (a); i >= ll(b); --i)\n#define fore(i, a) for (auto& i : (a))\n\n\
    #define all(a) (a).begin(), (a).end()\n#define rall(a) (a).rbegin(), (a).rend()\n\
    \ntemplate <class T> bool chmin(T& a, const T& b) {\n    return (a > b) ? (a =\
    \ b, true) : false;\n}\ntemplate <class T> bool chmax(T& a, const T& b) {\n  \
    \  return (a < b) ? (a = b, true) : false;\n}\n\nint popcount(ll a) { return __builtin_popcountll(a);\
    \ }\n\nint countr_zero(ll a) { return __builtin_ctzll(a); }\n\nvoid set_io() {\n\
    \    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n    cout << fixed <<\
    \ setprecision(16);\n\n    return;\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\nusing uint = unsigned int;\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing ld = long double;\n\
    \ntemplate <class T>\nusing min_priority_queue = priority_queue<T, vector<T>,\
    \ greater<T>>;\n\nconstexpr int INF32 = INT_MAX / 2;\nconstexpr ll INF64 = 1LL\
    \ << 60;\nconst ld PI = acos(-1);\n\n#define rep(i, a, b) for (ll i = (a); i <\
    \ ll(b); ++i)\n#define rrep(i, a, b) for (ll i = (a); i >= ll(b); --i)\n#define\
    \ fore(i, a) for (auto& i : (a))\n\n#define all(a) (a).begin(), (a).end()\n#define\
    \ rall(a) (a).rbegin(), (a).rend()\n\ntemplate <class T> bool chmin(T& a, const\
    \ T& b) {\n    return (a > b) ? (a = b, true) : false;\n}\ntemplate <class T>\
    \ bool chmax(T& a, const T& b) {\n    return (a < b) ? (a = b, true) : false;\n\
    }\n\nint popcount(ll a) { return __builtin_popcountll(a); }\n\nint countr_zero(ll\
    \ a) { return __builtin_ctzll(a); }\n\nvoid set_io() {\n    cin.tie(nullptr);\n\
    \    ios::sync_with_stdio(false);\n    cout << fixed << setprecision(16);\n\n\
    \    return;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2024-12-18 21:55:59+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/template/template.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
