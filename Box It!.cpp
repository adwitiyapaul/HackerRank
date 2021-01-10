class Box{
    private:
        int l;
        int b;
        int h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length, int breadth, int height){
          l=length;
          b=breadth;
          h=height;  
        }
        Box(const Box& B){
          this->l=B.l;
          this->b=B.b;
          this->h=B.h;
        }
        int getLength() const { return l; }
        int getBreadth() const { return b; }
        int getHeight() const { return h;}
        long long CalculateVolume(){
            long long vol;
            vol=(long long) l*b*h;
            return vol;
        }
        bool operator<(Box& B1)
        {
            int ll=B1.getLength();
            int bb=B1.getBreadth();
            int hh=B1.getHeight();
            if((l < ll) || (b < bb && l==ll) || (h < hh && b==bb && l==ll))
                return true;
            else {
                return false;
            }
        } 
        friend ostream& operator<<(ostream& out, Box B)
        {
            int l=B.getLength();
            int b=B.getBreadth();
            int h=B.getHeight();
            return out<<l<<' '<<b<<' '<<h;
        }      
};
