#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int k; cin >> k;
    cin.ignore();
    string str; cin >> str;
    string res;
    for(char x:str)
    {
    	char c = x + k;
    	int tmp = c;
    	if(tmp > 90)
    	{
    		char m = 'A' + (tmp - 91);
    		res.push_back(m);
    		continue;
		}
    	res.push_back(c);
	}
	cout << k << endl << res;
}
