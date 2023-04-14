https://www.hackerrank.com/challenges/what-type-of-triangle/problem?isFullScreen=true




/*
Enter your query here.
*/
select case
when A+B <= C OR B+C <= A OR A+C <= B THEN 'Not A Triangle'
when A=B AND B=C AND A = C THEN 'Equilateral'
when A = B OR B = C OR A = C THEN 'Isosceles'
else 'Scalene'
END AS type from TRIANGLES;