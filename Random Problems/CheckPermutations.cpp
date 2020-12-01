#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool checkPermutations(char *s1,char *s2){
int n1 = strlen(s1);
int n2 = strlen(s2);
if(n1!=n2){
	return false;
	}
	char freq[26] = {0};//Assuming only chars from a-z are allowed
for(int i = 0;i<n1;i++){
		freq[s1[i] - 'a']++;
	}
	for(int i = 0;i<n2;i++){
		freq[s2[i] - 'a']--;
		}
		for(int i = 0;i<26;i++){
			if(freq[i]!=0){
				return false;
				}
				
			
			}
			return true;
}
int main(){
	char s1[100],s2[100];
	cin>>s1>>s2;
	cout<<checkPermutations(s1,s2);
return 0;	
}
