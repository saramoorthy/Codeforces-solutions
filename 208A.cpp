//208A - Dubstep
//
//https://codeforces.com/problemset/problem/208/A
//
//
//Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.
//
//Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "WUB" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "WUB", in one string and plays the song at the club.
//
//For example, a song with words "I AM X" can transform into a dubstep remix as "WUBWUBIWUBAMWUBWUBX" and cannot transform into "WUBWUBIAMWUBX".
//
//Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.
//
//Input
//The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "WUB" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.
//
//Output
//Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string str;
    int flag=1;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i=i+2;
            if(!flag)
                cout<<" ";
            continue;
        }else{
            flag=0;
            cout<<str[i];
        }
        
    }
    return 0;
}
