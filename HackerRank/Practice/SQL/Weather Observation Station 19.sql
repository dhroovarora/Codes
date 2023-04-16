https://www.hackerrank.com/challenges/weather-observation-station-19/problem?isFullScreen=true




select
round(sqrt((max(long_w) - min(long_w))*(max(long_w) - min(long_w)) + (max(lat_n) - min(lat_n))*(max(lat_n) - min(lat_n))),4) from station;