#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int length;
void display(){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<"\n";
}
void swap(vector<int> *arr,int idx1,int idx2){
    int temp = (*arr).at(idx1);
    (*arr).at(idx1) = (*arr).at(idx2);
    (*arr).at(idx2) = temp;
}
int pivot(vector<int> *arr,int start=0,int end=length-1){
    int pivot {start};
    int pivot_element {(*arr).at(start)};
    int j {start+1};
    while(j<=end){
        if((*arr).at(j)<pivot_element){
            pivot++;
            swap(&(*arr),j,pivot);
        }
        ++j; 
    }
    swap(&(*arr),start,pivot);
    return pivot;
}
void quicksort(vector<int> *arr,int start=0,int end=length-1){
    if(start>end){
        return;
    }
    int pivot_element = pivot(&(*arr),start,end);
    quicksort(&(*arr),start,pivot_element-1);
    quicksort(&(*arr),pivot_element+1,end);
}
int main(){
    //getting inputs
    cout<<"enter the number of elements in the array!\n";
    cin>>length;
    cout<<"enter the elements of the array!\n";
    for(int i=0;i<length;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    quicksort(&arr);
    display();
    return 0;
}