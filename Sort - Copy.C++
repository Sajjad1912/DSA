#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maim(){
    int arr[5] = {2,7,1,6,9};
    sort( arr , arr + 5);
    for(int val : arr){
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
}// 1:12 min