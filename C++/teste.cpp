   #include<iostream>
   using namespace std;

   int main ()
   {
    int i;
    int *v;
    v = new int[5];

    v[10, 11, 12, 19, 29];

    for(i = 0; i < 5; i++)
    {
        cout << "v["<<i<<"]: "<< v[i] << " no endereco " << &v[i] << endl;
    }

    cout << "\nEndereco de 'v': " << v << endl;

    delete[] v;
}