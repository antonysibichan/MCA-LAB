<?php
	$indianPlayers = array(
		"MS Dhoni(c)",
		"virat Kohli(vc)",
		"Rohit Sharma",
		"Ravindra Jadeja",
		"KL Rahul",
		"Shikhar Dhawan",
		"Sanju Samson",
		"Hardik Pandya",
		"Mohammed Shami",
		"Jasprit Bhumrah",
		"Sachin Tendulkar"
		
	);
	function generateTable($data){
		echo "<table border='1'>";
		echo "<tr><th>Indian Cricket Players</th></tr>";
		foreach ($data as $player){
			echo "<tr><td>$player</td></tr>";
		}
		echo "</table>";
	}
	generateTable($indianPlayers)
?>		
