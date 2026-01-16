#include<iostream>
#include<string>
using namespace std;

char MaxOccurence(string s){
  int arr[26]={0};
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    int number=0;
    number=ch-'a';
    arr[number]++;
  }
  int maxFreq = -1;
    char resultChar;

    // Find the character with maximum frequency
    for (int i = 0; i < 26; i++) {
        if (arr[i] > maxFreq) {
            maxFreq = arr[i];
            resultChar = 'a' + i;
        }
    }

    return resultChar;
}

int main() {
    string s;
    cout << "Enter a string (lowercase letters only): ";
    cin >> s;

    char ans = MaxOccurence(s);
    cout << "Maximum occurring character: " << ans << endl;

    return 0;
}