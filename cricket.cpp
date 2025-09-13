#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

class Player
{

public:
  string playerName;
  int playerRuns = 0;

  void create(string name)
  {
    playerName = name;
    playerRuns = 0;
  }

  void celebration(int celebRuns)
  {

    cout
        << playerName << " Hit a boundary " << celebRuns << endl
        << endl;
  }

  void bat()
  {
    int randomRuns = rand() % 7;
    playerRuns += randomRuns;
    if (randomRuns == 4 || randomRuns == 6)
    {
      celebration(randomRuns);
    }
  }
  string getName()
  {
    return playerName;
  }

  int getRuns()
  {
    return playerRuns;
  }
};

class Team
{

public:
  string teamName;
  Player *players = new Player[3];
  int totalTeamRuns = 0;

  void create(string tN)
  {
    teamName = tN;
    for (int i = 0; i < 3; i++)
    {
      string n;
      cout << "Enter player name: ";
      cin >> n;
      players[i].create(n);
    }
  }

  int showScore()
  {
    return totalTeamRuns;
  }

  void playInnings()

  {

    cout << teamName << "'s innings" << endl;
    for (int i = 0; i < 3; i++)
    {

      for (int j = 0; j < 3; j++)
      {
        Sleep(500);
        players[i].bat();
        cout << players[i].getName() << "'s run after " << j + 1 << " ball:  " << players[i].getRuns();
        cout << endl
             << endl;
        totalTeamRuns += players[i].getRuns();
      }
      Sleep(500);
    }
  }
};
int main()
{

  srand(time(0));

  Team t1, t2;

  t1.create("Team-1");
  t1.playInnings();
  cout << endl
       << "Total Team Runs After 3 players of Batting :" << t1.showScore() << endl;

  t2.create("Team-2");
  t2.playInnings();
  cout << endl
       << "Total Team Runs After 3 players of Batting :" << t2.showScore() << endl;

  if (t1.showScore() > t2.showScore())
  {
    cout << endl
         << t1.teamName << " Won The Match with runs " << t1.showScore() - t2.showScore() << endl;
  }
  else
  {
    cout << endl
         << t2.teamName << " Won The Match with runs " << t2.showScore() - t1.showScore() << endl;
  }

}