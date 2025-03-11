#include<iostream>
#include"Hero.cpp"
using namespace std;
int main(){
    
    
    //cout<<"Health: "<<S<<endl;
    //creation of copy of the object S to R
    Hero h1;
    h1.setHealth(120);
    h1.setLevel('z');
    char name[7]="Sachin";
    h1.setName(name);
    //getting things done
    h1.getHealth();
    h1.getLevel();
    h1.print();

    Hero h2(h1);
    h2.print();
    //shallow copy
    h1.name[0]='K';
    h1.print();
    h2.print();

   

    /*Hero h1;
    cout<<"size of h1: "<<sizeof(h1)<<" "<<endl;
    //to get access of private members we need to call getter function
    h1.setHealth(100);
    h1.setLevel('C');

    cout<<"health of h1: "<<h1.getHealth()<<endl;
    cout<<"level of h1: "<<h1.getLevel() <<endl;
    cout<<"name of h1: "<<h1.name<<endl;

    cout<<endl;
    cout<<endl;
    Hero *h = new Hero;
    //dynamically getting acess to data members
    cout<<"health is: "<<(*h).getHealth()<<endl;
    cout<<"Level is: "<<(*h).getLevel()<<endl;
    cout<<"Name is: "<<(*h).name<<endl;
    h->setHealth(99);
    h->setLevel('D');
    
    Hero h2(76);
    //print(78);
    cout<<"health is: "<<h->getHealth()<<endl;
    cout<<"Level is: "<<h->getLevel()<<endl;
    cout<<"Name is: "<<h->name<<endl;

    */

}