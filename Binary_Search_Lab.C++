#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,5,10,15,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 16; //Search data
    int l = 0;
    int h = n-1;
    while (l<=h){
        int mid = l+(h-l)/2;
        if (arr[mid] == x){
            cout<<"Found"<<endl;
            cout<<"Index is : "<<mid<<endl;
            return 0;
        }
        else if (arr[mid]<x){
            l = mid + 1;
        }
        else{
            h = mid -1;
        }
    }
    cout<<"Not Found"<<endl;
    return 0;
}
