/* sudo npm install -g hiredis redis */
/** 

https://github.com/joyent/node/wiki/modules
https://github.com/mranney/node_redis/
http://redis.io/commands

**/

var redis = require("redis"),
    client = redis.createClient();

client.on("error", function (err) {
    console.log("Error " + err.message);
});

result = client.lrange("myList", 0, 0 ,function (err, obj) {
    console.dir(obj);
});