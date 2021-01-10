#include <vector>
#include <iostream>

typedef pair<int,int> p;
typedef vector<p> Available_Workshops;

Available_Workshops* initialize(int *start_time, int *duration, int n) {
    auto aw = new Available_Workshops(n);
    for(int i = 0; i < n; i++){
        aw->at(i).first = start_time[i];
        aw->at(i).second = start_time[i]+duration[i];
    }
    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* data) {
    sort(data->begin(),data->end(), [](const p &a, const p &b) { return a.second < b.second; });
    int f = 0, res = 0;
    for(int i = 0; i < data->size(); i++){
        if(data->at(i).first >= f){
            res++;
            f = data->at(i).second;
        }
    }
    return res;
}
