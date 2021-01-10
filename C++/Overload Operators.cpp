Complex operator+(const Complex X, const Complex Y) 
{
    Complex Z;
    Z.a = X.a + Y.a;
    Z.b = X.b + Y.b;

    return Z;
}
ostream& operator<<(ostream& os, const Complex C) 
{
    return os << C.a << "+" << "i" << C.b;
}
