#include<iostream>
using namespace std; 

void editString(char str[], int trueLength) {
    int spaceCount = 0, i, index = 0; 

    // Count the number of spaces
    for (i = 0; i < trueLength; i++) {
        if (str[i] == ' ') {
            spaceCount++; 
        }
    }

    index = trueLength + spaceCount * 2; 

    // Iterate through the string in reverse
    for (i = trueLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[index - 1] = '0'; 
            str[index - 2] = '2'; 
            str[index - 3] = '%'; 
            index -= 3; 
        } else {
            str[index - 1] = str[i];
            index--; 
        }
    }
}

int main(void) {
    char str[] = "Mr John Smith "; 
    int trueLength = 13; 
    editString(str, trueLength); 
    cout << str << endl; 

    return 0;
}
