https://www.hackerrank.com/challenges/asian-population/problem?isFullScreen=true




select sum(ci.population) from city ci join country co on ci.countrycode = co.code where co.continent = 'Asia';