// Implement an Algorithm to determine if a string has all unique characters. 

#include<iostream>
#include<string>

using namespace std; 

// Create a boolean array and check if the value exists in the array or not 

bool isUniqueChar(string str){

    bool charset[128] = {false}; 
    

    for (int i =0 ;i<str.length() ; i++)
    {
        char ch  = str.at(i); 
        int value = static_cast<int>(ch); 

        if (charset[value]){
            return false ; 
        }
        charset[value ] = true; 
    
    }

    return true; 
}


int main(void){


    cout<<"Enter the string you want to check "<<endl; 

    string input; 
    cin>>input; 

    if(isUniqueChar(input)){
        cout<<"All the characters in the string are unique to each other"<<endl; 

    }
    else {
        cout<<"String does not have unique characters"<<endl; 
    }
}
