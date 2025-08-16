// ABC419, problemc

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
    // 問題文を挿入
    int N;
    cin >> N;
    vl R(N), C(N);
    for(int i = 0;i < N;i++){
        cin >> R[i] >> C[i];
    }
    sort(R.begin(),R.end());
    sort(C.begin(),C.end());
    int length = max(R[N - 1] - R[0],C[N - 1] - C[0]);
    if(length % 2 == 1)cout << length / 2 + 1 << endl;
    else cout << length / 2 << endl;
    return 0;
}