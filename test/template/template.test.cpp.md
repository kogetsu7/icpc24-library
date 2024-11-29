---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A
  bundledCode: "#line 1 \"test/template/template.test.cpp\"\n#define PROBLEM \\\n\
    \    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\n\n\
    #line 1 \"template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    using ll = long long;\nusing ld = long double;\ntemplate <class T>\nusing min_priority_queue\
    \ = priority_queue<T, vector<T>, greater<T>>;\nconstexpr int INF32 = INT_MAX /\
    \ 2;\nconstexpr ll INF64 = 1LL << 60;\n#define rep(i, a, b) for (ll i = (a); i\
    \ < ll(b); i++)\n#define rrep(i, a, b) for (ll i = (a); i >= ll(b); i--)\n#define\
    \ fore(i, a) for (auto& i : (a))\n#define all(a) begin(a), end(a)\ntemplate <class\
    \ T> bool chmin(T& a, const T& b) {\n    return (a > b) ? (a = b, true), false;\n\
    }\ntemplate <class T> bool chmax(T& a, const T& b) {\n    return (a < b) ? (a\
    \ = b, true), false;\n}\n#line 5 \"test/template/template.test.cpp\"\n\nint main()\
    \ {\n    ll a = 0;\n    assert(!chmin(a, INF64));\n    assert(!chmin(a, ll(INF32)));\n\
    \    assert(chmax(a, ll(INF32)));\n    assert(chmax(a, ll(INF64)));\n\n    cout\
    \ << \"Hello World\\n\";\n\n    return 0;\n}\n"
  code: "#define PROBLEM \\\n    \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A\"\
    \n\n#include \"../../template/template.hpp\"\n\nint main() {\n    ll a = 0;\n\
    \    assert(!chmin(a, INF64));\n    assert(!chmin(a, ll(INF32)));\n    assert(chmax(a,\
    \ ll(INF32)));\n    assert(chmax(a, ll(INF64)));\n\n    cout << \"Hello World\\\
    n\";\n\n    return 0;\n}\n"
  dependsOn:
  - template/template.hpp
  isVerificationFile: true
  path: test/template/template.test.cpp
  requiredBy: []
  timestamp: '2024-11-29 17:28:21+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/template/template.test.cpp
layout: document
redirect_from:
- /verify/test/template/template.test.cpp
- /verify/test/template/template.test.cpp.html
title: test/template/template.test.cpp
---
