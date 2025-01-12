-- Date 
-- date,datetime,timestamp,year,time
select * from emp;
update emp SET Hired_date=now();
-- now()
select now();
-- =================================================================

-- date
select date(now());
-- =================================================================

-- current_date
select current_date();
-- =================================================================

-- curdate
select curdate();
-- =================================================================

-- date_format
select date_format(curdate(),"%d/%m/%y");
-- =================================================================

-- datediff
select datediff(curdate(),"2003-12-16");
-- =================================================================

-- date_add
select date_add(curdate(),interval 1 day);
select date_add(curdate(),interval 1 week);
select date_add(curdate(),interval 1 month);
select date_add(curdate(),interval 1 year);
-- =================================================================
