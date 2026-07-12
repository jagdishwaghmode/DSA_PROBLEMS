class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int startHr = (startTime[0]-'0')*10 + (startTime[1]-'0');
        int endHr = (endTime[0]-'0')*10+(endTime[1]-'0');
        int hrDiff = endHr-startHr;

        int startMin = (startTime[3]-'0')*10+(startTime[4]-'0');
        int endMin = (endTime[3]-'0')*10+(endTime[4]-'0');
        int minDiff = endMin-startMin;

        int startSec = (startTime[6]-'0')*10+(startTime[7]-'0');
        int endSec = (endTime[6]-'0')*10+(endTime[7]-'0');
        int secDiff = endSec-startSec;

        return (hrDiff*3600+minDiff*60+secDiff);
    }
};