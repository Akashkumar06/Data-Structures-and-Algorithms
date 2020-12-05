
class Solution {
public:
    int maxArea(vector<int>& height) {
        int min_index=0;
        int max_index=height.size()-1;
        int min_height=height[min_index];
        int max_height=height[max_index];
        if(max_height<min_height){
            min_index=max_index;
            max_index=0;
            min_height= max_height;
            max_height=height[max_index];


        }
        int w=height.size()-1;
        int max_area=min_height*w;
        while (w>0){
            int index=min_index;
            while(height[index]<=min_height){
                if(min_index<max_index){
                    index++;
                }
                else{
                    index--;
                }
                w--;
                if(width<1) break;

            }
            if(height[index]>max_heigth){
                min_height=max_height;
                min_index=max_index;
                max_index=index;
                max_height=height[index];
            }else{
                min_index=index;
                min_height=height[index];
            }
            max_area=max(max_area,w*min_height)
        }



        return max_area;

    }
};
