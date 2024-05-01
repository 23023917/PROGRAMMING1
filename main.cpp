#include <iostream>
#include <cmath>

using namespace std;


//function prototype
double distance(int ,int,int,int);


int main()
{
    cout << "Calculate the euclidian distance between two points" << endl;


    int x1,x2,y1,y2;
    cout << "Enter the value of x1:" << endl;
    cin>>x1;
    cout  << "Enter the value of x1:" << endl;
    cin>>x2;
    cout  << "Enter the value of x1:" << endl;
    cin>>y1;
    cout  << "Enter the value of x1:" << endl;
    cin>>y2;


    double results;
    results=distance(x1,x2,y1,y2);
    cout<< "The distance between point 1 and point 2 is:" <<results<< endl;

    return 0;
}


  double distance (int x1,int x2,int y1, int y2) {

    int k,r;
    k=x2-x1;
    r=y2-y1;

   return sqrt(pow(k,2) + pow(r,2));

}
