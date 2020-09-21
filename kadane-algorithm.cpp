using namespace std;

int solution(int arr_size, vector<int> &v){
    int intmin = -10000000;
    int num1 = intmin;
    int num2 = intmin;
    for(int i=0; i<v.size(); i++){
        num1 = max(num1 + v[i], v[i]);
        num2 = max(num2, num1);
    }
    return num2;
}

int main() {
    //code
    int test_cases;
    cin>>test_cases;
    for(int i=0; i< test_cases; i++){
        int arr_size;
        cin >> arr_size;
        vector<int> v;
        for(int i=0; i<arr_size; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        cout<<solution(arr_size, v);
        cout<<endl;
    }
    return 0;
}
