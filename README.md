## Install

```
npm install --save graphql reason-apollo-server
```

Add

```
"bs-dependencies": [
    "reason-apollo-server",
]
```

to `bsconfig.json`

## Usage

`Schema.re`

```
let typeDefs = {|
  type Query {
    user(id: Int!): User
  }

  type User {
    name: string
  }
|};


let Query = {
  user: (_: GQL.root, {id: int}) => { id, name: "Test"}
};


let schema = GQL.makeExecutableSchema({ typeDefs, resolvers: { Query }})
```

Now import `./src/Schema.bs.js` into express like the example folder shows and you're good to go!
