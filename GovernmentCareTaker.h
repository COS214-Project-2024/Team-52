#ifndef GOVERNMENTCARETAKER_H
#define GOVERNMENTCARETAKER_H

#include "GovernmentMemento.h"

class GovernmentCaretaker{
    private :
        vector<GovernmentMemento*> history ;
    public :
        void saveMemento(GovernmentMemento* memento);
        GovernmentCaretaker* getMemento(int i);
        ~GovernmentCaretaker();
};


#endif