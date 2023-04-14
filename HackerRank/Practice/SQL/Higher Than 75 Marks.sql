https://www.hackerrank.com/challenges/more-than-75-marks/problem?isFullScreen=true




/*
Enter your query here.
*/
select name from students where marks > 75 ORDER BY right(name,3),ID asc;