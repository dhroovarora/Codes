https://www.hackerrank.com/challenges/the-pads/problem?isFullScreen=true




/*
Enter your query here.
*/
select concat(name,'(',left(occupation,1),')') as result from occupations
union all
select concat('There are a total of ',count(*),' ',lower(occupation),'s.') as result from occupations 
group by occupation order by result asc;