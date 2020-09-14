#include<iostream>
using namespace std;


class LowerTri{
private:
    int n;
    int * A;

public:
    LowerTri(){
        n=2;
        A=new int[2*(2+1)/2];
    }
    
    LowerTri(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
        
    }
    
    ~LowerTri(){
        delete[] A;
    }
    
    void set(int i, int j, int x);
    int get(int i, int j);
    void Display();
    
};

void LowerTri::set(int i, int j, int x){
    if(i>=j)
        A[i*(i+1)/2+j]=x;
}

int LowerTri::get(int i, int j){
    if(i>=j)
        return A[i*(i+1)/2+j];
    return 0;
}

void LowerTri::Display(){
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j)
                cout<<A[i*(i+1)/2+j]<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    int d;
    cout<<"Enter dimensions\n";
    cin>>d;
    LowerTri lm(d);
    int x;
    
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cin>>x;
            lm.set(i,j,x);
        }
    }
    cout<<endl;
    lm.Display();
    
    return 0;
}
