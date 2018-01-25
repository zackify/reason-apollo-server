let typeDefs = {|
  type Query {
    users: [User]
    user(id: Int!): User
  }

  type User {
    id: Int!
    name: string
  }
|};

type userArgs = {id: int};

let Query = {
  users: () => true,
  user: (_: GQL.root, {id}) => {id, name: "Test"}
};

let Mutation = {
  createUser: () => true
};

let schema = {typeDefs, resolvers: {Query, Mutation} };