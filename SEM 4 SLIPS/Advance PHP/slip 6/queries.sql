CREATE DATABASE slip6;
USE slip6;
CREATE TABLE employee(eno int(3), ename varchar(30), designation varchar(30), salary int(10));
INSERT INTO employee VALUES
(101, 'Vishal Hanchnoli', 'Peon', 1000),
(102, 'Rohit Prajapati', 'Manager', 100000),
(103, 'Adnan Quazi', 'CEO', 200000),
(104, 'Pranav Joshi', 'CTO', 90000),
(105, 'Saniya Sayyed', 'CMO', 100000),
(106, 'Shravani Godambe', 'CFO', 80000),
(107, 'Shabaz Danawade', 'Director', 85000),
(108, 'Abhishek Kumar', 'Vice-President', 150000);

DROP Table employee;