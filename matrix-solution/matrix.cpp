this->values[i] = new int[n];
}
}

Matrix::Matrix(int**values,int m, int n)
{
this->n = n;
this->values = new int*[m];
this->m = m;
for(int i = 0; i <m; i++)
{
   this->values[i] = new int[n];
   for(int j = 0; j< n; j++)
   {
       this->values[i][j]= values[i][j];
   }
}
}



void Matrix::print()
{
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
       cout << values[i][j] << "\t";
   }
   cout << endl;
}
}
