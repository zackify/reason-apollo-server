const express = require('express');
const bodyParser = require('body-parser');
const { graphqlExpress, graphiqlExpress } = require('apollo-server-express');

// import schema from generated bucklescript files
const { schema } = require('./src/schema.bs.js');

// Initialize the app
const app = express();

const { PORT = 3000 } = process.env;
const endpointURL = `/`;

// The GraphQL endpoint
app.post(endpointURL, bodyParser.json(), graphqlExpress({ schema }));

// GraphiQL, a visual editor for queries
app.get(endpointURL, graphiqlExpress({ endpointURL }));

// Start the server
app.listen(PORT);
