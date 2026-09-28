extends Node2D

func _ready():
	test_plugin()

func test_plugin():
	var my_plugin:RWG = RWG.new()
	
	my_plugin.print_logs()
	my_plugin.my_data = "Random data"
	print(my_plugin.my_data)
