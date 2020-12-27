#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[10][100];
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0;i<n;i++){
        cin.getline(a[i],100);
    }
    char word[100];
    cout<<"Enter Word to search";
    cin.getline(word,100);
    int i;
    for(i = 0;i<n;i++){
        if(strcmp(word,a[i]) == 0){
            cout<<"Word found at index "<<i<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"Word not found";
    }
}