#include <iostream>
using namespace std;
class Matrix{
    
    int n, m, i, j;
    int p;
    int* A ;
    int* B ;
    int* C ;
    
    public:
    void getSize();
    void getA();
    void getB();
    void resultC();
};
void Matrix::getSize(){
    int height,width;
    cout <<"Specify the size of the matrix"<<endl;
    cout <<"Height: " ;
    cin >> height;
    cout <<"Width: " ;
    cin >> width;
    Matrix::n = height;
    Matrix::m = width;
    Matrix::p = height * width;
    
}
void Matrix::getA(){
    Matrix::A = new int[p];
for(i = 0; i < n; i++)
    for(j = 0; j < m; j++) cin >> A[i * m + j];
}
void Matrix::getB(){
    Matrix::B = new int[p];
for(i = 0; i < n; i++)
    for(j = 0; j < m; j++) cin >> B[i * m + j];
}
void Matrix::resultC(){
    Matrix::C = new int[p];
    for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
    {
      p = i * m + j; 
      C[p] = A[p] + B[p];
    }

    cout << endl;
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++) cout << C[i * m + j] << " ";
    cout << endl;
  }    
}


main()
{
    Matrix m1;
    
    m1.getSize();
     
    cout << endl;
    m1.getA();
    cout << endl;
    m1.getB();
    m1.resultC();

}