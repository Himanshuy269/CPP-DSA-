//encapsulation
/*#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int height;
    public:
    int getage(){
            return this->age;
    }
};
int main(){
  student first;
  cout<<"all good"<<endl;  
}*/
//inheritance
/*#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge()    {
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
};
class male: public human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping";
    }
};
int main(){
male object1;
cout<<object1.age<<endl;
cout<<object1.weight<<endl;
cout<<object1.height<<endl;
cout<<object1.color<<endl;
object1.setweight(84);
object1.sleep();
}*/
//types of inheritance
//single inheritance
/*#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking";
    }
};
class dog: public animal {

};
int main(){
    dog d;
    d.speak();
     cout<<d.age<<endl;
    return 0;
}*/
//multilevel inheritance
/*#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking";
    }
};
class dog: public animal {
};
class germanshepherd:public dog{
};
int main(){
    germanshepherd g;
    g.speak();
    return 0;
}*/
//multiple inheritance
/*#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking";
    }
};
class human{
    public:
    string color;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class hybrid:public animal,public human{

};
int main(){
hybrid obj1;
obj1.speak();f
obj1.bark();
}*/
//hierachical inheritance
/*#include<iostream>
using namespace std;
class a{
    public:
    void func1(){
        cout<<"inside function a"<<endl;
    }
};
class b:public a{
   public:
   void func2(){
    cout<<"inside function b"<<endl;
   } 
};
class c:public a{
    public:
    void func3(){
        cout<<"inside function c"<<endl;
    }
};
int main(){
    a obj1;
    obj1.func1();
    b obj2;
    obj2.func2();
    obj2.func1();
    c obj3;
    obj3.func1();
    //obj3.func2(); not valid as c is not sub class of a
    obj3.func3();
}*/
//#Hybrid inheritance
/*#include<iostream>
using namespace std;
class vehicle {
public:
 vehicle() {
    cout<<"this is a vehicle"<<endl;
 }
};
class fare{
    public:
    fare(){
       cout<<"fare of vehicle"<<endl; 
    }
};
class car: public vehicle{
};
class bus:public vehicle,public fare{

};
int main(){
    cout<<"hii\n";
bus obj2;
//obj2.fare();
   return 0;
}*/
//inheritance ambiguity
#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"I am a"<<endl;    }
};
class b{
    public:
    void fun(){
        cout<<"I am b"<<endl;    }
};
class c:public a,public b{

};
int main(){
c obj;
obj.a::fun();
obj.b::fun();
}