https://www.hackerrank.com/challenges/african-cities/problem?isFullScreen=true




select ci.name from city ci join country co on ci.countrycode = co.code where co.continent = 'Africa';