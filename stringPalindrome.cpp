#include<bits/stdc++.h>
#include <cctype>
using namespace std;

string Palindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        // Move left index to the right while it's not an alphabetic character
        while(i<j && !isalnum(s[i])){
            i++;
        }
        // Move right index to the left while it's not an alphabetic character
        while(i<j && !isalnum(s[j])){
            j--;
        }
        if(tolower(s[i]) != tolower(s[j])){
            return "Not Palindrome";
        }
        i++;
        j--;
    }
    return "Palindrome";
}

int main(){
    string s;
    cout<<"Enter a string : ";
    // cin>>s;
    getline(cin, s); // Use getline to read the entire line
    cout<<Palindrome(s);
}