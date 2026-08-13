#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s.empty()) continue;

        int cnt=0;
        string str;
        for (char &c : s)
        {
            c = tolower(static_cast<unsigned char>(c));
        }
        stringstream ss(s);
        vector<string> words;
        while (ss >> str)
        {
            words.push_back(str);
        }
        for(int i=0; i<(int)words.size()-1; i++)
        {
            if(words[i][0]==words[i+1][0])
            {
                cnt++;
                while(i+1<(int)words.size()&&words[i][0]==words[i+1][0])
                {
                    i++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
