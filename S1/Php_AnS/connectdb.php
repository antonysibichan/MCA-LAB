<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta name="viewport" content="width=device-width,initial-scale=1.0">
			<title>Database Data</title>
				<style>
				table{
					width:50%;
					border-collapse:collapse;
					margin:20px 0;
					}
				table,th,td{
					border:1px solid blue;
					}
				th,td{
					padding:10px;
					text-align:left;
					}
				</style>
	</head>
		<body>
		<?php
			$servername="localhost";
			$username="root";
			$password="";
			$database="antonydb";
			$conn=new mysqli($servername,$username,$password,$database);
				
				
			if($conn->connect_error){
				die("Connection failed:".$conn->connect_error);
			}
			
			$sql="select * from tbl_users";
			$result=$conn->query($sql);
				
				
			if($result->num_rows>0){
				echo"<table><tr><th>ID</th><th>Name</th><th>Email</th></tr>";
				
				while($row=$result->fetch_assoc()){
					
					echo"<tr><td>".$row["student_id"]."</td><td>".$row["student_name"]."</td><td>".$row["student_email"]."</td></tr>";
				}
			
				echo"</table>";
			
			}else{
				
				echo"0 result found";
				
			}
			
			$conn->close();
		?>
		</body>
</html>

	
		
				
	
