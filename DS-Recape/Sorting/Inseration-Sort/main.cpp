#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i =0; i<n; i++)
        cin>>a[i];

    for(int i = 1; i<n; i++){
        int indx = i;
        while(indx>=1){
            if(a[indx-1] > a[indx]){
                swap(a[indx-1], a[indx]);
                indx--;
            }
            else
                break;
        }
    }
    cout<<"After Sorting: "<<endl;
    for(int i=0; i<n; i++)
        cout<< a[i] <<" ";
}