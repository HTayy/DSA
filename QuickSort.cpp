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

int Rand(int l, int h) {
    assert(l <= h);
    long long res = 0;
    for (int i = 1; i <= 4; i++) res = (res << 15) ^ (rand() & ((1 << 15) - 1));

    return l + res % (h - l + 1);
}

int partition(vector<int>& arr, int low, int high) {
  
    int pivot = Rand(low, high);
  
    int i = low - 1;

    for (int j = low; j <= high; j++) {
        if (arr[j] < arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
            if (i == pivot) pivot = j;
        }
    }
    
    swap(arr[i + 1], arr[pivot]); 
 
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
  
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int n;
vector<int> arr(1000005, 0);

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    auto start = high_resolution_clock::now();

    quickSort(arr, 1, n);

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "QuickSort: " << duration.count() << " ms" << '\n';

    return 0;
}

// louis97