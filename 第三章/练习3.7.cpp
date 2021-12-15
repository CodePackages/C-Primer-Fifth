#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    string s1; 
    getline(std::cin, s1);

    // c++11
    // for( char &c : s1 ) {
    //     if( isalpha(c) ) {
    //         c = 'X';
    //     }
    // }

    // for (string::size_type i = 0; i < s1.size(); i++)
    // {
    //     char &c = s1[i];
    //     if( isalpha(c) )
    //     {
    //         c = 'X';
    //     }
    // }
    
    string::size_type index = 0;
    while( index < s1.size() && s1[index] != '\0' )
    {
        char &c = s1[index];
        if( isalpha(c) )
        {
            c = 'X';
        }

        index++;
    }

    cout << s1 << endl;
    
    return 0;
}