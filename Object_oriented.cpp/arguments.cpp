#include <iostream>

using namespace std;

class waifu
{

    string Anime, Name, character;
    int size, height;

public:
    void FourmData();
};

void waifu ::FourmData()
{
    cout << "Your Waifu name: ";
    cin >> Name;

    cout << "Which  Anime: ";
    cin >> Anime;

    cout << "Her Boob's size: ";
    cin >> size;

    cout << "her heigh: ";
    cin >> height;

    cout << "her character: ";
    cin >> character;
}

int main()
{

    waifu Anime[10];

    for (int a = 0; a < 10; a++)
    {
        Anime->FourmData();
    }

    return 0;
}