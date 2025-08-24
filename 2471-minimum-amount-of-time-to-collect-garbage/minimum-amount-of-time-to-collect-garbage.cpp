class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();

        int picktimeP = 0;
        int picktimeM = 0;
        int picktimeG = 0;

        int lasthouseP = 0;
        int lasthouseM = 0;
        int lasthouseG = 0;

        for (int i = 0; i < n; i++) {
            for (char c : garbage[i]) {
                if (c == 'P') {
                    picktimeP++;
                    lasthouseP = i;
                } else if (c == 'M') {
                    picktimeM++;
                    lasthouseM = i;
                } else if (c == 'G') {
                    picktimeG++;
                    lasthouseG = i;
                }
            }
        }

        vector<int> prefix(n, 0);
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + travel[i - 1];
        }

        int totalTime = (picktimeP + picktimeM + picktimeG) +
                        prefix[lasthouseP] + prefix[lasthouseM] +
                        prefix[lasthouseG];

        return totalTime;
    }
};


// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {

//     //    paper truck
//         int picktimeP = 0;
//         int traveltimeP = 0;
//         int lasthouseP = 0;
//     // metal truck
//         int picktimeM = 0;
//         int traveltimeM = 0;
//         int lasthouseM = 0;
// //     glass truck
//         int picktimeG = 0;
//         int traveltimeG = 0;
//         int lasthouseG = 0;

//         // house travel

//          for (int i=0; i<garbage.size(); i++){
//             string currhouse = garbage[i];
//             for(int j=0;j<currhouse.length();j++){
//               char garbagetype = currhouse[j];
//               if(garbagetype == 'P'){
//                 picktimeP++;
//                 lasthouseP = i;
//               }

//                if (garbagetype == 'M'){
//                 picktimeM++;
//                lasthouseM = i;
//                }

//                if (garbagetype == 'G'){
//                 picktimeG++;
//                 lasthouseG = i;
//                }

//             }

//          }

//     //    travel time for p
//            for (int i=0;i<lasthouseP;i++){
//                 traveltimeP = traveltimeP + travel[i];
//          }

//            for (int i=0;i<lasthouseM;i++){
//              traveltimeM = traveltimeM + travel[i];
//         }
//            for (int i=0;i<lasthouseG;i++){
//              traveltimeG = traveltimeG + travel[i];
//         }
//     int totalpicktime = picktimeP + picktimeM + picktimeG;
//     int totaltraveltime = traveltimeP+traveltimeM+traveltimeG;
//     int totaltime = traveltimeP + totaltraveltime;

//     return totaltime;
//     }
// };