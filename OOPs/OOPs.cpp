/*#include<iostream>
using namespace std;
class Hero{
    
};
int main(){
Hero h1;
cout<<"size :" << sizeof(h1) <<endl;
}*/
//acess modifier
/*#include<iostream>
using namespace std;
class Hero{
   public:
   int health;
   char level; 
};
int main(){
Hero h1;
h1.health=80;
h1.level='A';
cout<<"Health is :" << h1.health <<endl;
cout<<"level is :" <<h1.level <<endl;
}*/
//getter and setter
/*#include<iostream>
using namespace std;
class Hero{
   private:x
   int health;
   public:
   char level;
   int gethealth(){
    return health;
   }
   int getlevel(){
    return level;
   }
   void sethealth(int h){
    health=h;
   }
   void setlevel(char ch){
    level=ch;
   }
};
int main(){
Hero h1;
h1.sethealth(90);
//getter
cout<<"h1 health is :"<<h1.gethealth()<<"\n";
//setter
h1.sethealth(45);
cout<<"h1 health is :"<<h1.gethealth();
}*/ 
//#dynamic memory allocate
/*#include<iostream>
using namespace std;
class hero{
   private:
 int health;
 public:
 char level;
 int gethealth(){
   return health;
 }
 char getlevel(){
   return level;
 }
 void sethealth(int h){
   health=h;
 }
   void setlevel(char ch){
      level=ch;
   }
};
int main(){
hero *b=new hero;
b->setlevel('a');
b->sethealth(70);
cout<<"level is"<<(*b).level<<endl;
cout<<"health is"<<(*b).gethealth()<<endl;
cout<<"level is"<<b->level<<endl;
cout<<"health is"<<b->gethealth()<<endl;
}*/
//constructor
#include<iostream>
using namespace std;
class hero{
   private:
 int health;
 public:
 char level;
 hero(){
  cout<<"constructor called\n";
 }
 int gethealth(){
   return health;
 }
 char getlevel(){
   return level;
 }
 void sethealth(int h){
   health=h;
 }
   void setlevel(char ch){
      level=ch;
   }
};
int main(){
  cout<<"start of int main()"<<"\n";
       hero ramesh;
       hero *k=new hero;
       hero *m=new hero();
  cout<<"hello\n";

}