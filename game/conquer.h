#include "map.h"
using namespace std;
class conquer
{
public:   
        conquer(map& new_map, int play_num=DEFAULT_PLAYER_NUM)
        {
           if(play_num<0||play_num>MAX_PLAYER_NUM)
            {
                cout<<"player number can't less than zero or more than "<<MAX_PLAYER_NUM<<endl;
                cout<<"Set default player number: "<<DEFAULT_PLAYER_NUM<<endl;
                
                //initial the configure
                player_num=DEFAULT_PLAYER_NUM;
                play_map=new_map;
            }
            else {player_num=play_num;}

            play_map=new_map;
        }
private: 
        int player_num;
        map play_map;
        static const int MAX_PLAYER_NUM=10;
        static const int DEFAULT_PLAYER_NUM=5;

};