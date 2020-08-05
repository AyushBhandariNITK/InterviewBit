#define MOD 1000003
#define ll long long int

int indexOf(char ch) {
    if (ch >= 'a' and ch <= 'z') {
        return ch - 'a';
    }
    return ch - 'A' + 30;
}

ll factMod(ll num) {
    ll res = 1;
    for (ll i = 1; i <= num; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

ll fact(ll num) {
    ll res = 1;
    for (ll i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

ll powerMod (ll base, ll power, ll mod) {
    ll res = 1;
    base = base % mod;
    while (power > 0) {
        if (power % 2 == 1) {
            res = (res * base) % mod;
        }
        power = power >> 1;
        base = (base * base) % mod;
    }
    return res; 
}


int permute(string s)
{
    int n = s.size();
    vector<int>freq(60, 0);
    for (int i = 0; i < n; i++) {
        freq[indexOf(s[i])] += 1;
    }
    int res = factMod(n);
    for (int i = 0; i < 60; i++) 
    {
        if (freq[i] > 1) {
            res = (res * powerMod(fact(freq[i]), MOD - 2, MOD)) % MOD; 
        }
    }
    return res;
}

int Solution::findRank(string A)
{
    int n = A.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<bool>taken(60, false);
        for (int j = i + 1; j < n; j++) 
        {
            if (A[i] > A[j] and taken[indexOf(A[j])] == false)
            {
                taken[indexOf(A[j])] = true;
                swap(A[i], A[j]);
                ans = (ans + permute(A.substr(i + 1))) % MOD;
                swap(A[i], A[j]);
            }
        }
    }
    ans = (ans + 1) % MOD;
    return ans;
}

