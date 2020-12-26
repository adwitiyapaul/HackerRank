class Student
{
    private:    
        int scores[5];
    public:
        void input()
        {
            for(int i=0;i<5;i++)
                cin>>scores[i];
        }
        int calculateTotalScore()
        {
            int total_score=0;
            for(int i=0;i<5;i++)
                total_score+=scores[i];
            return total_score;
        }
};
