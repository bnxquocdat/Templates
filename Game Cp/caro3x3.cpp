#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define ull unsigned long long 
const int mod = 1000000;
bool check(char a[][100] , int n , int m) 
{
    if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != '*') 
    {
        return true; 
    }
    else if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != '*') 
    {
        return true;
    }
    else if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != '*') 
    {
        return true; 
    }
    else if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != '*') 
    {
        return true; 
    }
    else if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != '*')
    {
        return true; 
    }
    else if(a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != '*')
    {
        return true;
    }
    else if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '*') 
    {
        return true; 
    }
    else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '*') 
    {
        return true; 
    }
    return false; 
}
void caro(char a[][100] , int n , int m) 
{
    if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != '*') 
    {
        cout<<a[0][0]<<"\n"; return; 
    }
    else if (a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != '*') 
    {
        cout<<a[0][1]<<"\n"; return; 
    }
    else if (a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != '*') 
    {
        cout<<a[0][2]<<"\n"; return; 
    }
    else if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != '*') 
    {
        cout<<a[0][0]<<"\n"; return; 
    }
    else if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != '*')
    {
        cout<<a[1][0]<<"\n"; return; 
    }
    else if(a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != '*')
    {
        cout<<a[2][0]<<"\n"; return; 
    }
    else if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '*') 
    {
        cout<<a[0][0]<<"\n"; return; 
    }
    else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '*') 
    {
        cout<<a[0][2]<<"\n"; 
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
    while(true) 
    {   
        cout<<"PRESS NAME OF 2 PLAYER (p1 mark o && p2 mark x)"<<endl; 
        string p1,p2; cin>>p1>>p2; 
        cout<<"p1 named : "<<p1<<endl;
        cout<<"p2 named : "<<p2<<endl;
        int n = 3; 
        int m = 3; 
        char a[100][100]; 
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                a[i][j] = '*'; 
            }
        }
        char c; 
        for (int i = 0; i <= 8; i++) 
        {
            if (i % 2 == 0) 
            {
                cout<<"caro mark type"<<endl; 
                cout<<"|a b c|"<<endl; 
                cout<<"|d e f|"<<endl; 
                cout<<"|g h i|"<<endl; 
                for (int i = 0; i < 3; i++) 
                {
                    for (int j = 0; j < 3; j++) 
                    {
                        cout<<a[i][j]<<" "; 
                    }
                    cout<<endl;
                }
                cout<<"p1 turn :(mark o) "<<endl;
                cout<<p1<<" choice : "<<endl; cin>>c; 
                if (c == 'a') 
                {
                    a[0][0] = 'o'; 
                } 
                else if (c == 'b') 
                {
                    a[0][1] = 'o'; 
                }
                else if (c == 'c') 
                {
                    a[0][2] = 'o'; 
                }
                else if (c == 'd') 
                {
                    a[1][0] = 'o'; 
                }
                else if (c == 'e') 
                {
                    a[1][1] = 'o'; 
                }
                else if (c == 'f') 
                {
                    a[1][2] = 'o'; 
                }
                else if (c == 'g') 
                {
                    a[2][0] = 'o'; 
                }
                else if (c == 'h')
                {
                    a[2][1] = 'o'; 
                }
                else if (c == 'i') 
                {
                    a[2][2] = 'o'; 
                }
                cout<<"after marking p1 turn"<<endl;
                for (int i = 0; i < 3; i++) 
                {
                    for (int j = 0; j < 3; j++) 
                    {
                        cout<<a[i][j]<<" "; 
                    }
                    cout<<endl;
                }
            }
            else if (i % 2 != 0) 
            {
                cout<<"caro mark type"<<endl; 
                cout<<"|a b c|"<<endl; 
                cout<<"|d e f|"<<endl; 
                cout<<"|g h i|"<<endl;
                for (int i = 0; i < 3; i++) 
                {
                    for (int j = 0; j < 3; j++) 
                    {
                        cout<<a[i][j]<<" "; 
                    }
                    cout<<endl;
                } 
                cout<<"p2 turn :(mark x) "<<endl;
                cout<<p2<<" choice : "<<endl; cin>>c;
                if (c == 'a') 
                {
                    a[0][0] = 'x'; 
                } 
                else if (c == 'b') 
                {
                    a[0][1] = 'x'; 
                }
                else if (c == 'c') 
                {
                    a[0][2] = 'x'; 
                }
                else if (c == 'd') 
                {
                    a[1][0] = 'x'; 
                }
                else if (c == 'e') 
                {
                    a[1][1] = 'x'; 
                }
                else if (c == 'f') 
                {
                    a[1][2] = 'x'; 
                }
                else if (c == 'g') 
                {
                    a[2][0] = 'x'; 
                }
                else if (c == 'h')
                {
                    a[2][1] = 'x'; 
                }
                else if (c == 'i') 
                {
                    a[2][2] = 'x'; 
                }
                cout<<"after marking p1 turn"<<endl;
                for (int i = 0; i < 3; i++) 
                {
                    for (int j = 0; j < 3; j++) 
                    {
                        cout<<a[i][j]<<" "; 
                    }
                    cout<<endl;
                }  
            }
            if (check(a , n , m)) 
            {
                cout<<"THE winner : "; 
                caro(a , n , m); 
                cout<<endl; 
                break; 
            }
            else if (i == 8 && check(a , n , m) == false)
            {
                cout<<"tie"<<endl; 
                break; 
            }
        } 
        cout<<"Do you want to continue play ! enter 1 to continue and 0 to end"<<endl;
        int k; cin>>k; 
        if (k == 0) {cout<<"goodbye buddy !";break;} 
        else if (k == 1) {cout<<"continue !"<<endl;}
    } 
    return 0;
}