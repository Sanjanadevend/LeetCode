class Solution {
public:
bool fun(string &s, string &t, int i, int j)
{
    if(i<0) //all characters match
    {
        return true; 
    }
    if(j<0)//characters doesn't match
    {
        return false;
    }

    if(s[i] == t[j])
    {
        return fun(s,t, i-1, j-1);
    }

    return fun(s, t, i, j-1);
}
    bool isSubsequence(string s, string t) {
    //  if(t.length() < s.length)
    //  {
    //     return false;
    //  }

    //     int i = 0, j=0;

    //     while(i<s.length)
    //     {
    //         if(s[i]== t[j] )
    //         {
    //             i++;
    //             j++;
    //         }

    //         else if(s[i]!= t[j])
    //         {
    //             j++;
    //         }

            
    //     }
    int i= s.length();
    int j= t.length();
    return fun(s,t, i-1, j-1);
       
    }
};