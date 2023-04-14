https://www.hackerrank.com/challenges/weather-observation-station-5/problem?isFullScreen=true




/*
Enter your query here.
*/
(select CITY,length(CITY) from STATION order by length(CITY),CITY LIMIT 1) union
(select CITY,length(CITY) from STATION order by length(CITY) desc,CITY LIMIT 1);