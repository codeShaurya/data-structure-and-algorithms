
const fs = require('fs');
fs.readFile('./README.md','utf8', (err, data) => {
  if (err) {
  	throw err;
  }
  console.log(data);

});

console.log('This is asynchromus call');
fs.unlinkSync('./README.md');
console.log('File WAs deleted');

require('./app.js');