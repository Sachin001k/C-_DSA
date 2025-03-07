#include<iostream>
#include"Hero.cpp"
using namespace std;
int main(){
    
    Hero S(70,'C');
    S.print();
    //cout<<"Health: "<<S<<endl;
    //creation of copy of the object S to R
    Hero R(S);
    R.print();
   

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