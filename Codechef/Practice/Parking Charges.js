https://www.codechef.com/practice/course/javascript/PRACTICEJS01/problems/PARKINGCHARG




// Complete the code 

function totalAmount(x, y, h){
    console.log(x + (h-1)*y);
}

// Input related code. Please do not change this.
process.stdin.setEncoding('utf8');
process.stdin.on('data', function(input) {
  const nums = input.trim().split(' ');
  const x = parseInt(nums[0]); 
  const y = parseInt(nums[1]); 
  const h = parseInt(nums[2]); 
  totalAmount(x, y, h);
});