int main()
{

   const int m = 2;
   const int n = 2;
   int values[m][n];
   srand(time(NULL));
   for(int i = 0; i < m; i++)
   for(int j = 0; j < n; j++)
           values[i][j] = rand() % 50 + 1;



    int * pointers[m];
    for (int i = 0; i < m; i++)
    {
        pointers[i] = values[i];
    }

    Matrix uno (pointers, m, n);
    cout <<"Matrix"<< endl;
    uno.print();
    cout << endl;

    Matrix dos = uno.sum(uno);
    cout <<"Summ matrix"<< endl;
    dos.print();
    cout <<endl;

    return 0;
}
