https://www.hackerrank.com/challenges/weather-observation-station-7/problem?isFullScreen=true




/*
Enter your query here.
*/
select DISTINCT CITY from STATION where right(CITY,1) IN ("A","E","I","O","U");