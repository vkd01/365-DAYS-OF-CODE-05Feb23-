//                                   Life Goes on and you Learn from it !!  -Steve Jobs
#include<bits/stdc++.h>
using namespace std;
#define testLoop int t; cin>>t; while(t--)
#define ll  long long int
#define loop(k,b,a) for(ll k=b;k<a;k++)
#define rloop(k,b,a) for(ll k=b;k>a;k--)
#define ff first
#define ss second
#define pb push_back
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;
#define beg2end(count) count.begin(),count.end()
#define vl  vector<ll>
#define pl pair<ll,ll>
#define ml map<ll,ll>
#define NO_OF_CHARS 256


void CPwithVKD() {

  ll n, x, y; cin >> n;

  ll co = 0, c = INT_MIN, cv, maxv = 0, no = 0;
  ll arr[n];
  loop(i, 0, n) {
    cin >> arr[i];
    maxv = max(arr[i], maxv);
  }
  sort(arr, arr + n, greater<int>());
  loop(i, 0, n - 1) {
    if (arr[i] == arr[i + 1]  && no == 0) co++;
    else if (arr[i] != arr[i + 1]) {
      no++;
      y = 0;
      if (y >= co) {
        cv = x;
      }
    }
    else if (arr[i] == arr[i + 1]) {
      x = arr[i];
      y++;
    }
    c = max(y, c);
  }
  maxv += co;
  c += cv;
  ll ans = max(maxv, c);
  cout << ans << endl;


}


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  testLoop{

    CPwithVKD();

  }
  return 0;
}

