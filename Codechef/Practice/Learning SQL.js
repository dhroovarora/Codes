https://www.codechef.com/practice/course/javascript/PRACTICEJS01/problems/LEARNSQL




// Complete the code

function totalCells(r, c, e){
   console.log((r+e)*c);
}

// Input related code. Please do not change this.
process.stdin.setEncoding('utf8');
process.stdin.on('data', function(input) {
  const nums = input.trim().split(' ');
  const r = parseInt(nums[0]); 
  const c = parseInt(nums[1]); 
  const e = parseInt(nums[2]); 
  totalCells(r, c, e);
});