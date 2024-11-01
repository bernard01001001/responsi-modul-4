#include <iostream>
#include <string>

using namespace std;

string getMidString(string text){
    string mid;
    if(text.length()%2==0){
        mid=text[(text.length()/2)-1];
        return mid + text[text.length()/2];
    }
    else{
        mid=text[(text.length())/2];
        return mid;
    }
    
    }

int main(){
    string input;
    getline(cin, input);
    cout<<getMidString(input);
}