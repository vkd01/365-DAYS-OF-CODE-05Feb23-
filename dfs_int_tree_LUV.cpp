//                                   Life Goes on and you Learn from it !!  -Steve Jobs
/*
Author : Vimal Kumar Dubey   ᗡ⋊Λ
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
Remember you were also a novice when you started,
hence never be rude to anyone who wants to learn something

   You love to watch Doraemon ?? Oh high five .... !!
JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

-> { / } The Two important days in your life are The day yoy are born and The day you find  out why

*/
//Nothing is More Honorable than a greatful Heart //
#undef _GLIBCXX_DEBUG //a compiler flag used to enable debug mode in gcc's C++ Standard Library implementation

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#include<bits/stdc++.h>
using namespace std;
#define testLoop                                                   int t; cin>>t; while(t--)
#define ll                                                               long long int
#define loop(k,b,a)                                                for(ll k=b;k<a;k++)
#define rloop(k,b,a)                                               for(ll k=b-1;k>=a;k--)
#define ff                                                               first
#define ss                                                             second
#define pb                                                             push_back
#define beg2end(count)                                        count.begin(),count.end()
#define vl                                                              vector<ll>
#define pl                                                              pair<ll,ll>
#define map(a,b)                                                      map<a,b>
#define umap(a,b)                                                    unordered_map<a,b>
#define NO_OF_CHARS                                      256
#define print(s)                                                      cout<<s<<endl;
#define lineprint(s)                                                cout<<s<<" "
#define nextline                                                     cout<<endl;
#define BIN(a,b)                                                    (a<<b)
#define convert_tolower(s)                                    transform(beg2end(s), s.begin(), ::tolower);
#define convert_toupper(s)                                   transform(beg2end(s), s.begin(), ::toupper);
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;


bool isPowerofTwo(ll x) {
   return x && (!(x & (x - 1)));
}

ll  MostSignificantBit(ll n) {
   if (n == 0)
      return 0;
   ll msb = 0;
   n = n / 2;
   while (n != 0) {
      n /= 2;
      msb++;
   }
   return BIN(1, msb);
}

ll gcd(ll a, ll b) {
   if (b == 0)
      return a;
   else
      return gcd(b, a % b);
}

static bool comp(const vector<ll>& vec1, const vector<ll>& vec2) {
   return vec1[1] < vec2[1];
}

ll LCM(ll arr[], ll n) {
   ll ans = arr[0];
   loop(i, 1, n)ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
   return ans;
}

const int N = 1e5 + 10;
vector<ll> graph[N];
bool visited[N]; //No need of Visited array in Tree dfs
ll depth[N], height[N];


void dfs(ll vertex, ll parent) {
   /* Take action on vertex after entering the vertex*/
   lineprint(vertex);
   visited[vertex] = true;

   for (int child : graph[vertex]) {
      if (visited[child]) continue;
      if (parent == child) continue;
      /*Take action on child before entering the child node*/
      depth[child] = depth[vertex] + 1;
      cout << "p->" << vertex << " " << "c->" << child << endl;

      dfs(child, parent + 1);

      /*Take action on child after exiting child node*/
      height[vertex] = max(height[vertex], height[child] + 1);
   }
   /*Take action on vertex before exiting the vertex*/
}


vector<int> bfsOfGraph(int V, vector<int> adj[]) {
   vector<int>res;
   int visited[100001] = {0};
   queue<int>q;
   q.push(0);
   visited[0] = 1;
   while (!q.empty()) {
      int parent = q.front();
      q.pop();
      res.push_back(parent);
      for (int child : adj[parent]) {
         if (visited[child])continue;
         q.push(child);
         visited[child] = 1;
      }
   }
   return res;
}
private :
void DFS(TreeNode* root, int level, vector<vector<int>>& levels) {
   //BASE CASE
   if (!root) return;
   if (levels.size() <= level) levels.push_back({});

   levels[level].push_back(root->val);

   //RECURSION
   DFS(root->left, level + 1, levels);
   DFS(root->right, level + 1, levels);
}
public :
vector<vector<int>> levelOrder(TreeNode* root) {
   if (!root) return {};

   vector<vector<int>> res;
   DFS(root, 0, res);

   return res;
}

void CPwithVKD() {

   ll n; cin >> n;
   loop(i, 0, n - 1) {
      ll x, y; cin >> x >> y;
      graph[x].pb(y);
      graph[y].pb(x);
   }

   dfs(3, 0);
   nextline
   loop(i, 0, n) {
      cout << height[i] << " " << depth[i] << endl;
   }
}


int32_t main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   testLoop

   CPwithVKD();

   return 0;

}