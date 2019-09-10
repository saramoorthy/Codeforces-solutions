//Way Too Long Words



#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    string str;
    std::vector<string> MyStrings;
    
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,str);
        MyStrings.push_back(str);
    }
    
    for(auto &text : MyStrings){
        if(text.length()>10){
            cout<<text[0];
            cout<<text.length()-2;
            cout<<text.back();
            cout<<endl;
        }else{
            cout<<text<<endl;
        }
    }
    return 0;
}

