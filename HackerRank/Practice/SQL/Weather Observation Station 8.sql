https://www.hackerrank.com/challenges/weather-observation-station-8/problem?isFullScreen=true




/*
Enter your query here.
*/
select DISTINCT CITY from STATION where left(CITY,1) IN ("A","E","I","O","U") AND right(CITY,1) IN ("A","E","I","O","U");