
#include "map.h"
#include "map_file.cpp"
#include<iostream>
using namespace std;
int main()
{    
    int player_number=2;
    map* new_map=get_initial_map(player_number);
    int position_1=1;
    int position_2=2;
    int score_1=5;
    int score_2=5;
//test below

while(score_1>0&&score_2>0)
{
     if( new_map->get_Map(position_1).get_owner()==0)
         {new_map->get_Map(position_1).set_owner(1);
         score_1+=1;
         
         }
       else if  ( new_map->get_Map(position_1).get_owner()==1)
       {
           score_1+=player_number-1;
           score_2-=1;
       }
           
     if( new_map->get_Map(position_2).get_owner()==0)
         {new_map->get_Map(position_2).set_owner(2);
         score_2+=1;
         
         }
       else if  ( new_map->get_Map(position_2).get_owner()==2)
       {
           score_2+=player_number-1;
           score_1-=1;
       }



   //print the map
    for(int i=0;i<new_map->get_size();i++)
      {squre t_squre=new_map->get_Map(i);
       int x=t_squre.get_owner();
          cout<<x<<"   ";
      }
    cout<<endl;
    for(int x=0;x<4*position_1;x++)
        {cout<<" "; }
        cout<<"a";
    cout<<endl;
    for(int x=0;x<4*position_2;x++)
        {cout<<" "; }
        cout<<"b";

    position_1=(position_1+2)%new_map->get_size();
    position_2=(position_2+1)%new_map->get_size();
    cout<<endl<<"score1: "<<score_1<<endl;
    cout<<"score2: "<<score_2<<endl;
    cin.get();
}


      cin.get();
return 0;
} 