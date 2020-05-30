#ifndef SQURE_H
#define SQURE_H
class squre
{
   private:  
             int squre_type;
             int squre_level;
             int squre_owner;




    public:
            //Tag of squre type，  example below.   belongs to the class ,not any object of this class
          static const int    DEFAULT_BUFF=0,    GOOD_BUFF=1, BAD_BUFF=2;
         squre()
         {
             squre_type=squre_level=squre_owner=0;
         }

        bool set_squre( int s_type=-1, int s_level=-1, int s_owner=-1)
         {//return true if successfully set.
          //if not, will return false. since i have not time, maybe done next time.

                
                 squre_type=s_type;
                 squre_level=s_level;
                 squre_owner=s_owner;
                 return true;
         }

         int get_owner(){return squre_owner;};
         void set_owner(int x)
           {
               squre_owner=x;
           }


};//end class scope

#endif