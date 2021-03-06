#ifndef _OBSERVER_H
#define _OBSERVER_H

#include "CommonTypes.h"
/**
 * @brief This is an Observer base class. The View is derived from it. 
 * It observes from the Subject class for any information.
 * 
 */
class Observer
{
    public:
    //defining a function update to update all the variables to the current situation
    virtual void update(piece currentPlayer, int message, std::vector<std::vector<piece>> boardConfiguration, int blackScore, int whiteScore, std::string move)=0;
};

#endif