<?php
	function auth($login, $passwd) {
		if ($file = file_get_contents("../private/passwd")) {
	 		$array_data = unserialize($file);
	 		foreach ($array_data as $value) {
	 			if ($value["login"] === $login && ($value["passwd"] === hash('whirlpool', $passwd))) {
	 				return (TRUE);
	 			} 
	 		}
	 	}
	 	return (FALSE);
	}
?>