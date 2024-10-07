class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        vector<string>binary;
        vector<int>res;
        string temp="";
        for (int i=0; i<nums.size(); i++)
        {
            binary.push_back(convert(nums[i]));
        }
        temp = binary[0] + binary[1] + binary[2];
        res.push_back(std::stol(temp, nullptr, 2));

        temp = binary[0] + binary[2] + binary[1];
        res.push_back(std::stol(temp, nullptr, 2));

        temp = binary[1] + binary[0] + binary[2];
        res.push_back(std::stol(temp, nullptr, 2));

        temp = binary[1] + binary[2] + binary[0];
        res.push_back(std::stol(temp, nullptr, 2));

        temp = binary[2] + binary[0] + binary[1];
        res.push_back(std::stol(temp, nullptr, 2));

        temp = binary[2] + binary[1] + binary[0];
        res.push_back(std::stol(temp, nullptr, 2));

       sort(res.begin(), res.end());
        return res[5];


        
    }
  string convert(int num) {
        if (num == 0) return "0";
        string binary = "";
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        return binary;
    }
};