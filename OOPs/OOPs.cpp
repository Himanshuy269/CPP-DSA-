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
/*#include<iostream>
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

}*/
//parameterised constructor
/*#include<iostream>
using namespace std;
class hero{
   private:
 int health;
 public:
 char level;
 hero(){
  cout<<"constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
void print(){
  cout<<level<<endl<<health<<endl;
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
  hero ramesh(34);
  cout<<"adress of ramesh ="<<&ramesh<<"\n";
  ramesh.print();
  hero *h=new hero(11);
  cout<<"adress of h"<<&h<<endl;
  h->print();
  hero temp(22,'a');
  cout<<"adress of h"<<&temp<<endl;
  temp.print();  
}*/
//#copy constructor
/*#include<iostream>
using namespace std;
class hero{
   private:
 int health;
 public:
 char level;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<"health="<<this->health<<endl;
  cout<<"level="<<level<<endl;
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
 hero s(70,'s');
 s.print();
 hero r(s);
 s.print(); 
}*/
//#shallow copy
/*#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
// hero(hero& temp){
//   cout<<"copy constructor called"<<endl;
//   this->health=temp.health;
//   this->level=temp.level;
// }
void print(){
  cout<<endl;
  cout<<"name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
};
int main(){
 hero hero1;
 hero1.sethealth(12);
 hero1.setlevel('D');
 char name[10]="chris";
 hero1.setname(name);
 hero1.print();
 //use default copy constructor
 hero hero2(hero1);
 hero2.print();
 //hero hero2=hero1
 hero1.name[0]='t';
 hero1.print();

 hero2.print();
}*/
//#deep copy
/*#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"[ name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<" ]"<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
};
int main(){
 hero hero1;
 hero1.sethealth(12);
 hero1.setlevel('D');
 char name[10]="chris";
 hero1.setname(name);
 hero1.print();
 //use created copy constructor
 hero hero2(hero1);
 hero2.print();
 //hero hero2=hero1
 hero1.name[0]='t';
 hero1.print();

 hero2.print();
}*/
//#assignment operator
/*#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"[ name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<" ]"<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
};
int main(){
 hero hero1;
 hero1.sethealth(12);
 hero1.setlevel('D');
 char name[10]="chris";
 hero1.setname(name);
 //hero1.print();
 hero hero2(hero1);
 //hero2.print();
 //hero hero2=hero1
 hero1.name[0]='t';
 hero1.print();
 hero2.print();
 hero1=hero2;
 hero1.print();
 hero2.print();
}*/
//#destructor
/*#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"[ name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<" ]"<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
   //destructor
   ~hero(){
    cout<<"destructor called"<<endl;
   }// to delete staticslly sllocstrd condtructor
};
int main(){
 hero hero1;
 hero *b=new hero();
 delete b;//to delete dynamic constructor
}*/
//#static keyword
/*#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 static int timetocomplete;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"[ name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<" ]"<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
   //destructor
   ~hero(){
    cout<<"destructor called"<<endl;
   }// to delete staticslly allocstrd condtructor

};
int hero::timetocomplete=5;
int main(){
 cout<< hero::timetocomplete;
}*/
//static function
#include<iostream>
#include<string.h>
using namespace std;
class hero{
   private:
 int health;
 public:
 char *name;
 char level;
 static int timetocomplete;
 hero(){
  cout<<"simple constructor called\n";
 }
 //paramertised constructor
 hero(int health){
  cout<<"this ="<<this<<endl;
  this->health=health;
}
hero(int health,char level){
  //cout<<"adress of temp ="<<this<<endl;
  this -> health =health;
  this -> level=level;
}
//copy constructor
hero(hero& temp){
  char *ch=new char[strlen(temp.name)+1];
  strcpy(ch,temp.name);
  this->name=ch;
  cout<<"copy constructor called"<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"[ name="<<this->name<<",";
  cout<<"health="<<this->health<<",";
  cout<<"level="<<this->level<<" ]"<<endl;
  cout<<endl;
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
   void setname(char name[10] ){
         strcpy(this->name, name);
   }
   static int random(){
    return timetocomplete;//can only return static member 
   }
   //destructor
   ~hero(){
    cout<<"destructor called"<<endl;
   }// to delete staticslly allocstrd condtructor

};
int hero::timetocomplete=5;
int main(){
 cout<< hero::timetocomplete<<endl;
 cout<< hero::random();
}