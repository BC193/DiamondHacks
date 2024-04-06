require('dotenv').config()
 
const config = {
    DB_URL: process.env.DB_URL
}
 
module.exports = config;

const mongoose = require('mongoose');
 
mongoose.connect(config.databaseUrl, {
    useNewUrlParser: true,
    useUnifiedTopology: true }).then(() => {
  console.log('Connected to MongoDB database');
});

