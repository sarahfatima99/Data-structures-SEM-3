
#include <bits/stdc++.h>
using namespace std;
 
//It will take the string and prints the longest palindromic substring
//and its length
void printLPSS( string s )
{
    //finding the length of given string
    int n = s.size(); 
 
    //Table table[i][j] is true if the string from  i index to j index is a palindrome
    bool table[n][n];
    //Initializing all contents of the table to 0
    memset(table, 0, sizeof(table));
 
    // All substrings of length 1 are palindromes
    int maxLength = 1;
    for (int i = 0; i < n; ++i)
        table[i][i] = true;
 
    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (s[i] == s[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }
 
    // Check for lengths greater than 2. k is length
    // of substring
    for (int k = 3; k <= n; ++k)
    {
        // Fix the starting index
        for (int i = 0; i < n-k+1 ; ++i)
        {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff s[i+1] to s[j-1] is a
            // palindrome
            if (table[i+1][j-1] && s[i] == s[j])
            {
                table[i][j] = true;
 
                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    //Printing the longets palindromic substring
    int end = start + maxLength - 1; 
    cout<<"Longest palindrome substring is ";
    for( int i = start; i <= end; ++i )
    {
        cout<<s[i];
    }
    cout<<endl;
    //Length of the above longest palindromic substring
    cout<<maxLength<<endl;
}
 

int main()
{
    string s= "11231312313213132359878";
    printLPSS(s);
    return 0;
}
