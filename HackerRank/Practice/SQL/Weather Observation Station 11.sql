https://www.hackerrank.com/challenges/weather-observation-station-11/problem?isFullScreen=true




/*
Enter your query here.
*/
select distinct city from station where left(city,1) not in ("a","e","i","o","u")
OR right(city,1) not in ("a","e","i","o","u");