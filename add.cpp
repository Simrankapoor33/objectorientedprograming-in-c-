#include<iostream>
using namespace std;
int main(){
    int m=2,n=2,a[5][5],b[5][5],c[5][5],i,j;
    cout<<"enter the elements of first matrix:";
    for(i=0;i<m;i++){
       for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"enter the elements of second matrix:";
    for(i=0;i<m;i++){
       for(j=0;j<n;j++)
            cin>>b[i][j];
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    cout<<"the sum of two matrix is :\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<c[i][j]<<"\n";
    }      
    return 0;
}