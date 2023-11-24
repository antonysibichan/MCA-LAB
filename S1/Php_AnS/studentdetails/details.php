
<?php
$servername="localhost";
$username="username";
$password="password";
$db="antonydb";
$conn=new mysqli(servername,$username,$password,

if($_SERVER["REQUEST_METHOD"]=="POST"){
	$name=$_POST["name"];
	$rollno=$_POST["rollno"];
	$email=$_POST["email"];
	$mobile=$_POST["mobile"];
	$department=$_POST["dept"];

	echo "Registration successful!Welcome,".$name."!";
	}
?>
	<table style="margin-top:200px"border="1" align="center">
		<tr>
			<th colspan="2" style="color:red">YOUR PROFILE</th>
		</tr
		<tr>
			<th>NAME</th>
			<td><?php echo $name ?></td>
		</tr>
		<tr>
			<th>ROLLNO</th>
			<td><?php echo $rollno ?></td>
		</tr>
		<tr>
			<th>EMAIL</th>
			<td><?php echo $email ?></td>
		</tr>
		<tr>
			<th>MOBILENO</th>
			<td><?php echo $mobile ?></td>
		</tr>
	</table>
