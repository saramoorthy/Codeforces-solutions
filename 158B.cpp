#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count=0;
    int fill = 0;
    int i=0;
    int total=0;
    int j = n-1;
    int flag =0;
    vector<int> groups;
    
    for(int j=0;j<n;j++){
        int input;
        cin>>input;
        total += input;
        groups.push_back(input);
    }
        
    sort(groups.begin(), groups.end());
    
    while(i<j){
        if(fill+groups.at(i) < 5){
            if(fill+groups.at(i)+groups.at(j) < 5){
                fill = fill+groups.at(i)+groups.at(j);
                i++;
                j--;
                
                
                if(fill==total || fill==4){
                    count++;
                    flag=1;
                }
                
                }else{
                    j--;
                    count++;
                }
           
        }else{
           
            fill=0;
            
        }
     
    
    }
  
    if(i>=j )
        count++;
    
    cout<<count<<endl;
    return 0;
    
    //1 1 2 2 3 3 4 4
}
