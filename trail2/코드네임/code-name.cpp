#include <iostream>
using namespace std;

class agent
{
    public:
        char id;
        int score;

        agent(char id = 'T', int score = 0)
        {
            this->id = id;
            this->score = score;
        }
};

int min(int n, agent agent[])
{
    int minvel = agent[0].score, min_id = 0;

    for(int i = 1; i < n; i++)
    {
        if(minvel > agent[i].score)
        {
            minvel = agent[i].score;
            min_id = i;
        }
    }
    return min_id;
}

int main() {
    // Please write your code here.\

    char c;
    int s, id;

    agent agent_arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> c >> s;
        agent_arr[i] = agent(c, s);
    }

    id = min(5, agent_arr);

    cout << agent_arr[id].id << " " << agent_arr[id].score << endl;


    return 0;
}