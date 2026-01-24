#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int>& v, int lb, int ub){
    int pivot = v[lb];
    int start = lb;
    int end = ub;
    while(start < end){
        while(v[start] <= pivot){
            start++;
        }
        while(v[end] > pivot){
            end--;
        }
        if(start < end){
            swap(v[start], v[end]);
        }
    }
    swap(v[lb], v[end]);
    return end;
}

void quickSort(vector<int>& v, int lb, int ub){
    int loc;
    if(lb < ub){
        loc = partition(v,lb,ub);
        quickSort(v,lb,loc-1);
        quickSort(v,loc+1,ub);
    }
}

int main(){
    vector<int> v = {7,6,10,5,9,2,1,15,7};
    quickSort(v,0,v.size()-1);

    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}