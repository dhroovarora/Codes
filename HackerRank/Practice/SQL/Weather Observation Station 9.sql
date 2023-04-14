https://www.hackerrank.com/challenges/weather-observation-station-9/problem?isFullScreen=true




/*
Enter your query here.
*/
select DISTINCT CITY from STATION where left(city,1) not in ("a","e","i","o","u");