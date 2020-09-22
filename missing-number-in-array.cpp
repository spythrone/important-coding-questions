#include<bits/stdc++.h>
using namespace std;

int solution(int size, vector<int> v){
	int sum_all = (size*(size+1))/2;
	int sum_rem = 0;
	for(int i=0; i<v.size(); i++)
		sum_rem+=v[i];
	return(sum_all - sum_rem);
}

int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0; i< test_cases; i++){
        int arr_size;
        cin >> arr_size;
        vector<int> v;
        for(int i=0; i<arr_size-1; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        cout<<solution(arr_size, v);
        cout<<endl;
    }
    return 0;
}
