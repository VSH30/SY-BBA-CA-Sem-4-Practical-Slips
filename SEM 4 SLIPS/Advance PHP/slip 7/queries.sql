CREATE DATABASE slip7;
USE slip7;
CREATE TABLE Project(P_Group_No INT(2), Project_Title VARCHAR(50));
CREATE TABLE Student(Seat_no INT(3) PRIMARY KEY, Name VARCHAR(50), Class VARCHAR(15), P_Group_No INT(2) REFERENCES Project);
INSERT INTO Project VALUES(1,"Exam Portal"),(2,"Vishakha Furnitures Site"),(3,"College Hunt"),(4,"Nursery Management System");
INSERT INTO Student VALUES
(1,"Vishal Hanchnoli","SYBCA",1),
(50,"Rohit Prajapati","SYBCA",2),
(54,"Adnan Quazi","SYBCA",3),
(56,"Saniya Sayyed","SYBCA",3),
(52,"Rohit Singh","SYBCA",4),
(2,"Abhishek Kumar","SYBCA",4);