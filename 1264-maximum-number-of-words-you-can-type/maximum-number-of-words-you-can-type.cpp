// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int canBeTypedWords(string text, string bro) {
        int flag=0;
        map<char,int> mpp;
        for (auto it : bro) mpp[it]++;
        int ans=0;
        int words=1;
        for (int i=0;i<text.length();i++)
        {
            char cur=text[i];
            if (cur==' ') words++;
            
        }
        for (auto it : text)
        {
            if (it==' ') flag=0;
            else
            {
                if (mpp[it]!=0 && flag==0)
                {
                    ans++;
                    flag=1;
                }
            }
        }
        cout << words << " " << ans << endl;
        return words-ans;
        
    }
};