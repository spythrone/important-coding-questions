#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> v, int size){
	int count = 0;
	if(size<3)
		return(count);
	sort(v.rbegin(), v.rend());
	for(int i=0; i<size-2; i++){
		int j=i+1;
		int k=size-1;
		int sum = 0;
		while(j<k){
			sum = v[j] + v[k];
			if(sum>v[i])
				j++;
			else if(sum<v[i])
				k--;
			else{
				count++;
				j++;
				k--;
			}
		}
	}
	return count;
}

int main(){
	int size;
	cin>>size;
	vector<int> v;
	for(int i=0; i<size;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	cout<<solution(v, size)<<endl;
}
