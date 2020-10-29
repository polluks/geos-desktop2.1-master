#include "desktop-vectors.h"

unsigned char lastMinute = 99;

void_func oldOtherPressVector;
void_func oldAppMain;

void hook_into_system(void) {
    oldOtherPressVector = otherPressVec;
    otherPressVec = newOtherPressVectorHandler;

    oldAppMain = appMain;
    appMain = newAppMainHandler;
}

void remove_hook(void) {
    otherPressVec = oldOtherPressVector;
    appMain = oldAppMain;
}

void newOtherPressVectorHandler(void) 
{
    unsigned char pgNext = 0;
    unsigned char pgPrev = 0;
    unsigned char tmp = 0;
    unsigned char selectedIcon = 99;

    //PutDecimal(SET_LEFTJUST + SET_SURPRESS, mouseXPos,  190, 160);
    //PutDecimal(SET_LEFTJUST + SET_SURPRESS, mouseYPos,  190, 190);

    // if mouse down, check region
    if(mouseData < 128)
    {    
        // file icon selected?
        for(tmp=0; tmp<8;tmp++)
        {
            if(IsMseInRegion(&fileIconWindows[tmp]))
            {
                InitDrawWindow(&fileIconWindows[tmp]);
                InvertRectangle();

                selectedIcon = tmp;
                numSelected++;
                PutString("  ", 39,64);
                PutDecimal(SET_LEFTJUST + SET_SURPRESS, numSelected,  39, 64);
            }
        }   
        
        // pager icon selected?
        if (selectedIcon == 99)
        {
            // paging
            for(tmp=0; tmp < 14; tmp++)
            {
                if(mouseYPos > 126 && mouseYPos< 142)
                {
                    if((mouseYPos == (127 + tmp)) && ((mouseXPos > (8+tmp)) && (mouseXPos < 24))) { 
                        pgNext = 1;
                        break;
                    };
                    
                    if((mouseYPos == 127 + tmp) && (mouseXPos > 8 && mouseXPos < (10 + tmp))) { 
                        pgPrev = 1;
                        break;
                    };
                }
            }
        }

        if (pgNext == 1)
        {
            //PutString("pgNext", 197, 240);
            clearAllFileIcons();
            curPage++;
            updateDirectory();
        }
            

        if (pgPrev == 1)
        {
            //PutString("pgPrev", 197, 240);
            clearAllFileIcons();
            curPage--;
            updateDirectory();
        }
            

        //if (pgNext == 0 && pgPrev == 0)
        //    PutString("no click", 190, 240);
    }

    oldOtherPressVector();
}


void newAppMainHandler(void) {
        
        if(system_date.s_minutes != lastMinute)
        {
            updateClock();
            lastMinute = system_date.s_minutes;
        }
                 
        oldAppMain();
}




