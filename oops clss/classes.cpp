#include<bits/stdc++.h>
using namespace std;

class array1{
    private:
    int marks;

    public:
        // void getdata();
        // void putdata();
        void putdata();//{
            // cin>> marks;
        // }
        void getdata();//{
        //     cout<<marks<<" ";
        // }
};

void array1 :: putdata(){
    // cout<<"enter:";
    cin>> marks;
}
void  array1 :: getdata(){
    
    cout<<marks <<" ";
}
int main(){
    array1 arr[1000];
    cout<<"entr size:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        arr[i].putdata();
    }
    cout<<" your marks :";
    cout<<endl;              
        for(int i=0;i<n;i++){
        arr[i].getdata();
    }
    return 0;
}