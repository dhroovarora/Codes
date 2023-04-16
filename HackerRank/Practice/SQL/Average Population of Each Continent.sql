https://www.hackerrank.com/challenges/average-population-of-each-continent/problem?isFullScreen=true




select co.continent, floor(avg(ci.population)) from city ci inner join country co on ci.countrycode = co.code group by co.continent;