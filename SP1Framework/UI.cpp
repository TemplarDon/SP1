#include <iostream>

#include "UI.h"
#include "game.h"
#include "Framework\console.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
// UI THINGY

//Timer Notification
void timer(double g_dElapsedTime)
{
    if ((g_dElapsedTime >= 240) && (g_dElapsedTime <= 245))
    {
        gotoXY(50,0);
        cout << "Time is "<< g_dElapsedTime << "! ";
    }
    if ((g_dElapsedTime >= 540) && (g_dElapsedTime <= 545))
    {
        gotoXY(50,0);
        cout << "Time is "<< g_dElapsedTime << "! ";
    }
    if ((g_dElapsedTime >= 840) && (g_dElapsedTime <= 845))
    {
        gotoXY(50,0);
        cout << "Time is "<< g_dElapsedTime << "! ";
    }
    if ((g_dElapsedTime >= 10) && (g_dElapsedTime <= 15))
    {
        gotoXY(50,0);
        cout << "Time is "<< g_dElapsedTime << "! ";
    }

    //Timer
    gotoXY(50,1);
    cout << "Timer:";
    gotoXY(50,2);
    cout << g_dElapsedTime;
}
    

//Lives
void lives( player & user )
{
    gotoXY(50,3);

    cout << "Lives: ";
    gotoXY(50,4);
    for (int count = 1; count <= user.lives; ++count)
    {
        cout << (char)1 << "  ";
    }
}


////Damage Taken
//void damagetaken(bool damage, player user)
//{
//    if (damage == 1)
//    {
//        user.lives -= 1;
//    }
//}


//Render Inventory
void renderInventory( player & user )
{
    gotoXY(50,5);

    cout << "Inventory: ";
    gotoXY(50,6);
    
    if (user.inventory[0] == 't')
    {
        cout << "1. " << user.inventory0 << "  ";
    }
    if (user.inventory[1] == 't')
    {
        cout << "2. " << user.inventory1 << "  ";
    }
    if (user.inventory[2] == 't')
    {
        cout << "3. " << user.inventory2 << "  ";
    }
    if (user.inventory[3] == 't')
    {
        cout << "4. " << user.inventory3 << "  ";
    }
    if (user.inventory[4] == 't')
    {
        cout << "5. " << user.inventory4 << "  ";
    }
    if (user.inventory[5] == 't')
    {
        cout << "6. " << user.inventory5 << "  ";
    }
}

void point( player & user )
{
    (50,7);
    
    cout << "Points: " << user.points;
}
    