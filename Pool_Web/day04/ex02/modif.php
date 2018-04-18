<?php
	if (!$_POST["login"] || !$_POST["oldpw"] || !$_POST["newpw"] || !$_POST["submit"] || $_POST["submit"] !== "OK") {
		echo "ERROR\n";
		return ;
	}

	if ($file = file_get_contents("../private/passwd")) {
	 	$array_data = unserialize($file);
	 	foreach ($array_data as &$value) {
	 		if ($value["login"] === $_POST["login"] && ($value["passwd"] === hash('whirlpool', $_POST["oldpw"]))) {
	 			$value["passwd"] = hash('whirlpool', $_POST["newpw"]);
	 			file_put_contents("../private/passwd", serialize($array_data));
	 			echo "OK\n";
	 			return; 
			}
		} 
	}
	echo "ERROR\n";
?>