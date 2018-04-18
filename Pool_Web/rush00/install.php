<?php
	include "login.php";
	$sql = mysqli_connect("localhost", "root", PASSWORD);
	mysqli_query($sql, "CREATE DATABASE IF NOT EXISTS myshop");
	$sql = mysqli_connect("localhost", "root", PASSWORD, "myshop");
	$sql_content = file_get_contents('myshop.sql');
	mysqli_multi_query($sql, $sql_content);
?>