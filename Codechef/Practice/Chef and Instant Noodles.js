https://www.codechef.com/practice/course/javascript/PRACTICEJS01/problems/INSTNOODLE




// Complete the code

function maxCustomers(X, Y){
    console.log(X*Y);
}

// Input related code. Please do not change this.
process.stdin.setEncoding('utf8');
process.stdin.on('data', function(input) {
  const nums = input.split(' ');
  const x = parseInt(nums[0]);
  const y = parseInt(nums[1]);
  maxCustomers(x, y);
});