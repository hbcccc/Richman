//THIS will contain some maps, so we will not need to create a map before we play. :)
//time is out, we will make more good maps at the third iteration. This time we will make a very simple map;
#include "map.h"

map* get_initial_map(const int play_num,int choice=0 )
{
    int size;
    map* t;
switch (choice)
case 1:



default:    t=new map( size= map::DEFAULT_MAP_SIZE );
        for(int i=0;i<size;i++)
        { t->set_Map(i,1,1,0);}// exactly, it is the default configure that we have done at 'new map'  
                               //;)but maybe we can use it to to get a funnier map.

return t;
}