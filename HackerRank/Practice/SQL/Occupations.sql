https://www.hackerrank.com/challenges/occupations/problem?isFullScreen=true




/*
Enter your query here.
*/
select
    MIN(CASE WHEN Occupation = 'Doctor' THEN Name ELSE NULL END),
    MIN(CASE WHEN Occupation = 'Professor' THEN Name ELSE NULL END),
    MIN(CASE WHEN Occupation = 'Singer' THEN Name ELSE NULL END),
    MIN(CASE WHEN Occupation = 'Actor' THEN Name ELSE NULL END)
FROM
(SELECT 
    ROW_NUMBER() OVER (PARTITION BY Occupation ORDER BY Name) AS rn,
    Name, Occupation
FROM Occupations) AS rn_count
GROUP BY rn;