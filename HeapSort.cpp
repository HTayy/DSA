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

void heapify(vector<int>& arr, int n, int i){

    int largest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr){
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
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

    heapSort(arr);

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "HeapSort: " << duration.count() << " ms" << '\n';

    return 0;
}

// louis97