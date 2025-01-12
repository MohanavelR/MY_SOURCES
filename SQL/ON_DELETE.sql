-- on delete
create table branch(
branch_id int auto_increment primary key,
branch_name varchar(20) not NULL,
address varchar(50)
);
create table emp(
emp_id int primary key auto_increment,
ename varchar(50),
job varchar(50),
salary bigint,
branch_id int ,
 constraint for_key_branch_id foreign key (branch_id) references branch (branch_id) 
 on delete set null
);
-- set null is when delete branch id set null
create table emp(
emp_id int primary key auto_increment,
ename varchar(50),
job varchar(50),
salary bigint,
branch_id int ,
 constraint for_key_branch_id foreign key (branch_id) references branch (branch_id) 
 on delete cascade
);
-- cascade is when delete branch_id same time branch_id in row also delete

