CREATE DATABASE slip14;
USE slip14;
CREATE TABLE users(uid VARCHAR(15) PRIMARY KEY, pass VARCHAR(30));
INSERT INTO users VALUES("vsh","abc");
SELECT pass FROM users WHERE uid="aaa";