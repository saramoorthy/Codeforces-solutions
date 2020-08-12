#include<iostream>
#include<set>
using namespace std;

int main(){
    
    int n;
    int flag=0;
    cin>>n;
    n++;
    while(!flag){
        set<int> myset;
        int num=n;
        while(num>0){
            if(myset.count(num%10))
                break;
            else{
                myset.insert(num%10);
                num=num/10;
            }
        }
        if(myset.size()==4){
            flag=1;
            cout<<n<<endl;
            break;
        }
        myset.clear();
        n++;
    }
    return 0;
}
