#ifndef STATECHANGER_H
#define STATECHANGER_H


class StateChanger
{
public:
    StateChanger();
    ~StateChanger();
    void act()
    {
        switch(state)
        {
        case RUNNING:
            //
            break;
        case STUCK:
            //
            break;
        case BROKEN:
            //
            break;
        }
    }
protected:
private:
    enum {RUNNING, STUCK, BROKEN} state;
};

#endif // STATECHANGER_H
