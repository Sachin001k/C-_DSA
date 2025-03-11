#include<iostream>

using namespace std;

class Human{

    public:
    int height;
    
    int weight;
    int age;

    void setWeight(int w){
        this->weight = w;
    }
    int getHeight(){
        return this->height;
    }
    int getWeight(){
        return this->weight;
    }
};

class Male: public Human{
    public:
    string color;
    protected:
    void sleep(){
        cout<<"sleeping"<<endl;
        cout<<endl;
    }
};

int main(){
    Male obj1;
    obj1.setWeight(50);
    cout<<"get weight: "<<obj1.weight<<endl;
    cout<<"get color: "<<obj1.color<<endl;
    //obj1.sleep();
}