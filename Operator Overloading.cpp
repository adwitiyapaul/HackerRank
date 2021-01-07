class Matrix
{
    public:
        vector<vector<int> > a;
        Matrix & operator + (const Matrix &y)
        {
            for (int m=0; m<y.a.size(); ++m)
            {
                for (int n=0; n<y.a[0].size(); ++n)
                {
                    this->a[m][n] = this->a[m][n] + y.a[m][n];
                }
            }
            return *this;
        }
};
