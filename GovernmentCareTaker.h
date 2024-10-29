#ifndef GOVERNMENTCARETAKER_H
#define GOVERNMENTCARETAKER_H
#include <vector>
#include <iostream>
using namespace std;
class GovernmentMemento;
class GovernmentCaretaker{
  private:
    vector<GovernmentMemento*> history;
  public:
    void saveMemento(GovernmentMemento* memento);
    GovernmentMemento* getMemento(int i);
    ~GovernmentCaretaker();
};
#endif