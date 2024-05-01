#include<bits/stdc++.h>

using namespace std;

class Box{
public:
    Box();
    Box(int l, int b, int h);
    int getLength();
    int getBreadth();
    int getheight();
    long long CalculateVolume();
    friend bool operator < (Box x, Box y){
        if (x.getLength() < y.getLength()) return true;
        if (x.getBreadth() < y.getBreadth() && x.getLength() == y.getLength()) return true;
        if (x.getheight() < y.getheight() && x.getBreadth() == y.getBreadth() && x.getLength() == y.getLength()) return true;
        return false;
    }
    friend ostream& operator << (ostream& out, Box x){
        out << x.getLength() << " " << x.getBreadth() << " " << x.getheight();
        return out;
    }
private:
    int l, b, h;
};

Box::Box(){
    l = 0;
    b = 0;
    h = 0;
}

Box::Box(int l, int b, int h){
    this->l = l;
    this->b = b;
    this->h = h;
}

int Box::getLength(){
    return l;
}

int Box::getBreadth(){
    return b;
}

int Box::getheight(){
    return h;
}

long long Box::CalculateVolume(){
    return 1ll * l * b * h;
}



void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
