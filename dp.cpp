#include <iostream>
using namespace std;

void separetion()
{
    cout << "<=========================================>" << endl;
}

class GPS
{
private:
    int x, y, z;
    


public:
    GPS()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    void setx (int x)
    {
        this->x = x;
    }

    void sety (int y)
    {
        this->y = y;
    }

    void setz (int z)
    {
        this->z = z;
    }

    int Getx()
    {
        return this->x;
    }

    int Gety()
    {
        return this->y;
    }

    int Getz()
    {
        return this->z;
    }
   
    ~GPS() {}
};

class STAT
{
private:
    int current_speed;
    int fuel_consumption;
    int current_ammunition;
    
    
public:
    STAT(/* args */)
    {
      current_speed = 0;
      fuel_consumption = 0; 
      current_ammunition = 0;
      
    }
    
  
    void SetSpeed(int current_speed)
    {
        this->current_speed = current_speed;
    }
    void SetConsupt(int fuel_consumption)
    {
        this->fuel_consumption = fuel_consumption;
    }
    void SetAmmunition(int current_ammunition)
    {
        this->current_ammunition = current_ammunition;
    }
    int GetSpeed()
    {
        return this->current_speed;

    }
    int GetConsupt()
    {
        return this->fuel_consumption;
    }
    int GetAmmunition()
    {
        return this->current_ammunition;
    }
    ~STAT() {}
};

class STAT2 : public STAT
{
private:
    STAT stat;
    int stat2;
public:

    STAT2(/* args */)
    {
     
    }
    
    ~STAT2() {}
};

class GPS2 : public GPS
{
private:
    GPS gps;
    int gps2;
public:
    GPS2(/* args */)
    {

    }
    ~GPS2() {}
};


class Bayraktar
{
private:
    string title = "Bombardirka";
    STAT stat;
    STAT2 stat2;
    GPS gps;
    GPS2 gps2;
    string Camerainit;

    
public:
   void GetStatBeforeTurn()
   {
    cout << "Speed          : " << stat2.GetSpeed()<< " Km/h" << endl;
    cout << "Fuel Consuption: " << stat2.GetConsupt() << " L for 10km" << endl;
    cout << "Ammunition     : " << stat2.GetAmmunition() << " Rockets" << endl;
   }
   void GetPosBeforeTurn()
   {
        cout << "x: " << gps2.Getx() << endl;
        cout << "y: " << gps2.Gety() << endl;
        cout << "z: " << gps2.Getz() << endl;
   }

   
    Bayraktar(/* args */)
    {
       
       stat.SetSpeed(200);
       stat.SetConsupt(50);
       stat.SetAmmunition(5);

        gps.setx(1350);
        gps.sety(1500);
        gps.setz(3000);
        
       
        
    }
    void GetStatAfterTurn()
   {
    cout << "Speed          : " << stat.GetSpeed() << " Km/h" << endl;
    cout << "Fuel Consuption: " << stat.GetConsupt() << " L for 10km" << endl;
    cout << "Ammunition     : " << stat.GetAmmunition() << " Rockets" << endl;
    
   }
    void GetPosAfterTurn()
    {
        cout << "x: " << gps.Getx() << endl;
        cout << "y: " << gps.Gety() << endl;
        cout << "z: " << gps.Getz() << endl;

    }
    ~Bayraktar() {}
};

int main(int argc, char const *argv[])
{
    bool status = 0;
    cout << "Please Turn Bayraktar" << endl;
    cout << "Allowed values 0 - off, 1 - on." << endl;
    cout << "Enter status : ";
    cin >> status;
    
    Bayraktar currentstat;
    if (status == 0)
    {
       cout << "Our Bayraktar stay(" << endl;
       currentstat.GetPosBeforeTurn();
       separetion();
       currentstat.GetStatBeforeTurn();
    }
    else if (status == 1)
    {
        cout << "Our Bayraktar Flying!!!" << endl;
        separetion();
        currentstat.GetPosAfterTurn();
        separetion();
        currentstat.GetStatAfterTurn();
    }
    else
    {
        cout << "You write incorrect values!!!" << endl;
    }

    return 0;
}

