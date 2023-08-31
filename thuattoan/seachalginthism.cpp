#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define ull unsigned long long 
const int mod = 1000000;
bool linearsearch(int a[] , int n , int m) // linear search with time complexity O(n) 
{
	for (int i = 0; i < n; i++) 
	{
		if (a[i] == m) 
		{
			return true; 
		}
	}
	return false; 
}
bool binarysearch(int a[] , int n , int m) // sorted array , search with time complexity O(logn)
{
	int r = 0;
	int l = n - 1; 
	while(l >= r) 
	{
		int mid = (l + r) / 2;
		if (a[mid] == m) 
		{
			return true; 
		}
		else if (m > a[mid]) 
		{
			r = mid + 1; 
		}
		else if (m < a[mid]) 
		{
			l = mid - 1; 
		}
	}
	return false;
}
bool recursion_binary_search(int a[] , int r , int l , int x) // recursion binary search with time complexity O(logn) , arr must be sorted
{
	if (r > l) 
	{
		return false; 
	}
	int mid = (l + r) / 2; 
	if (a[mid] == x) 
	{
		return true; 
	}
	else if (x > a[mid]) 
	{
		return recursion_binary_search(a , mid + 1 , l , x); 
	}
	else if (x < a[mid]) 
	{
		return recursion_binary_search(a , r , mid - 1 , x); 
	}
}
/*
thequickbrownfoxjumpsoverthelazydog
⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅⡄⢕⢕⢕⢕⢕⢕⢕⢕⢕
⢕⢕⢕⢕⢕⠅⢗⢕⠕⣠⠄⣗⢕⢕⠕⢕⢕⢕⠕⢠⣿⠐⢕⢕⢕⠑⢕⢕⠵⢕
⢕⢕⢕⢕⠁⢜⠕⢁⣴⣿⡇⢓⢕⢵⢐⢕⢕⠕⢁⣾⢿⣧⠑⢕⢕⠄⢑⢕⠅⢕
⢕⢕⠵⢁⠔⢁⣤⣤⣶⣶⣶⡐⣕⢽⠐⢕⠕⣡⣾⣶⣶⣶⣤⡁⢓⢕⠄⢑⢅⢑
⠍⣧⠄⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔⢕⢄⢡⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱⢐
⢠⢕⠅⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅⢐
⣔⢕⢥⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇⢔
⢕⢕⢽⢸⢟⢟⢖⢖⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦⢤⢤⢔⢞⢿⢿⣿⠁⢕
⢕⢕⠅⣐⢕⢕⢕⢕⢕⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿⢗⢕⢕⢕⢕⢕⢕⡏⣘⢕
⢕⢕⠅⢓⣕⣕⣕⣕⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣕⢕⢕⢕⢕⡵⢀⢕⢕
⢑⢕⠃⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⢕⢕⢕
⣆⢕⠄⢱⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁⢕⢕⠕⢁
⣿⣦⡀⣿⣿⣷⣶⣬⣍⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭⣤⣂⢜⠕⢑⣡⣴⣿
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	int n; cin>>n;
 	int a[n]; 
 	int m; cin>>m; 
 	for (int i = 0; i < n; i++) 
 	{
 		cin>>a[i]; 
 	} 
 	string x = (recursion_binary_search(a , 0 , n - 1 , m)) ? "yes" : "no" ; 
 	string y = (binary_search(a , a + n , m)) ? "yes" : "no" ; // find in [x , y - 1] => binary_search(x , y - 1 , key);
 	cout<<y<<"\n"; 
    return 0;
}