#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int i, j, k;
    for(i = 0; i <n; i++){
        j = i + 1;
        k = n - 1;
        while(j < k){
            if(arr[i] + arr[j] + arr[k] == K){
                ans.push_back({arr[i], arr[j], arr[k]});
                int temp = arr[j], temp2 = arr[k];
                while(j < k && arr[j] == temp) j++;
                while(j < k && arr[k] == temp2) k--;
            }
            else if(arr[i] + arr[j] + arr[k] < K) j++;
            else k--;
        }
        while(i + i < n && arr[i] == arr[i+1]) i++;
    }
    return ans;
}

int main()
{

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    arr = findTriplets(arr, 6);
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";

}