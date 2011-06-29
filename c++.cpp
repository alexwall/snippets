/* ENUMS */
enum Phases {
	INIT, STANDBY, RAWSEARCH, FINESEARCH
};

/* Classes */
class Test{
	Test();
}

/* BOOST_FOREACH */
BOOST_FOREACH(SetVector3D::value_type const & tempVec, all_my_vectors){
	// do something with tempVec
}

/* Iterator for each */
for (unordered_map::iterator it = map.begin(); it != map.end(); ++it) {
	 // key
	 	cout << it->first;
	 // value
		cout << it->second;
}