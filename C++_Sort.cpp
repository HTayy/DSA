#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1LL)
#define ALL(v) (v).begin(), (v).end()

template<class T> bool maximize(T& a, const T& b) {
	return a < b ? a = b, 1 : 0;
}
 
template<class T> bool minimize(T& a, const T& b) {
	return a > b ? a = b, 1 : 0;
}

/*==============================================*/

const int N = 1e6 + 5;
const long long MOD = 1e9 + 7;
const long long INF = 1e15;

int n;
long long a[N];

#define TASK "TASK"
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	if(fopen(TASK".inp", "r")) {
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    auto start = high_resolution_clock::now();

    sort(a + 1, a + n + 1);

	auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "C++_Sort: " << duration.count() << " ms" << '\n';

    return 0;
}

// louis97