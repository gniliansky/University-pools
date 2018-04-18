<?php 
	session_start();
	include 'header.php';
	include "login.php";

	$sql = mysqli_connect('localhost', 'root', PASSWORD);
	if (!$sql){
		die("Database connection failed\n");
	}
	mysqli_select_db($sql, "myshop") or die ("Cannont select main db");
	$results = mysqli_query($sql, "SELECT * FROM categories ORDER BY id_cat");
	echo '<div class="menu"><p class="categories">'."CATEGORIES".'</p>';
 	 while ($row = $results->fetch_assoc())
 	{
		echo '<div class="cat_name"><a href="articles.php?id_cat='.$row['id_cat'].'" style="text-decoration: none">'.$row['name_cat'].'</a></div>';
	}
   	echo '</div>';
	echo '<img style="margin:20px 0px 0px 120px; width:1000px;" src="http://s3.amazonaws.com/uploads.shareist.com/creativehands_233226_o.png" alt="SALE">';
?>
