#include <iostream>
#include <math.h>

// Vinicius takes his fitness very seriously, and every morning at 6 a.m., rain or shine, in summer and winter, he runs in a track around a pond. 
//Along the race track there are N equally spaced signs. To not be discouraged from exercising, Vinicius counts the number of signs he has passed and checks to see 
//if he has run at least 10%, at least 20%, . . . , at least 90% of his training.

using namespace std;

int main()
{
    int V; //laps
    int N; //signs
    int i = 9;

    cin >> V >> N;
    if (V >= 1 && N <= 10000)
    {

        int totalSigns = N * V;
        float counter = 0.1;
        while (i--)
        {
            cout << ceil(counter * totalSigns) << " ";
            counter += 0.1;
        }
    }

    return 0;
}