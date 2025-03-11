#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int power;
    
    char level;

    public:
    char *name;
    //constructor creation 
    Hero(){
        //this is simple constructor;
        cout<<"Simple constructor called: "<<endl;
        name = new char[100]; //dynamically allocating the array

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

    //copy constructor changes here will leads to deepcopy
    Hero(Hero &temp){
        
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->power = temp.power;
        this->level = temp.level;
    }
    //print function
    void print(){
        cout<<"Name:"<<this->name<<endl;
        
        cout<<"Health: "<<this->power<<endl;
        cout<<"Level: "<<this->level<<endl;
        cout<<endl<<endl;
    }
     
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

    void setName(char name[]){
       // name = this->name;
        strcpy(this->name, name);
    }
    void setLevel(char ch){
        level = ch;
    }
    
};
