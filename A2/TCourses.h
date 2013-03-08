#ifndef TCOURSES_H
#define RCOURSES_H

using namespace std;
#include <curses.h>
#include <string>
#include "CourseLoader.h"
#include "TaCourse.h"
#include "TaCourseQueue.h"

#define TCNUM_CHOI 6
#define TCMAX_BUF 30


class TCourses
{
  public:
    TCourses(std::string, TaCourseQueue **);
    ~TCourses();
    
    bool initTCourses();

  private:
    //Member Functions
    void drawTCourses(int);
    int handleInput(char);
    int handleSelection(int);
    int handleAccept();
    int handleAdd();
    int initCourseView(int);
    int drawCourseView(int);
    TaCourse* checkValid();

    //Data Members
    bool cancel;
    int index;
    int courseIndex;
    int nBreaker;
    std::string course; 
    std::string *courseList;
    std::string relatedCourse;

    CourseLoader *load;
    TaCourseQueue **tAHead;
    TaCourse *newTAC;

    std::string labels[TCNUM_CHOI];
    std::string textFields[TCNUM_CHOI - 3];

};
#endif
