#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> result;
void display(){
    for(int ele:result){
        cout<<ele<<" ";
    }
    cout<<"\n";
}
void display(vector<int> arr){
        for(int ele:arr){
            cout<<ele<<" ";
        }
        cout<<"\n";
}
vector<int> merge(vector<int> arr1,vector<int> arr2){
    vector<int> newarr;
    int i=0,j=0,arr1len=arr1.size(),arr2len=arr2.size();
    while(i<arr1len and j<arr2len){
        if(arr1[i]<arr2[j]){
            newarr.push_back(arr1[i]);
            i++;
        }
        else{
            newarr.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1len){
        newarr.push_back(arr1[i]);
        i++;
    }
    while(j<arr2len){
        newarr.push_back(arr2[j]);
        j++;
    }
    return newarr;
}
vector<int> mergesort(vector<int> arr){
    if(arr.size()==1){
        return arr;
    }
    int len = arr.size();
    auto startleft = arr.begin();
    auto endleft = arr.begin() + len/2;
    auto startright = arr.begin()+ (len/2);
    auto endright = arr.begin() + len;
    vector<int> left(startleft,endleft);
    vector<int> right(startright,endright);
    return merge(mergesort(left),mergesort(right));
}
int main(){
    //getting inputs
    int length;
    cout<<"enter the number of elements in the array!\n";
    cin>>length;
    cout<<"enter the elements of the array!\n";
    for(int i=0;i<length;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    result = mergesort(arr);
    display();
    return 0;
}
