https://www.hackerrank.com/challenges/30-regex-patterns/problem?isFullScreen=true




#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);
    
    vector<string>answers;  
    
    int N = stoi(ltrim(rtrim(N_temp)));

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];

        string emailID = first_multiple_input[1];
    
    if(regex_match(firstName,regex("[a-z]{1,20}")) and regex_match(emailID,regex("[a-z.]+@gmail.com{1,50}")))
            answers.push_back(firstName);
            
    }
    
    sort(answers.begin(),answers.end());
        
    for(auto i: answers) 
        cout<<i<<endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}