#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swapArrays(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        cout << "Arrays must have the same size." << endl;
        return;
    }

    int n = arr1.size();
    for (int i = 0; i < n; ++i) {
        // Using XOR swap algorithm to swap elements
        arr1[i] ^= arr2[i];
        arr2[i] ^= arr1[i];
        arr1[i] ^= arr2[i];
    }
}



int permutationDiff(vector<int> arr, vector<int> brr) {
    if (arr == brr) {
        return 0;
    }

    int count = 0;

    while (arr != brr) {
        count++;
        next_permutation(brr.begin(), brr.end());
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr(n);

        for (int i = 0; i < n; i++)
            cin >> brr[i];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
		
		int flag = 0;
        
        for(int i = 0; i < n; i++)
        {
        	if(brr[i] > arr[i] && flag == 0)
        	{
        		swapArrays(arr, brr);
        		break;
			}
			
			else if(arr[i] > brr[i]) flag = 1;
		}
		
		
		
        cout << permutationDiff(arr, brr) << endl;
    }
    return 0;
}
