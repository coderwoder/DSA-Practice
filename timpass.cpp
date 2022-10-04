#include<iostream> 
using namespace std; 
void bubblesort(int A[], int n)
{
for(int k=0;k<n-1;k++){
    for(int i=0;i<n-k;i++){
        if(A[i]>A[i+1])
        swap(A[i], A[i+1]);
    }
}
}
void swap(int x, int y){
    int tmp=x; 
    x=y;
    y=tmp;
}
void display(int A[], int n)
{ 
    for(int i=0;i<n;i++)
    cout<<"\t"<<A[i];
}
int main(){
    
}