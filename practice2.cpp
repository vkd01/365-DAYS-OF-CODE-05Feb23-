
/*
Author : Vimal Kumar Dubey
Cf handle : code_vkd_001
--------------------------------------------------------------------------------------

 Roses do not bloom hurriedly; for beauty, like any masterpiece, takes time to blossom */

#include<bits/stdc++.h>
/*-------------------------------------------------------------------------------------------------------------*/
#define loop(k,b,a)                                                for(ll k=b;k<a;k++)
#define vl                                                              vector<ll>
#define print(s)                                                      cout<<s<<endl;
#define beg2end(count)                                        count.begin(),count.end()
using namespace std;
#define ll long long
/*-------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------CODE BEGINS ->!-------------------------------------------*/

void optimiseME() {


    ll n, k; cin >> n >> k;

    vl arr(n);
    loop(i, 0, n) cin >> arr[i];



    sort(arr.rbegin(), arr.rend());


    ll left = 0, right = 0, temp = 1, mx = INT_MIN;

    ll ans = 0;

    for (auto&i : arr) {

        if (i * temp >= k) {
            ans++;
            temp = 0;
        }

        temp++;

    }

    print(ans)


}


int main() {

#ifndef ONLINE_JUDGE
    cerr << "Exectution Time : " << clock() / (double)CLOCKS_PER_SEC << "sec   ";
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    ll t; cin >> t; while (t--)

        optimiseME();
}