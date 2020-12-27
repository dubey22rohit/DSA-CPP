#include <iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
    int pos = n-d;
    int arr[d];
    for(int i = 0;i<d;i++){
        arr[i] = input[i];
    }
    int j = 0;
    while(j!=n-d){
        input[j] = input[j+d];
        j++;
    }
    int s = 0;
    for(int i = n-d;i<n;i++){
        input[i] = arr[s++];
        
    }
}
int main()
{
	int t;
    cout<<"Enter T";
	cin >> t;
	
	while (t--)
	{
		int size;
        cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
        cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}