#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <set>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    fstream file;
    file.open("in.txt", ios::in);
    if (!file.is_open())
    {
        cerr << "Помилка" << endl;
        return EXIT_FAILURE;
    }
    vector<string> text;
    string line;
    while (getline(file, line))
    {
        text.push_back(line);
    }

    set<char> st;
    for_each(text.begin(), text.end(), [&st](string s)
        {
            st.insert(s.begin(), s.end());
        });
    
    copy(st.begin(), st.end(), ostream_iterator<char>(cout, " ")); 
    


    return EXIT_SUCCESS;
}