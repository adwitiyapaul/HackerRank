class Person
{
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
        protected:
        string name;
        int age, sum=0;
};
class Professor : public Person
{
    public:
        Professor():
            id {current_id++}
        { }
        void getdata()
        {
            cin>>name>>age>>pub;
        }
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<pub<<" "<<id<<endl;
        }
    private:
        int pub;
        int id;
        static int current_id;
};
class Student : public Person
{
    public:
        Student():
            marks(6),
            id {current_id++}
        { }
        void getdata()
        {
            int i;
            cin>>name>>age;
            for (auto& mark : marks)
            {
                cin >> mark;
                sum+=mark;
            }
        }
        void putdata()
        {
            int i;
            cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
        }
    private:
        vector<int> marks;
        int id;
        static int current_id;
};
int Professor::current_id {1};

int Student::current_id {1};
