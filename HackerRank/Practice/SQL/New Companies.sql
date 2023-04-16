https://www.hackerrank.com/challenges/the-company/problem?isFullScreen=true




/*
Enter your query here.
*/
select C.company_code, founder
, count(distinct lead_manager_code) 
, count(distinct senior_manager_code) 
, count(distinct manager_code)
, count(distinct employee_code)
from Company C
inner join Employee E on E.company_code = C.company_code
group by C.company_code, founder
order by C.company_code