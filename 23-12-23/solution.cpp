class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        unordered_map<string,int> points = {};
        points["0,0"]++;

        for(char dir:path){
            switch(dir){
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
            }
            string key = to_string(x)+","+to_string(y); 
            if(++points[key]>1) return true;
        }
        return false;
    }
};