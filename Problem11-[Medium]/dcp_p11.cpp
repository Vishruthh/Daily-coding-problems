#include <iostream>
using namespace std;
int main()
{
    int n=10;
    char set[n][10]={"dog", "deer", "deal", "demon", "dove", "dingy", "devil", "dinosaur","devil","dime"};
    char srt[2];
    cout<<"\nThe set: - dog, deer, deal, demon, dove, dingy, devil, dinosaur,devil, dime";
    cout<<"\nEnter the starting 2 letters: ";
    for(int i=0;i<2;i++)
    {
        scanf("%c",&srt[i]);
    }
    cout<<"\nThe words are: ";
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<2;j++)
        {
            if ((set[i][j]==srt[j]))
            {
                count++;
            }
        }
        if(count==2)
            {
                cout<<set[i]<<", ";
            }
    }
}