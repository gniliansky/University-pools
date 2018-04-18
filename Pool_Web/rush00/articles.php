<?php 
session_start();
include 'header.php';
	include "login.php";
?>
<html>
<head>
</head>
<body>
<?php
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
?>
		<div class="articles">
			 <?php
			 if (isset($_GET['id_cat'])){
					$id_cat = $_GET['id_cat'];
				}
			 	$sql = mysqli_connect('localhost', 'root', PASSWORD);
				mysqli_select_db($sql, "myshop") or die ("Cannont select main db");
				$result = mysqli_query($sql, "SELECT * FROM articles WHERE id_cat = '$id_cat' ORDER BY art_id ");
   				while ($row1 = mysqli_fetch_array($result))
  	 			{
					$name = $row1['art_name'];
					$img_path = $row1['art_img'];
					$price = $row1['art_price']." UAH";
					$id = $row1['art_id'];
					echo '	
						<div class="goods">
						<div class="img"><img style="height:300px;" src="'.$img_path.'"></div>
						<div class="name">'.$name.'</div>
						<div class="price">'.$price.'</div>
						<form  action="add_cart.php" method="post">
						<input class="button" type="submit" name="submit" value="ADD TO CART">
						<input type="hidden" name="art_id" value="'.$id.'">
						<input type="hidden" name="art_name" value="'.$name.'">
						<input type="hidden" name="art_price" value="'.$price.'">
						<input type="hidden" name="art_number" value="1">        
						</form>
						</div>';													
				}	
			?>
		</div>

</body>
</html>