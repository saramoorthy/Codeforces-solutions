#include<iostream>
#include<map>
#include<vector>
using namespace std;

void counter(char A[]){
    
    int vcount=0;
    int ccount=0;
    int words=0;
    
    for(int i=0;A[i]!='\0';i++){
                  
    if(A[i]=='A' || A[i]=='E' ||A[i]=='I' ||A[i]=='O' ||A[i]=='U' ||A[i]=='a' || A[i]=='e' ||A[i]=='i' ||A[i]=='o' ||A[i]=='u')
        vcount++;
    else if((A[i]>64 && A[i]<91) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57)){
        ccount++;
        }
    }
    
    for(int i=0;A[i]!='\0'; i++)
        if(A[i]==' ' && A[i-1] !=' ')
            words++;

    
    cout<<"vowels: "<<vcount<<endl;
    cout<<"consonants: "<<ccount<<endl;
    cout<<"words: "<<words<<endl;
}


bool validate(char A[]){
    
    for(int i=0; A[i]!='\0';i++)
        if(!((A[i]>64 && A[i]<91) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57)))
            return false;
    
    return true;
    
}

char * strReverse(char A[]){
    
    static char B[]="";
    int i=0;
    while(A[i]!='\0')
        i++;
    
    int j=i-1;
    
    for(int k=0;k<i,j>-1;k++,j--){
        
        B[k] = A[j];
       
    }
    
    return B;
}


void strcompare(char A[], char B[]){
    int flag=0;
    for(int i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++){
        if(A[i]!=B[j]){
            flag=1;
            cout<<"not equal"<<endl;
            
            if(A[i]>B[j])
                cout<<"greater"<<endl;
            else if(A[i]<B[j])
                cout<<"smaller"<<endl;
            
            break;
        }
        
    }
    if(!flag)
        cout<<"equal"<<endl;
    
    
}


bool isPalindrome(char A[]){

    bool ans = true;
    int i=0;
    while(A[i]!='\0')
        i++;
    
    
    int j=i-1;
    int k=0;
    while(k<j){
        if(A[k]==A[j]){
            k++;j--;
        }else{
            ans=false;
            break;
        }
        
    }
    if(ans && k==j)
        ans = true;
    
    return ans;
}

map<char,int> duplicates1(char A[]){
    
    // looping over - O(n2)
    map<char,int> ans;
    int len=0;
    while(A[len++]!='\0');
    
    for(int i=0;i<len-1; i++){
        int count=1;
        for(int j=i+1;j<len;j++){
            while(A[i]==A[j]){
                count++;
                j++;
            }
        }
        
        if(count>1)
            ans[A[i]]=count;
    }
    
    return ans;
}


map<char,int> duplicates2(char A[]){
    
    //using hash table - O(n)
    
    map<char,int> ans;
    static int H[26]={0};
    int len=0;
    while(A[len++]!='\0');
        

    for(int i=0;i<len;i++)
    {
        if(A[i]>96 && A[i]<123){
            H[A[i]-97]++;
        }
        else if(A[i]>64 && A[i]<91){
            H[A[i]-65]++;
        }
        
    }
    
    for(int i=0;i<26;i++)
        if(H[i]>1)
            ans[(i+97)]=H[i];
    
    
    return ans;
    
}

void duplicates3(char A[]){
    //using bitset
    
    int H=0;
    int x=0;
    
    
    for(int i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((H&x)>0)
            cout<<A[i]<<" is duplicated"<<endl;
        else
            H=H|x;
    }
}

bool isAnagram(char A[], char B[]){
    
    int H[26]={0};
    
    
    for(int i=0;A[i]!='\0';i++)
        H[A[i]-97]++;
    
    
    for(int i=0;B[i]!='\0';i++){
        H[B[i]-97]--;
        if(H[B[i]-97]<0)
            return false;
    }
    
    for(int i=0;i<26;i++){
        if(H[i]!=0)
            return false;
    }
    
    return true;
}



//void search() {
//if (permutation.size() == n) {
//           // process permutation
//        } else {
//           for (int i = 0; i < n; i++) {
//              if (chosen[i]) continue;
//              chosen[i] = true;
//              permutation.push_back(i);
//              search();
//              chosen[i] = false;
//permutation.pop_back(); }
//} }

void perm(char S[], int k){

    static vector<char> res;
    static int chosen[10]={0};

    if(S[k]=='\0'){
        res[k]='\0';
        for(auto x:res)
            cout<<x;
        cout<<endl;
        
    }else{
        for(int i=0;S[i]!='\0';i++){
            if(chosen[i])
                continue;
            chosen[i]=1;
            res.push_back(S[i]);
            perm(S,k+1);
            chosen[i]=0;
            res.pop_back();
        }
        
    }


}




int main(){
    
//
//    char A[]={"How are you"};
//    counter(A);
//    bool ans =validate("sara231");
//    cout<<ans<<endl;
//    cout<<strReverse("Leonid")<<endl;
//    strcompare("sara","saral");
//
//    cout<<isPalindrome("madame")<<endl;
//
//
//    map<char,int> ans = duplicates2("hey there whaatzz up");
//    for(auto x:ans)
//        cout<<x.first<<" is repeated: "<<x.second<<endl;
    
//
//    duplicates3("hey there whaatzz up");
//
//    cout<<isAnagram("decimalr", "medical")<<endl;
//
    perm("ABC",0);
    return 0;
}
