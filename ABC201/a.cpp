// ABC201, problema

#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG  //[]で配列外参照をするとエラーにしてくれる。上下のやつがないとTLEになるので注意
                        // ABC311Eのサンプル4みたいなデバック中のTLEは防げないので注意
#endif

#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

#define PRINT_VAR(x)  // 変数名を出力

template <typename T>
using vc = vector<T>;  // prioriy_queueに必要なのでここにこれ書いてます
template <typename T>
using vv = vc<vc<T>>;

//-------------1.型系---------------
using ll = long long;
ll INF = 2e18;

using ld = long double;

template <class T>
using pq = priority_queue<T, vc<T>>;  // 大きい順
template <class T>
using pq_g = priority_queue<T, vc<T>, greater<T>>;  // 小さい順

//-------------2.配列系--------------
using vl = vc<ll>;
using vvl = vv<ll>;
using vvvl = vv<vl>;
using vvvvl = vv<vvl>;
using vs = vc<string>;
using vvs = vv<string>;

int main(){
    int A1,A2,A3;
    cin >> A1 >> A2 >> A3;
    if(A1 < A2)swap(A1,A2);
    if(A2 < A3)swap(A2,A3);
    if(A1 < A2)swap(A1,A2);
    if(A2 < A3)swap(A2,A3);
    if(A1 - A2 == A2 - A3)cout << "Yes" << endl;else cout << "No" << endl;
    return 0;
    }
