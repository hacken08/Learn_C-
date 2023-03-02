#include <iostream>

using namespace std;

class Anime
{
    int Boobs;
    int hair;
    string name;
    int Count;

public:
    void readData();
    void getData();
};

void Anime ::readData()
{
    cout << "Name => " << name << endl;
    cout << "Height => " << Boobs << endl;
    cout << "Weight => " << hair << endl;
}

void Anime ::getData()
{

    cout << "Name of your girl: ";
    cin >> name;

    cout << "Height: ";
    cin >> Boobs;

    cout << "Weight: ";
    cin >> hair;
}
// void Anime ::Count;

int main()
{

    Anime naruto, onePiece, deathNote;

    naruto.getData();
    naruto.readData();

    onePiece.getData();
    onePiece.readData();

    deathNote.getData();
    deathNote.readData();

    return 0;
}