class FoodRatings {
public:
    unordered_map<string, int> ratings;
    unordered_map<string, string>cuisines;
    unordered_map<string, set<pair<int, string>>>sorted;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        for(int i=0; i<foods.size(); i++){
            this->ratings[foods[i]] = ratings[i];
            this->cuisines[foods[i]] = cuisines[i];
            this->sorted[cuisines[i]].insert({-ratings[i],foods[i]});
        }

    }
    
    void changeRating(string food, int newRating) {
        string cuisineName = cuisines[food];
        sorted[cuisineName].erase(sorted[cuisineName].find(
            {-ratings[food],food}));
        ratings[food] = newRating;
        sorted[cuisineName].insert({-newRating,food});
    }
    
    string highestRated(string cuisine) {
        for(auto pair: sorted[cuisine]){
            return pair.second;
        }
        return "";
    }
};

