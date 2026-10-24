class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int m1 = stoi(arriveAlice.substr(0,2));
        int m2 = stoi(arriveBob.substr(0,2));
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto convert = [&](string s) {
            int month = stoi(s.substr(0, 2));
            int day = stoi(s.substr(3, 2));

            for (int i = 0; i < month - 1; i++)
                day += days[i];

            return day;
        };
        int a1 = convert(arriveAlice);
        int b1 = convert(arriveBob);
        int c1 = convert(leaveAlice);
        int d1 = convert(leaveBob);
        int start = max(a1,b1);
        int end = min(c1, d1);

        return max(0,end - start + 1);

    }
};