#include <iostream>

bool leap_year(int year){
    bool ly = false;
    if(year % 4 ==0){
        ly = true;
    }
    if(year % 100 == 0){
        ly = false;
    }
    if(year % 400 == 0){
        ly = true;
    }
    

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        if(d1 == 30){
            m2 = m1 + 1;
            d2 = 1;
            y2=y1;
        }
        else{
            m2= m1;
            d2= d1 + 1;
            y2=y1;
        }
    }
    if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        if(d1 == 31){
            if(m1 == 12){
                m2 = 1;
                d2 = 1;
                y2 = y1+1;

            }
            else{
                m2 = m1 +1;
                d2 = 1;
                y2=y1;
            }
        }
        else{
            m2 = m1;
            d2 = d1 + 1;
            y2=y1;
        }

    }

    else if(m1 == 2){
        if(leap_year(y1)){
            if(d1 == 29){
                m2 = m1 + 1;
                d2 = 1;
                y2=y1;
            } 
            else{
                m2=m1;
                d2 = d1 + 1;
                y2=y1;
            }
        }
        else{
            if(d1 == 28){
                m2 = 3;
                d2 = 1;
                y2=y1;
            }
            else{
                m2 = m1;
                d2=d1+1;
                y2=y1;
            }

        }
    }
}

int main(){
    int d1, m1, y1;
    int d2, m2, y2;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2;
}