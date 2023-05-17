
//Write a Program of Two 1D Matrix Addition using Operator Overloading//
#include <iostream>
using namespace std;
class matrix
{
    int r=0,c=0,i=0,j=0,e[10][10];
public:
    matrix getMatrix()
    {
        cout<<"rows of matrix:"<<endl;
        cin>>r;
        cout<<"columns of matrix:"<<endl;
        cin>>c;
        cout<<"elements of the matrix:"<<endl;
        for(i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                cin>>e[i][j];
            }
        }
    }
    //operater declar
    matrix operator +(matrix m)
    {
        matrix sumMatrix;
        for(i=0; i<r; i++)
        {
            for (j=0; j<c; j++)
            {
                sumMatrix.e[i][j]=this->e[i][j]+m.e[i][j];
            }
        }
        return sumMatrix;
    }
    void displayMatrix()
    {
        for(i=0; i<r; i++)
        {
            cout<<endl;
            for (j=0; j<c; j++)
            {
                cout<<this->e[i][j]<<"    ";
            }
        }
    }
};
int main()
{
    cout<<"NOTE: In order to add matrices, they must have same dimension."<<endl;
    matrix m1,m2,m3;
    cout<<"1st matrix:"<<endl;
    m1.getMatrix();
    m1.displayMatrix();cout<<endl;
    cout<<"2nt matrix:"<<endl;
    m2.getMatrix();
    m2.displayMatrix();cout<<endl;
    m3=m1+m2;
    cout<<"The sum of the two matrices is:"<<endl;
     m3.displayMatrix();
    return 0;
    
    
}
