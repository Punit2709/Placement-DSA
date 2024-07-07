#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<int> profit(n);

    for (int i = 0; i < n - 1; i++)
    {
        int maxProfit = 0;
        for (int j = i + 1; j < n; j++)
        {
            int curProfit = prices[j] - prices[i];
            maxProfit = max(maxProfit, curProfit);
        }
        profit[i] = maxProfit;
    }
    profit[n - 1] = 0;

    int profitValue = 0;
    for (int i = 0; i < n; i++)
    {
        profitValue = max(profitValue, profit[i]);
    }
    return profitValue;
}

int maxProfit2(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit = 0;
    int minValue = prices[0];
    for (int i = 0; i < n; i++)
    {
        // if(minValue > prices[i])
        //     minValue = prices[i];
        minValue = min(minValue, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minValue);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {414,863,393,674,205,793,229,379,37,455,594,36,312,667,441,411,514,344,681,359,865,124,984,670,509,337,495,266,275,356,26,229,51,557,292,975,551,985,445,710,467,31,890,694,127,349,631,322,595,59,433,173,944,305,662,379,864,835,355,411,506,10,716,918,872,716,887,453,706,416,245,611,6,403,894,94,852,733,890,131,481,723,571,335,695,475,112,245,389,754,439,990,771,282,935,746,422,627,570,101,212,248,123,633,842,110,272,352,910,926,726,502,396,49,444,581,504,145,765,710,785,126,232,386,245,613,43,591,638,179,438,838,5,486,170,960,273,347,8,176,884,569,528,442,839,573,953,102,802,659,51,675,110,76,531,783,539,806,363,333,214,919,473,303,690,917,793,2,504,7,584,734,527,561,484,648,622,123,655,977,235,999,714,963,921,801,237,752,127,484,772,483,62,544,938,845,218,32,832,174,561,635,44,903,972,550,291,12,234,24,750,182,257,265,276,926,409,865,170,587,35,813,628,991,829,573,226,69,979,188,285,582,276,951,114,634,797,720,306,365};

    int profit = maxProfit2(prices);
    cout << profit;
    
    return 0;
}