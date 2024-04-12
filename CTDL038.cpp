#include <iostream>
#include <string>

using namespace std;
int main() {
    int t; cin >> t;
    while(t--)
    {
        
    
    	
	
    long long x, y; cin >> x >> y;
    long long tong1 = 0, tong2 = 0;
    string x1= to_string(x);
    string y1 = to_string(y);
    for(long long i = 0; i < x1.size(); i++)
    {
    	if(x1[i] == '5') x1[i] = '3';
	}
    for(long long i = 0; i < y1.size(); i++)
    {
    	if(y1[i] == '5') y1[i] = '3';
	}
	
	long long x2 = stoll(x1);
	long long y2 = stoll(y1);
	
	tong2 = x2 + y2;
	
	string x3= to_string(x);
    string y3 = to_string(y);
    for(long long i = 0; i < x3.size(); i++)
    {
    	if(x3[i] == '3') x3[i] = '5';
	}
    for(long long i = 0; i < y3.size(); i++)
    {
    	if(y3[i] == '3') y3[i] = '5';
	}
	
	long long x4 = stoll(x3);
	long long y4 = stoll(y3);
	
	tong1 = x4 + y4;
	
	cout << tong2 << ' ' << tong1 << endl;
        
    }
	

}
