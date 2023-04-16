https://www.hackerrank.com/challenges/weather-observation-station-20/problem?isFullScreen=true




SET @n := -1;

SELECT ROUND(AVG(sorted.LAT_N), 4) as median
FROM
(SELECT @n := @n + 1 as n, LAT_N
from STATION
ORDER BY LAT_N) as sorted
WHERE sorted.n in (floor(@n/2), ceil(@n/2));