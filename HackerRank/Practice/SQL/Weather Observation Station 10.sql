https://www.hackerrank.com/challenges/weather-observation-station-10/problem?isFullScreen=true




/*
Enter your query here.
*/
select distinct city from station where right(city,1) not in ("a","e","i","o","u");