#include <climits>
#include<iostream>
using namespace std;
int secondLargest(int *a,int n){
    if(n<=0){
        return INT_MIN;
    }
    int max = a[0];
    int second_max = INT_MIN;
    for(int i = 1;i<n;i++){
        if(a[i] > max){
            second_max = max;
            max = a[i];
        }else if(a[i] > second_max && a[i] != max){
            second_max = a[i];
        }
    }
    return second_max;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << secondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}