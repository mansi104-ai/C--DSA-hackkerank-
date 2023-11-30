#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>  /* add this include to include stringstream in code*/
using namespace std;

vector<int> parseInts(string str){
    vector<int> v;  /* create a vector named int to store the output of the code final*/
    stringstream ss(str);
    
    int n;
    char skip;  /* char skip stores the commas that won't be shown in the output */
    
    while(ss){
        if(ss.peek() != ','){  /*if the compiler does not see a comma means that is a number , then extract it from the string and print it into vector v serially*/
            if (ss >> n){
                v.push_back(n);
            }
        }else{
            ss >>skip;  /*if the compiler finds a comma then extract iot into skip char */
        }
    }
    return v;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string str;
    cin>> str;
    vector<int> integers = parseInts(str);
    for (int i=0; i< integers.size();i++){
        cout << integers[i]<< "\n";  /*output all the integers and change the line simultaneously*/
        
    }
    return 0;
}