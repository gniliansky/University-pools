<?php
	session_start();

	if (isset($_SESSION["prod"])) {
		foreach ($_SESSION["prod"] as &$value) {
			if ($value["art_id"] === $_POST['art_id']) {
				$value["art_number"] = $value["art_number"] + $_POST['art_number'];
				header("Location: ".$_SERVER['HTTP_REFERER']);
				return ;
			}
		}	
	}
	$_SESSION["prod"][] = ['art_id' =>  $_POST['art_id'], 'art_name' =>  $_POST['art_name'], 'art_price' =>  $_POST['art_price'],
		'art_number' =>  $_POST['art_number']];
	header("Location: ".$_SERVER['HTTP_REFERER']);
?>