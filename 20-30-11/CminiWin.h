#include <iostream>
#include "CWIn.h"

#ifndef CMINIWIN_H   // 如果CMINIWIN_H 沒有被定義過
#define CMINIWIN_H   // 則定義CMINIWIN_H 

using namespace std;

class CMiniWin : public CWin    // 定義子類別CMiniWin
{
  public:
    CMiniWin(char ch, int w, int h):CWin(ch,w,h){}
    void show(void);
};

#endif    // #ifndef到此結束