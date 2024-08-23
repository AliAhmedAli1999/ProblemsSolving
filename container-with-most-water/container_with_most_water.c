int maxArea(int* height, int heightSize) {
    unsigned int Right = heightSize - 1;
    unsigned int Left = 0;
    unsigned max = 0;
    unsigned currentHight =height[Left];
    
    while (Right != Left)
    
    {
        currentHight = (height[Right] < height[Left]) ? height[Right] :height[Left];
        unsigned int temp = currentHight * (Right - Left);
        if(temp >max)
        {
            max = temp;
        } 
        if(height[Right] >height[Left])
        {
            Left++;
        }
        else 
        {
            Right--;
        }
    }




    return max;
}