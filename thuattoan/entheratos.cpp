#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define ull unsigned long long 
const int mod = 1000000;
bool mp[1000000]; 
void eratosthenes() // sang snt (1 - n)
{
    int n; cin>>n; 
    for (int i = 2; i <= n; i++) 
    {
        mp[i] = true;
    }
    for (int i = 2; i <= sqrt(n); i++) 
    {
       if (mp[i]) 
       {
            for (int j = i * i; j <= n; j =j + i) 
            {
                mp[j] = false; 
            }
       }
    }
    for (int i = 2; i <= n; i++) 
    {
        if (mp[i]) 
        {
            cout<<i<<" "; 
        }
    }
}
void Eratosthenes2() // sol chuan sang so nguyen to trenn doan (use this)
{
    int n; cin>>n; 
    int m; cin>>m; 
    for (int i = 2; i <= m; i++) 
    {
        mp[i] = true; 
    }
    for (int i = 2; i <= sqrt(m); i++)
    {
        for (int j = max(i*i , (n + i - 1) / i*i); j <= m; j = j + i) 
        {
            mp[j] = false; 
        }
    }  
    for (int i = n; i <= m; i++) 
    {
        if (mp[i]) 
        {
            cout<<i<<" "; 
        }
    }
}
void SieveOfEratosthenes(int l, int r)  
{
    // tạo một mảng để lưu trữ số nguyên tố
    bool prime[r - l + 1];
    memset(prime, true, sizeof(prime));

    // loại bỏ các số không phải là số nguyên tố
    for (int i = 2; i * i <= r; i++) {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
            prime[j - l] = false;
        }
    }

    // in các số còn lại là số nguyên tố
    for (int i = l; i <= r; i++) {
        if (prime[i - l]) {
            cout << i << " ";
        }
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
 	eratosthenes();    
    return 0;
}