/*
// Program to check if a string is a palindrome using recursion
//
// Author:Jojo Jose
// Date: Dec 14, 2022
*/
#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(const string& str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
// go to the next character if it is a black space
    if (str[start] == ' ')
    {
        return checkPalindrome(str, start + 1, end);
    }
// go to the character before if current character is a black space

    if (str[end] == ' ')
    {
        return checkPalindrome(str, start, end - 1);
    }

    char start_char = tolower(str[start]);
    char end_char = tolower(str[end]);

    if (start_char == end_char)
    {
        return checkPalindrome(str, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}


int main()
{
    cout << "Enter a string: ";

    string str;
    getline(cin, str);

    bool check_palindrome = checkPalindrome(str, 0, str.length() - 1);

    if (check_palindrome)
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}

