// Given two strings, write a method to decide if one is permutation of the other 

// We can assume that strings will be case sensistive and white space is significant 
// which concludes that "dog" is same as "god" but "dog   " is not same as "dog"


#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;




bool check_permutation(string s1, string s2){

sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end()); 

if(s1 == s2){
    return true; 
}

else 
{
    return false; 

}

}


int main(void){
    string s1 ; 
    string s2; 

    cout<<"Enter String #1"<<endl;
    cin>> s1; 

    cout<<"Enter string #2"<<endl; 
    cin>>s2; 

    if (check_permutation(s1, s2)){
        cout<<"Both strings are permutations of each other"<<endl; 

    }

    else {
        cout<<"Not Equal"<<endl; 

    }
}