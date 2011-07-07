/* ENUMS */
enum Phases {
	INIT, STANDBY, RAWSEARCH, FINESEARCH
};

/* Classes */
class Test{
	Test();
}

/* BOOST_FOREACH for <vector> */
BOOST_FOREACH(SetValues::value_type const & tmpValue, all_my_values){
	// do something with tmpValue
}

/* BOOST_FOREACH for <boost::undordered_map> */
BOOST_FOREACH(SetValues::value_type const & tmpValue, all_my_values){
	 // key
	 	cout << tmpValue.first;
	 // value
		cout << tmpValue.second;
}

/* Iterator for each */
for (unordered_map::iterator it = map.begin(); it != map.end(); ++it) {
	 // key
	 	cout << it->first;
	 // value
		cout << it->second;
}

/* Map insert */

map.insert(MapType::value_type("John Lock", 65)); 