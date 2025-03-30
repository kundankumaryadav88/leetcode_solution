/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
   let left = 0 , right = nums.length  -1;

   while(left < right ){
    let peak = Math.floor((left + right)/ 2);

    if(nums[peak] > nums[peak +1]){
        right = peak;
    }
    else{
        left = peak +1;
    }
   }
return left;
};