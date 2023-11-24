<?php
$db=new mysqli("localhost","root","","antonydb");
if($db->connect_error){
	die("Connection failed:".$db->connect_error);
 }
$result=$db->query("SELECT*from tbl_users");
while($row=$result->fetch_assoc()){
	echo"Name:".$row['student_name']."<br>";
 }
$db->close();
?>
