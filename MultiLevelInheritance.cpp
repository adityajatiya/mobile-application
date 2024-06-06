#include<iostream>
using namespace std;
class Mobile{
    public:
    void camera(){
        cout<<"this is camera"<<endl;
    }
    void storage(){
        cout<<"this is storage"<<endl;
    }
    void ram(){
        cout<<"this is ram"<<endl;
    }
    void battery(){
        cout<<"this is battery"<<endl;
    }
};      
class iPhone12 : public Mobile{
     public:
        void camera(){
            cout<<"Camera = 12MP"<<endl;
        }
        void storage(){
            cout<<"Storage = 128GB"<<endl;
        }
        void ram(){
            cout<<"Ram = 4GB"<<endl;
        }
        void battery(){
            cout<<"Battery = 3500MAh"<<endl;
        }
};
class iPhone13 : public iPhone12{
     public:
        void camera(){
            cout<<"Camera = 20MP"<<endl;
        }
        void storage(){
            cout<<"Storage = 256GB"<<endl;
        }
        void ram(){
            cout<<"Ram = 6GB"<<endl;
        }
        void battery(){
            cout<<"Battery = 4000MAh"<<endl;
        }
};
class iPhone15 : public iPhone13{
     public:
        void camera(){
            cout<<"Camera = 48MP"<<endl;
        }
        void storage(){
            cout<<"Storage = 512GB"<<endl;
        }
        void ram(){
            cout<<"Ram = 8GB"<<endl;
        }
        void battery(){
            cout<<"Battery = 4500MAh"<<endl;
        }
};
class iPhone15ProMax : public iPhone15{
     public:
        void storage(){
            cout<<"Storage = 1TB"<<endl;
        }
        void battery(){
            cout<<"Battery = 5000MAh"<<endl;
        }
};
int main()
{
    cout<<"In Mobile"<<endl<<endl;
    Mobile m;
    m.camera();
    m.storage();
    m.ram();
    m.battery();
    cout<<endl<<"In IPhone 12"<<endl<<endl;
    iPhone12 m1;
    m1.camera();
    m1.storage();
    m1.ram();
    m1.battery();
    cout<<endl<<"In IPhone 13"<<endl<<endl;
    iPhone13 m2;
    m2.camera();
    m2.storage();
    m2.ram();
    m2.battery();
    cout<<endl<<"In IPhone 15"<<endl<<endl;
    iPhone15 m3;
    m3.camera();
    m3.storage();
    m3.ram();
    m3.battery();
    cout<<endl<<"In IPhone 15 Pro Max"<<endl<<endl;
    iPhone15ProMax m4;
    m4.camera();
    m4.storage();
    m4.ram();
    m4.battery();
}
