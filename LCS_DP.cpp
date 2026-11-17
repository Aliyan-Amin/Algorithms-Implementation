#include <iostream>
#include <string>

using namespace std;

int LCS(string &X, string &Y, int n, int m)
{
    int t[n+1][m+1];
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<m+1; j++)
        {
            if(i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<m+1; j++)
        {
            if(X[i-1] == Y[j-1])
            {
                t[i][j] = 1+ t[i-1][j-1];
            }
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    
    return t[n][m];
}
    

int main()
{
    string string_1 = "ABCB";
    string string_2 = "BDCAB";
    
    
    int length_of_longest_substring = LCS(string_1, string_2, string_1.size(), string_2.size());
    
    cout << "Size of longest subsequence is: " << length_of_longest_substring;
    
    return 0;
}