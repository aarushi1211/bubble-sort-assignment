#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = false;
     for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n-1;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                i++;
            }
          }
        }
        int i, j;
        for(int i=0;i<n-1;i++)
        if(a[i]>a[j]){
            cout<<"no"<<endl;
            break;
        }
     if(i==n-1) cout<<"yes";
}