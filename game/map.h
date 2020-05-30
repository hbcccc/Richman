#ifndef MAP_H
#define MAP_H
#include "squre.h"
#include<iostream>
using namespace std;
class map
{
private :
       

          int map_size;
          squre* map_pointer;

    //get Map from file which has been defined
   /*
    map* get_map_from_file()
    {
        //no time, maybe we can done next time.  hahaha
    }
   */
public :
 static const int MAX_MAP_SIZE=40,DEFAULT_MAP_SIZE=24;
      map(int m_size=DEFAULT_MAP_SIZE)
      {if(m_size<0||m_size>MAX_MAP_SIZE)
         {map_size=DEFAULT_MAP_SIZE;
             map_pointer=new(squre[DEFAULT_MAP_SIZE]);
             cout<<"wrong map size,can't less than zero or more than 40."<<endl;
             cout<<"AUTO create map with size "<<DEFAULT_MAP_SIZE<<endl;
         }
         else
         {   map_size=m_size;
            map_pointer= new(squre[m_size]);
           
         }
      }//end initial function

    

     bool set_Map(int id=0,int type=1,int level=1,int owner=0 )
      {
          if(id<0||id>map_size)
            return false;
           
        return map_pointer[id].set_squre(type,level,owner); 
      }


    
     squre& get_Map(int id=0)const
    {
                  if(id<0||id>map_size)
            return map_pointer[0];
           
        return map_pointer[id];
    }
      
      int get_size()
      {
          return map_size;
      }



};


#endif