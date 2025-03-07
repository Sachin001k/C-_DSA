#include<iostream>
using namespace std;

class Hero{
    private:
    int power;
    
    char level;

    public:
    //constructor creation 
    Hero(){
        //this is simple constructor;
        cout<<"Simple constructor called: "<<endl;
    }

    //parameterized constructor 
    
    Hero(int health){
        this->power = health;
        
    }
    
    //multi-parameterized constructor
    Hero(int health,char level){
        this->power = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero &temp){
        this->power = temp.power;
        this->level = temp.level;
    }
    //print function
    void print(){
        
        cout<<"Health: "<<this->power<<endl;
        cout<<"Level: "<<this->level<<endl;
    }
    char name[100] ="Sach";
    //getter function
    int getHealth(){
        return power;
    }
   
    char getLevel(){
        return level;
    }
    //setter function
    void setHealth(int h){
        power = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    
};
