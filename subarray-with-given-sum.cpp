#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &v, int sum){
    int sum1 = INT_MIN;
    int j=0;
    if(v.size() == 0){
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<v.size(); i++){
        sum1 = max(sum1+v[i], v[i]);
        while(sum1>sum && j<i){
            sum1-=v[j];
            j++;
        }
        if(sum == sum1){
            cout<<j+1<<" "<<i+1<<endl;
            return;
        }   
    }
    cout<<-1<<endl; 
}

int main() {
    int test_cases;
    cin>>test_cases;
    for(int i=0; i< test_cases; i++){
        int arr_size;
        cin >> arr_size;
        int sum;
        cin>>sum;
        vector<int> v;
        for(int i=0; i<arr_size; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        solution(v, sum);
    }
    return 0;
}
