window.onload = function() {


	var button = document.getElementById("button");
	var div = document.getElementById("ft_s");
	button.addEventListener("click", function(){ft_click();});

	function ft_click() {
		var task = prompt("What do you want to write at TODO?")
		if (task) {
			ft_add_todo(task)
		}
	}
	
	function ft_add_cook(cook_id, todo, days) {
		var cook = new Date();
		cook.setTime(cook.getTime() + (days * 24 * 60 * 60 * 1000));
		var expires = "expires="+cook.toGMTString();
		document.cookie = cook_id + "=" + todo + ";" + expires + ";path=/";
	}

	var id_index = 0;

	function ft_add_todo(task) {
		id_index++;
		cook_id = "task" + id_index;
		ft_add_cook(cook_id, task, 10000);
		var elem = document.createElement("div");
		elem.id = cook_id;
		elem.appendChild(document.createTextNode(task));
		elem.addEventListener("click", function(elem) {
			var del = confirm("Are you sure you want to delete?");
			if (del) {
				ft_add_cook(elem.target.id, "", -1);
				elem.target.remove();
			}
		});
		var list = document.getElementById("ft_list");
		list.insertBefore(elem, list.childNodes[0]);
	}

	var cookies = document.cookie.split(';');
	for(i in cookies) {
		var cookie = cookies[i].trim();	
		var cookie_arr = cookie.split('=');
		var cookie_1 = cookie_arr[0].trim();
		var cookie_2 = cookie_arr[1];
		if (cookie.indexOf("task") === 0) {
			ft_add_cook(cookie_1, "", -1);
			ft_add_todo(cookie_2);
		}
	}
	
}
