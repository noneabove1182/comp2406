#ifndef CAMENU_H
#define CAMENU_H

#include <string>
#include <curses.h>
#include "ApplicationQueue.h"
#include "PendingApps.h"
using namespace std;

class CutaesAdminMenu
{
  public:
    CutaesAdminMenu(ApplicationQueue **);
    ~CutaesAdminMenu();

    void initAdminMenu();

  private:
    void drawAdminMenu(int);
    int handleInput(char);
    int handleSelection(int);
    int index;
    int nBreaker;
    
    ApplicationQueue **applications;
    PendingApps *pending;
    std::string labels[6];
};
#endif
