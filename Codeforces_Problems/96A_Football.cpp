#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int counter = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == str[i+1]){
            counter++;
        }
        else{
            counter = 0;
        }
        if(counter >= 6){
            break;
        }
    }
    if(counter >= 6){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
