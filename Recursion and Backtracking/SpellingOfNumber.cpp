#include <iostream>
using namespace std;

char spellings[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void printSpell(int n){
    if(n == 0){
        return;
    }
    printSpell(n/10);
    cout<<spellings[n%10]<<" ";
}
int main(){
    printSpell(2039157948);
}