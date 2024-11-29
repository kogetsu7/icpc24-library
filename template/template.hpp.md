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
  bundledCode: "#line 2 \"template/template.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\nusing ll = long long;\nusing ld = long double;\ntemplate <class\
    \ T>\nusing min_priority_queue = priority_queue<T, vector<T>, greater<T>>;\nconstexpr\
    \ int INF32 = INT_MAX / 2;\nconstexpr ll INF64 = 1LL << 60;\n#define rep(i, a,\
    \ b) for (ll i = (a); i < ll(b); i++)\n#define rrep(i, a, b) for (ll i = (a);\
    \ i >= ll(b); i--)\n#define fore(i, a) for (auto& i : (a))\n#define all(a) begin(a),\
    \ end(a)\ntemplate <class T> bool chmin(T& a, const T& b) {\n    return (a > b)\
    \ ? (a = b, true) : false;\n}\ntemplate <class T> bool chmax(T& a, const T& b)\
    \ {\n    return (a < b) ? (a = b, true) : false;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\nusing ll\
    \ = long long;\nusing ld = long double;\ntemplate <class T>\nusing min_priority_queue\
    \ = priority_queue<T, vector<T>, greater<T>>;\nconstexpr int INF32 = INT_MAX /\
    \ 2;\nconstexpr ll INF64 = 1LL << 60;\n#define rep(i, a, b) for (ll i = (a); i\
    \ < ll(b); i++)\n#define rrep(i, a, b) for (ll i = (a); i >= ll(b); i--)\n#define\
    \ fore(i, a) for (auto& i : (a))\n#define all(a) begin(a), end(a)\ntemplate <class\
    \ T> bool chmin(T& a, const T& b) {\n    return (a > b) ? (a = b, true) : false;\n\
    }\ntemplate <class T> bool chmax(T& a, const T& b) {\n    return (a < b) ? (a\
    \ = b, true) : false;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2024-11-29 18:02:33+09:00'
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
